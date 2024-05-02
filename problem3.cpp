#include <iostream>
#include "vector"
#include "queue"
using namespace std;

void bfs(vector<vector<int>> adjlist, int start, vector<int> &d){
    d[start]=0;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int vertex:adjlist[u]){
            if(d[vertex]==-1){
                d[vertex]=d[u]+1;
                q.push(vertex);
            }
        }
    }
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
    bfs(adjlist, 0, distance);
    for(int d:distance){
        cout<<d<<" ";
    }
    
    return 0;
}
