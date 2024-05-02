#include <iostream>
#include "vector"
#include "queue"
using namespace std;

void dfs(vector<vector<int>> adjlist, int u, vector<int> &d, vector<int> &f){
    static int time=0;
    time++;
    d[u]=time;
    for(int vertex:adjlist[u]){
        if(d[vertex]==-1){
            dfs(adjlist, vertex, d,f);
        }
    }
    time++;
    f[u]=time;
}

int main() {
    int N,E;
    cin>>N>>E;
    vector<vector<int>> adjlist(N);
    int n1,n2;
    for(int i=0;i<E;i++){
        cin>>n1>>n2;
        adjlist[n1].push_back(n2);
        adjlist[n2].push_back(n1);
        
    }
    
    vector<int> distance(N,-1);
    vector<int> f_distance(N,-1);
    int connected_islands=0;

    for(int i=0;i<N;i++){
        if(distance[i]==-1){
            dfs(adjlist, i, distance, f_distance);
            connected_islands++;
        }
    }
    
    cout<<connected_islands;
    
    return 0;
}
