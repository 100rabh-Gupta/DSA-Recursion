class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans =0;
        if (grid.size()<3||grid[0].size()<3)return ans;

       
       

        for ( int i=0;i<grid.size()-2;i++){
            

            
            for ( int j=0;j<grid[0].size()-2;j++){
                  bool five = false;
                bool flag = true;
                for (int k =0;k<3;k++){
                    for(int l=0;l<3;l++){
                       if (0<grid[i+k][j+l]&& 10>grid[i+k][j+l]){    
                          if(grid[i+k][j+l]==5){
                            if(!five) five=true;
                            else{
                                flag=false;
                            }
                        }


                       }
                       else flag =false ;
                       
                    }
                }
              
               


if (flag){
                if ( grid[i+1][j+1]==5){
                    if ( grid[i][j]+grid[i][j+1]+grid[i][j+2]==15&&
                    grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2]==15&&

                    grid[i+2][j]+ grid[i+2][j+1]+ grid[i+2][j+2]==15&&
                     grid[i][j]+ grid[i+1][j+1]+grid[i+2][j+2]==15&&
                      grid[i][j+2]+  grid[i+1][j+1]+grid[i+2][j]==15&&
                      grid[i][j]+grid[i+1][j]+grid[i+2][j]==15&&
                    grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]==15&&

                    grid[i][j+2]+ grid[i+1][j+2]+ grid[i+2][j+2]==15
                      )
                      ans++;
        

                }

            

        }
            }

        }
        
       return ans ; 
    }
};