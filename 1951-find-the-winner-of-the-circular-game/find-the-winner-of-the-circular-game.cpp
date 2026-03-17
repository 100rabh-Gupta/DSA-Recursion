class Solution {
    private: 
    int winner(vector<bool>&person,int n,int k,int left,int ind){
        if ( left==1)
        {
            for ( int i=1;i<n+1;i++){
                 if (person[i]==0)return i;
            }
        }

        int count=0;
   
        while( count<k){
             if ( person[ind]==0)count++;
             if ( count==k)break;
             ind=(ind%n)+1;
        }
        person[ind]=1;

        while( person[ind]==1){
            ind=(ind%n)+1;
        }
        return winner ( person,n,k,left-1,ind);

    }
public:
    int findTheWinner(int n, int k) {
        vector<bool>person(n+1,0);
        person[0]=1;
        return winner(person,n,k,n,0);


        
    }
};