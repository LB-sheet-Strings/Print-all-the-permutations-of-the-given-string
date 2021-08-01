/*
GFG approach:

USING STL

We can use next_permutation that modifies a string so that it stores lexicographically next permutation. 
If current string is lexicographically largest, i.e., “CBA”, then next_permutation returns false.

We first sort the string, so that it is converted to lexicographically smallest permutation. 
Then we one by one call next_permutation until it returns false.
*/

// C++ program to print all permutations with
// duplicates allowed using next_permutation
#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of string str
// using next_permutation
void permute(string str)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
 
    // Keep printing next permutation while there
    // is next permutation
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}
 
// Driver code
int main()
{
    string str = "CBA";
    permute(str);
    return 0;
}
