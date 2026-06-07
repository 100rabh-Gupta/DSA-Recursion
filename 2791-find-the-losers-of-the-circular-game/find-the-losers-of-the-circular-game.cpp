class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
       
vector<bool>store(n,0);

vector<int>ans;
if(n==1)return ans;
int l=0;
int i=1;
while(!store[l]){
    store[l]=1;
    l=(l+k*i)%n;
    i++;

}
for( int i=0;i<n;i++){
    if ( store[i]==0)
    ans.push_back(i+1);
}
return ans;

    }
};