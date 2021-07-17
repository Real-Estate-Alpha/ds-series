/**
 * https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0#
 * O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--) {
	    int num, rot;
	    cin>>num>>rot;
	    int store[num];
	    for(int i=0;i<num;i++) {
	        cin>>store[i];
	    }
	    // solution
	    int index = 0+rot;
	    for(int i=index;i<num;i++) {
	        cout<<store[i]<<" ";
	    }
	    // now print left over initial no.
	    for(int i=0;i<index;i++) {
	        cout<<store[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}