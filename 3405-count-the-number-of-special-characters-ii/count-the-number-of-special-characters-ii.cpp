class Solution {
public:
    int numberOfSpecialChars(string word) {
vector<int>lower(26,-1);
vector<int>upper(26,-1);

        for(int i =0;i<word.size();i++) {
            char c=word[i];
            if(islower(c)){
                lower[c-'a']=i;

            }
            

            else{

            if(upper[c - 'A'] == -1) {
                upper[c-'A']=i;}}
        }

        int count = 0;

        for(int i =0;i<26;i++) {

            if(upper[i]>=0&&lower[i]>=0&&upper[i]>lower[i])
                count++;
        }

        return count;
    }
};