class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<long long,int>m;
        long long curr=0;int ans=0;
        for(int i =0;i<arr.size();i++){
            curr+=arr[i];
            if(curr==k){
                 ans++;
            }

           
            
             if(m.find(curr-k)!=m.end()){
                ans+=m[curr-k];
            }
             m[curr]++;
        }
        return ans;
    }
};