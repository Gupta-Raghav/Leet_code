class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int sum = 0;
        int gasSum =0;
        int start =0;
        int curr_gas =0;
        for(int i=0;i<n;i++){
            gasSum+= gas[i]; 
            sum+= cost[i];

            curr_gas += gas[i]- cost[i];
            if(curr_gas<0){
                start = i+1;
                curr_gas=0;
            }
        }
        return gasSum<sum?-1 : start;
        }

};