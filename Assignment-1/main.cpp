#include <iostream>
#include "UnsortedType.cpp"
using namespace std;

void mergeLists(UnsortedType<int>& list1, UnsortedType<int>& list2, UnsortedType<int>& result)
{
    int item1, item2;
    list1.ResetList();
    list2.ResetList();

    list1.GetNextItem(item1);
    list2.GetNextItem(item2);

    while (true)
    {
        if (item1 < item2)
        {
            result.InsertItem(item1);
            if (list1.LengthIs() == 1) break;
            list1.GetNextItem(item1);
        }
        else
        {
            result.InsertItem(item2);
            if (list2.LengthIs() == 1) break;
            list2.GetNextItem(item2);
        }
    }

    if (list1.LengthIs() == 1)
    {
        result.InsertItem(item2);
        while (list2.LengthIs() > 1)
        {
            list2.GetNextItem(item2);
            result.InsertItem(item2);
        }
    }
    else
    {
        result.InsertItem(item1);
        while (list1.LengthIs() > 1)
        {
            list1.GetNextItem(item1);
            result.InsertItem(item1);
        }
    }
}

int main()
{
    UnsortedType<int> list1;
    UnsortedType<int> list2;
    UnsortedType<int> result;
    int m = 10, n = 12;

    int arr1[] = {1, 5, 6, 10, 14, 20, 25, 31, 38, 40};
    int arr2[] = {2, 4, 7, 9, 16, 19, 23, 24, 32, 35, 36, 42};

    for (int i = 0; i < m; i++)
    {
        list1.InsertItem(arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        list2.InsertItem(arr2[i]);
    }

    mergeLists(list1, list2, result);

    result.ResetList();
    result.PrintList();

    return 0;
}

