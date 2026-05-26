class Solution {
public:
    int numberOfSpecialChars(string word) {

        vector<bool> small(26, 0);
        vector<bool> up(26, 0);
        int count = 0;
        int index;
        for (int i = 0; i < word.size(); i++) {

            if (word[i] <= 'z' && word[i] >= 'a') {
                small[word[i] - 'a']=1;
               
             

            } else {
                up[word[i] - 'A']=1;
                
                
            }


           

           
        }


        for ( int i=0;i<26;i++){
             if (up[i] && small[i]) {
                
                count++;
            }
        }
        return count;
    }
};