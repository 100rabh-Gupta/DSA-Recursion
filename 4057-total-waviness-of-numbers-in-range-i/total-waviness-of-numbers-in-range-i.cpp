class Solution {
public:
    int totalWaviness(int num1, int num2) {
int ans=0;
        for(int i=num1;i<=num2;i++){
    if (i<100){
        continue;
    }

    string s=to_string(i);

    for ( int j=1;j<s.size()-1;j++){
   int l=s[j]-'0';
   if (l>s[j-1]-'0'&&l>s[j+1]-'0'||l<s[j-1]-'0'&&l<s[j+1]-'0'){ans++;}
   
   
    } 

        }
        return ans;
        
    }
};