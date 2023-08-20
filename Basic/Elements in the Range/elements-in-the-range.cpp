//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	bool check_elements(int a[], int n, int p,int q)
	{
	set<int>s;
	
		
		for(int i=0;i<n;i++)
		{
		    if(a[i]>=p && a[i]<=q)
		    {
		      s.insert(a[i]);   
		    }
		}
		
		return s.size()==(q-p+1);
	}
	
};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends