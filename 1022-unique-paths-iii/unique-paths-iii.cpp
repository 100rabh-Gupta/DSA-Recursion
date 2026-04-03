class Solution {
    private :
    bool valid( int i,int j ,int n ,int m  ){
        return i>=0 && i<n && j>=0 && j<m;
    }
    int paths(vector<vector<int>>& grid, int i,int j,int n,int m,int count){
        if (grid[i][j]==2 ){
              return count==1 ;
        }
         int temp = grid[i][j];
         grid[i][j]=-1;

        int ans=0;
        int row[] = {-1, 1, 0, 0};
        int col[] = {0, 0, -1, 1};

      for ( int k=0;k<4;k++){
        if ( valid(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]!=-1 ){
            ans+=paths( grid,i+row[k],j+col[k],n,m,count-1);
        }
      }
           grid[i][j] = temp;
           return ans;

    }
public:

    int uniquePathsIII(vector<vector<int>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
       
        
        int i,j;
       
        int count=0;

        for ( int r=0;r<n;r++){
            for ( int c=0;c<m;c++){
                if (grid[r][c]!=-1){
                    count++;
                }
                if ( grid[r][c]==1){
                i=r;
                j=c;
                }
            }
        }

            return paths(grid,i,j,n,m,count);

        



        
    }
};