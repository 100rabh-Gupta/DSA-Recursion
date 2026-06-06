class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        vector<int> lsum(n);
           lsum[0]=0;

           vector<int>rsum(n);
           rsum[n-1]=0;
int lfsum=0;
        for ( int i=1;i<n;i++){
           lfsum+=nums[i-1];
           lsum[i]=lfsum;
        }
        lfsum=0;
        for ( int i=n-2;i>=0;i--){
           lfsum+=nums[i+1];
           rsum[i]=lfsum;
        }
        for ( int i=0;i<n;i++){
            lsum[i]=abs(lsum[i]-rsum[i]);
        }
        return lsum;
        
    }
};