/**
 *  https://practice.geeksforgeeks.org/problems/subtraction-and-two-numbers0816/0/#
 * */
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int repeatedSubtraction(int A, int B)
    {
        //code here
        int c = 0;
        while (B != 0)
        {
            if (B >= A)
            {
                B -= A;
                A = A;
                c++;
            }
            else
            {
                A = A - B;
                B = B;
                c++;
            }
        }
        return c;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.repeatedSubtraction(A, B) << "\n";
    }
} // } Driver Code Ends