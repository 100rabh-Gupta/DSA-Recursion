class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if ( nums.size()<3)return -1;

        unordered_map<int,vector<int>>mp;
        for ( int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
 
        for(auto &it:mp){
            auto&v=it.second;
               if ( v.size()>=3){
                int dist;
                for ( int i=0;i<v.size()-2;i++){
                    dist =0;
                 for (int j = i; j <i+2 ; j++) {
                     dist += v[j+1] - v[j];
                   
               }
               dist+=v[i+2]-v[i];
                   ans = min(ans, dist);}

               
            
            }
        }
 
        
    return ans==INT_MAX ?-1:ans;
    }
};