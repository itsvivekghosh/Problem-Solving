#include <bits/stdc++.h>
using namespace std;

int cur=0;
int matrix[12][12];
bool visited[12]{false};
std::deque<int> q;

void Solve(int n) {
    cout<<cur<<" ";
    visited[cur] = true;
    q.push_back(cur);
    
    do{
        for(int j=0;j<n;++j) {
            if (matrix[cur][j] == 1 && !visited[j]){
                q.push_back(j);
                cout<<j<<" ";
                visited[j]=true;
            }
        }
        q.pop_front();
        if(!q.empty()) {
            cur = q.front();
        }
    }while(!q.empty());
}

int main()
{
    int num=0;
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;++j) {
            cin>>matrix[i][j];
        }
    }
    Solve(n);
}
/*
11
0 0 0 1 0 0 0 0 0 0 1
0 1 0 0 0 0 0 0 1 0 0
0 0 1 1 1 0 0 0 1 0 1
0 0 1 0 0 0 0 0 0 0 1
0 0 1 0 0 0 0 1 0 0 1
0 1 1 0 0 0 1 0 1 0 0
0 0 0 1 0 0 0 1 0 0 1
1 0 0 0 1 0 1 0 0 0 1
1 0 1 0 0 0 1 0 0 1 0 
0 1 0 0 1 0 1 0 1 0 1
0 0 0 0 1 0 0 0 0 1 1
*/
