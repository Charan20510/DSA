#include <utility>      // access pair data type
#include <iostream>     // access print & scanf functions
using namespace std;

int main() {
    pair<int, int> p1 = {1, 3};     // Pair

    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> np = {1, {2, 3}};     // Nested Pair

    cout << np.second.second << " " << np.second.first << " " << np.first << endl;

    // array with pair data type
    
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    cout << arr[3].second << " " << arr[3].first << endl;

    return 0;
}
