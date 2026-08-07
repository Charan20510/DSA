#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr)
{
    int n = arr.size();
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    rotateArray(arr);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
