#include <bits/stdc++.h>
using namespace std;

void dfs(int x,int y,vector<vector<int>>& visited,vector<vector<char>>& array){
    visited[x][y]=1;
    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};

    for(int i=0;i<4;i++){
        if(x + dx[i] < visited.size() && y+dy[i] < visited[0].size() && !visited[x+dx[i]][y+dy[i]] && x+dx[i] >= 0 && y+dy[i]>=0 && array[x+dx[i]][y+dy[i]]!='#'){
            dfs(x+dx[i],y+dy[i],visited,array);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> array (n,vector<char>(m));
    vector<vector<int>> visited (n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int room =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && array[i][j]=='.'){
                room++;
                dfs(i,j,visited,array);
            }
        }
    }
    cout<<room;
    return 0;
}