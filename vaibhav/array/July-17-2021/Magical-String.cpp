/**
 * https://practice.geeksforgeeks.org/problems/magical-string3653/0/ 
 * */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string magicalString(string S)
    {
        // code here
        string S2;
        int x;
        for (int i = 0; i < S.length(); i++)
        {
            x = 219 - int(S[i]);
            S2.push_back(x);
        }
        cout << S2;
    }
};