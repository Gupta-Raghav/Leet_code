// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void solve(vector<int> &arr,int ind,int n,vector<int> &res,int sum){
        if(ind==n){
            res.push_back(sum);
            return; 
        }
        
        //element is picked
        solve(arr,ind+1,n,res,sum+arr[ind]);
        //element is not picked
        solve(arr,ind+1,n,res,sum);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        solve(arr,0,N,res,0);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends