//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int small = INT_MAX;
    if(n<2){
        return {-1};
    }
    
    for(int i =0; i< n; i++){
        if(a[i] < small){
            small = a[i];
        }
    }
    int ssmall = INT_MAX;
    for(int i =0; i<n ; i++){
        if( a[i] < ssmall && a[i] > small){
            ssmall = a[i];
        }
    }
    if(ssmall == INT_MAX){
        return {-1};
    }
   
    
    int tsmall = INT_MAX;
    for(int i = 0; i< n; i++){
        if(a[i]<tsmall && a[i] > ssmall){
            tsmall = a[i];
        }
    }
    // cout<< tsmall;
     return {small, ssmall};
}