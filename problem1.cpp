#include <iostream>
#include "vector"
#include "queue"
using namespace std;

int main() {
    vector<vector<int>> adjlist(6, vector<int>(6, 0));
    
    
    adjlist[3][1]=15;
    adjlist[1][3]=15;
    
    adjlist[3][4]=5;
    adjlist[4][3]=5;
    
    adjlist[3][5]=13;
    adjlist[5][3]=13;
    
    adjlist[1][2]=13;
    adjlist[2][1]=13;
    
    adjlist[4][2]=5;
    adjlist[2][4]=5;
    
    adjlist[1][0]=12;
    adjlist[0][1]=12;
    
    adjlist[5][2]=2;
    adjlist[2][5]=2;
    
    adjlist[5][0]=25;
    adjlist[0][5]=25;
    
    int num, sum=0;
    cin>>num;
    
    for(int i=0;i<6;++i){
        sum=sum+adjlist[num][i];
    }
    
    cout<<sum;

    
    return 0;
}
    cout<<sum;

    
    return 0;
}
