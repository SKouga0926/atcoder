using namespace std;
#include <bits/stdc++.h>

using Graph = vector<vector<int>>;
Graph G;

typedef long long ll;

int main(void)
{
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // グラフ
    Graph G(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    

    return 0;
}
