#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool swaped;
    int swaps = 0;

    for (int i = 0; i < n - 1; i++)
    {
        swaped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }

        swaps++;

        if (!swaped)
            break;
    }

    return swaps;
}

int main()
{
    vector<int> array = {1, 2, 3, 4, 5};

    cout << "UNSORTED ARRAY\t: ";
    for (auto it = array.begin(), end = array.end(); it != end; it++)
        cout << *it << ' ';
    cout << endl;

    int swaps = bubbleSort(array);

    cout << "SORTED ARRAY\t: ";
    for (auto it = array.begin(), end = array.end(); it != end; it++)
        cout << *it << ' ';
    cout << endl;

    cout << "Swaps = " << swaps << endl;

    return 0;
}
