//for dry run and complexities[https://chatgpt.com/share/6a72c4d0-75f4-83ee-a559-926be3640057]

class Solution {
public:
void dfs(int node, vector<vector<int>>& isConnected, vector<int>& vis){
    vis[node] = 1;

    for(int j = 0; j < isConnected.size();j++){
        if(isConnected[node][j] == 1 && !vis[j]) dfs(j,isConnected,vis);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), cnt = 0;
        vector<int> vis(n,0);

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
        }

        return cnt;
    }
};