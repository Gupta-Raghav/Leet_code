// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
 
    int maxMeetings(int start[], int end[], int n)
    {
       vector<pair<int,int>> meetings;
       for(int i=0;i<n;i++){
           meetings.push_back(make_pair(end[i],start[i]));
       }
       sort(meetings.begin(),meetings.end());
       int k=0;
       int count =1;
       for(int i=0;i<n;i++){
           if(meetings[k].first<meetings[i].second){
               count++;
               k=i;
           }
       }
       return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends