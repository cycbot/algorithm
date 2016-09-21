class Solution {
public:
    int length,width;
    int numIslands(vector<vector<char>>& grid) {
         if(grid.size()==0)return 0;
         int count =0;
         length = grid.size();
         width = grid[0].size();
         for(int x=0;x<width;x++){
             for(int y = 0;y<length;y++){
                 if(grid[y][x]=='1'){
                     count++;
                     dfs(grid,x,y);
                 }
             }
         }
         return count;

    }

    void dfs(vector<vector<char>>& grid,int x,int y){
        if(x<0||x>=width||y<0||y>=length)return;
        if(grid[y][x]=='1'){
            grid[y][x]='2';
            dfs(grid,x+1,y);
            dfs(grid,x-1,y);
            dfs(grid,x,y+1);
            dfs(grid,x,y-1);
        }
    }
};
