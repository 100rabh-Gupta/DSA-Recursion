class Solution {
public:
int sum(int x){
    
    if(x==0){
        return 0;
    }
  
    return x % 10 + sum(x/10);
}
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=sum(nums[i]);
        }
        int mn = *min_element(nums.begin(), nums.end());
        return mn;
        
    }
};