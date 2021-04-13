#include <iostream>
#include <vector>

#include <algorithm>
#define MAX 101
#define INF 987654321
using namespace std;
int n;
int adj[MAX][MAX];

void floyd(){
    for(int k=1; k<=N; k++){
        for(int i=1; i<=N; i++){
            // if(adj[i][k]>=INF) continue;
            for(int j=1; j<=N; j++){
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i==j || adj[i][j] >= INF) cout << 0 << " ";
            else cout << adj[i][j] << " ";
        }
        cout << '\n';
    }
}

int main(){

    int a, b, c, t;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n+2; j++){
            
        }
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            adj[i][j] = INF;
        }
    }

    for(int i=0; i<M; i++){
        cin >> a >> b >> c;
        adj[a][b] = min(c, adj[a][b]);
    }


    floyd();
}