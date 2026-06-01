#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }

    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    recursiveBubbleSort(arr, n);

    for (auto it = arr.begin(), end = arr.end(); it != end; it++)
        cout << *it << ' ';
    cout << endl;

    return 0;
}
