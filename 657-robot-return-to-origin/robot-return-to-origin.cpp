class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0;
           int l=0;
             
    for (char &c:moves){
        if(c=='U'){
            up++;
        }
        if(c=='D'){
            up--;
        }
        if(c=='L'){
            l++;
        }
        if(c=='R'){
            l--;
        }

    }
    return up==0&&l==0;
        
    }
};