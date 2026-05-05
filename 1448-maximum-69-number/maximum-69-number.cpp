class Solution {
public:
    int maximum69Number (int num) {
         string s="";
          int ans=num;
        while(num){
           s += (num%10+'0');
           num/=10;

        }
        reverse(s.begin(),s.end());
       
        for ( int i=0;i<s.size();i++){
         
            if ( s[i]=='6')
            {
                s[i]='9';
                ans=max(ans,stoi(s));
                 s[i]='6';

            }


        }
        return ans;
    }
};