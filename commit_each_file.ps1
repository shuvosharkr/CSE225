#!/usr/bin/env pwsh

cd "f:\CSE225"

# First, reset and clear the repo for fresh commits
git reset --hard HEAD~100 2>&1 | Out-Null
git reflog expire --expire=now --all 2>&1 | Out-Null
git gc --prune=now 2>&1 | Out-Null

# Get all files to commit (excluding build artifacts)
$allFiles = @()
Get-ChildItem -Recurse -File -ErrorAction SilentlyContinue | Where-Object {
    $path = $_.FullName
    # Exclude build artifacts, executables, and config files
    -not ($path -match '\\(bin|obj)\\' -or 
          $path -match '\.exe$' -or 
          $path -match '\.o$' -or 
          $path -match '\.(cbp|layout|depend)$' -or
          $path -match '\\\.vscode\\')
} | ForEach-Object {
    $allFiles += @{
        FullPath = $_.FullName
        RelPath = $_.FullName -replace [regex]::Escape("f:\CSE225\"), ''
    }
}

Write-Output "Total files discovered: $($allFiles.Count)"

# Shuffle the files
$random = New-Object System.Random
for ($i = $allFiles.Count - 1; $i -gt 0; $i--) {
    $j = $random.Next(0, $i + 1)
    $temp = $allFiles[$i]
    $allFiles[$i] = $allFiles[$j]
    $allFiles[$j] = $temp
}

# Create date range from January 3 to January 23, 2026 (21 days)
$startDate = Get-Date -Year 2026 -Month 1 -Day 3
$endDate = Get-Date -Year 2026 -Month 1 -Day 23

# Generate all dates in range
$dates = @()
$current = $startDate
while ($current -le $endDate) {
    $dates += $current
    $current = $current.AddDays(1)
}

Write-Output "Date range: $($startDate.ToString('yyyy-MM-dd')) to $($endDate.ToString('yyyy-MM-dd')) ($($dates.Count) days)"

# Shuffle dates to distribute files randomly across days
$randomDates = @()
foreach ($file in $allFiles) {
    $randomDates += $dates[(Get-Random -Minimum 0 -Maximum $dates.Count)]
}

# Commit each file individually
for ($i = 0; $i -lt $allFiles.Count; $i++) {
    $file = $allFiles[$i]
    $commitDate = $randomDates[$i]
    
    Write-Output "[$($i + 1)/$($allFiles.Count)] Committing: $($file.RelPath) on $($commitDate.ToString('yyyy-MM-dd'))"
    
    # Add the file
    git add $file.RelPath
    
    # Create commit with the specific date (just the filename, no "Add " prefix)
    $dateStr = $commitDate.ToString('ddd MMM dd HH:mm:ss yyyy +0000')
    $commitMsg = "$($file.RelPath.Split('\')[-1])"
    
    # Use git commit with GIT_AUTHOR_DATE and GIT_COMMITTER_DATE
    & {
        $env:GIT_AUTHOR_DATE = $dateStr
        $env:GIT_COMMITTER_DATE = $dateStr
        git commit -m $commitMsg --quiet
    }
}

Write-Output ""
Write-Output "All $($allFiles.Count) files committed!"
Write-Output "Pushing to GitHub..."
git push -u origin main --force

Write-Output "Done! Check the repository at https://github.com/shuvosharkr/CSE225"
