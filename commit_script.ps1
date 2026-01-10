#!/usr/bin/env pwsh

cd "f:\CSE225"

# Initialize git
git init
git config user.email "test@example.com"
git config user.name "Test User"
git remote add origin https://github.com/shuvosharkr/CSE225.git

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
    $allFiles += $_.FullName -replace 'f:\\CSE225\\', ''
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

# Create date range from January 3 to January 23, 2026
$currentFile = 0
$startDate = Get-Date -Year 2026 -Month 1 -Day 3

# For each day from Jan 3 to Jan 23
for ($dayOffset = 0; $dayOffset -le 20; $dayOffset++) {
    $commitDate = $startDate.AddDays($dayOffset)
    
    # Random number of files: 0, 1, 2, 3, 4, or 5
    $fileCount = Get-Random -Minimum 0 -Maximum 6
    
    # Make sure we don't exceed available files
    if ($currentFile + $fileCount -gt $allFiles.Count) {
        $fileCount = $allFiles.Count - $currentFile
    }
    
    # Skip if no files to commit
    if ($fileCount -eq 0) {
        Write-Output "$(($commitDate).ToString('yyyy-MM-dd')): Skipping (0 files)"
        continue
    }
    
    Write-Output "$(($commitDate).ToString('yyyy-MM-dd')): Adding $fileCount files"
    
    # Add the files
    for ($i = 0; $i -lt $fileCount; $i++) {
        if ($currentFile -lt $allFiles.Count) {
            $file = $allFiles[$currentFile]
            git add "$file"
            $currentFile++
        }
    }
    
    # Create commit with the specific date
    $dateStr = $commitDate.ToString('ddd MMM dd HH:mm:ss yyyy +0000')
    $commitMsg = "Add files for $($commitDate.ToString('yyyy-MM-dd')) - $fileCount file(s)"
    
    # Use git commit with GIT_AUTHOR_DATE and GIT_COMMITTER_DATE
    & {
        $env:GIT_AUTHOR_DATE = $dateStr
        $env:GIT_COMMITTER_DATE = $dateStr
        git commit -m $commitMsg
    }
}

Write-Output "Total files committed: $currentFile"
Write-Output "Commits completed!"
