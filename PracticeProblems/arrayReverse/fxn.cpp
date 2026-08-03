#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int> &arr)
{
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverseArray(arr);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
