#include <bits/stdc++.h>
using namespace std;

auto selectionSort(vector<int> &arr)
{
    int n = arr.size();
    int swap_itr = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        if (min != i)       // skip self-swap
        {
            swap(arr[i], arr[min]);
            swap_itr++;
        }
    }

    return swap_itr;
}

int main()
{
    vector<int> unsorted = {64, 25, 12, 22, 11};
    cout << "UNSORTED ARRAY: ";
    for (auto it = unsorted.begin(), end = unsorted.end(); it != end; it++)
        cout << *it << ' ';
    cout << endl;

    auto swap_itr = selectionSort(unsorted);
    cout << "SORTED ARRAY: ";
    for (auto it = unsorted.begin(), end = unsorted.end(); it != end; it++)
        cout << *it << ' ';
    cout << endl;

    cout << "No. of SWAPS = " << swap_itr << endl;

    return 0;
}
