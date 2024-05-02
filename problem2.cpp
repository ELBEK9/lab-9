#include <iostream>
#include "vector"
#include "queue"
using namespace std;



int main() {
    int N,E;
    cin>>N>>E;
    vector<vector<int>> adjlist(N);
    for(int i=0;i<E;i++){
        int n1,n2;
        cin>>n1>>n2;
        adjlist[n1].push_back(n2);
        adjlist[n2].push_back(n1);
        
    }
    
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++){
        int a,b;
        cin>>a>>b;
        bool connected=false;
        for(int neighbor: adjlist[a]){
            if(neighbor==b){
                connected=true;
                break;
            }
        }
        
        if(connected){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
    }
    
    return 0;
}
