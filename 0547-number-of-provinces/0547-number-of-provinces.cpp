class DSU {
    private:
        vector<int> parent;
        vector<int> rank;
        int size;
    public:
        DSU() {
    
        }
        DSU(int n){
            this->size = n;
            parent.resize(n);
            rank.resize(n, 1);
            for (int i = 0; i < n; ++i) {
                parent[i] = i;
            }
        }
        int find(int u){
            if(u == parent[u]){
                return u;
            }
            return parent[u] = find(parent[u]);
        }
        void _union(int u, int v){
            u = find(u);
            v = find(v);
            if( u == v){
                return;
            }
            else{
                size --;
                if(rank[u] > rank[v]){
                    parent[v] = u;
                    rank[u] += rank[v];
                }else{
                    parent[u] = v;
                    rank[v] += rank[u];
                }
            }
        }
        int getNumber(){
            return size;
        }

};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected[0].size();
        DSU dsu(m);
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                if(isConnected[i][j] == 1){
                    dsu._union(i, j);
                }
            }
        }
        return dsu.getNumber();
    }
};
