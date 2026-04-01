class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if ( s1==s2)return true;
        string l =s1;
        string j=s2;
        sort ( l.begin(),l.end());
        sort ( j.begin(),j.end());

        for ( int i =0;i<4;i++){
            if (l[i]!=j[i]){
                return false;
                break;
            }

        }
         string t1 = s1;
        swap(t1[0], t1[2]);
        if (t1 == s2) return true;

        // swap 1 and 3
        string t2 = s1;
        swap(t2[1], t2[3]);
        if (t2 == s2) return true;

        // swap both
        string t3 = s1;
        swap(t3[0], t3[2]);
        swap(t3[1], t3[3]);
        if (t3 == s2) return true;
        
       
  
       return false;


        
    }
};