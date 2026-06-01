#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> charan;     // int - data type

    charan.push_back(10);   // dynamically increase size of vector

    charan.emplace_back(20);    // same as push_back

    // pair - data type

    vector<pair<int, int>> vpair;

    vpair.push_back({1, 2});        // {} should be there

    vpair.emplace_back(3, 4);       // {} not required

    // default decleration  =>  v(size, item)

    vector<int> v1(5);          // declare vector with 5 instances which has 0 or garbage

    vector<int> v2(5, 100);     // declare vector with 5 instances of 100 each

    vector<int> v3(v2);         // copy of vector 2

    // iterator => points to the memory loc where element is there

    // vector<int>::iterator it = charan.begin();      //  *** iterator won't work if "emplace_back" ***

    charan.emplace_back(30);
    
    charan.emplace_back(40);
    
    vector<int>::iterator it = charan.begin();      // begin() iterator
    cout << *it << endl;

    it = it + 2;
    cout << *it << endl;

    auto it_end = charan.end();            // end() iterator => end loc is after last ele

    vector<int>::reverse_iterator rit_end = charan.rend();           // rend() reverse iterator

    vector<int>::reverse_iterator rit_begin = charan.rbegin();         // rbegin() reverse iterator

    // Printing vector using iterator

    for (vector<int>::iterator ite = v2.begin(), end = v2.end(); ite != end; ite++)
        cout << *ite << " ";
        cout << endl;

    for (auto it = charan.begin(), end = charan.end(); it != end; it++)
        cout << *it << ' ';
        cout << endl;
    
    for (auto rit = charan.rbegin(), rend = charan.rend(); rit != rend; ++rit)
        cout << *rit << ' ';
        cout << endl;

    for (auto it : v3)
        cout << it << ' ';
        cout << endl;


    return 0;
}
