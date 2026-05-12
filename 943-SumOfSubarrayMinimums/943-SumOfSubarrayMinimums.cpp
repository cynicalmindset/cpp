// Last updated: 13/05/2026, 01:36:23
class Solution {
public:

    vector<int> gnsl(vector<int>& arr,int n){
        vector<int> resu(n);
        stack<int> st;
        for(int i = 0;i<n;i++){
            if(st.empty()){
                resu[i] = -1;
            }else{
                while(!st.empty() && arr[st.top()]>arr[i])
                st.pop();
                resu[i] = st.empty() ? -1 : st.top();
            }
            st.push(i);
        }
        return resu;
    }

      vector<int> gnsr(vector<int>& arr,int n){
        vector<int> resu(n);
        stack<int> st;
        for(int i = n-1;i>=0;i--){
            if(st.empty()){
                resu[i] = n;
            }else{
                while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
                resu[i] = st.empty() ? n : st.top();
            }
            st.push(i);
        }
        return resu;
    }


    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nsl = gnsl(arr,n);
        vector<int> nsr = gnsr(arr,n);
        long long sum = 0;
        int M = 1e9+7;
        for(int i =0;i<n;i++){
            long long ls = i-nsl[i];
            long long rs = nsr[i] - i;

            long long ways = ls*rs;
            long long tsum = arr[i]*ways;
            sum = (sum+tsum)%M;
        }
        return sum;
    }
};