#include <bits/stdc++.h>
using namespace std;

auto selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        
        swap(arr[i], arr[min]);
    }
    
    return arr;
}

int main() {
    vector<int> unsorted = {64, 25, 12, 22, 11};

    cout << "UNSORTED ARRAY: ";
    for (auto it = unsorted.begin(), end = unsorted.end(); it != end; it++)
        cout << *it << ' ';
        cout << endl;
    
    cout << "SORTED ARRAY: ";
    auto sorted = selectionSort(unsorted);
    for (auto it = sorted.begin(), end = sorted.end(); it != end; it++)
        cout << *it << ' ';
        cout << endl;

    return 0;
}
