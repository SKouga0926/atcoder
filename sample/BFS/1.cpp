// 下記は、重みなし無向グラフにおけるBFS．
// もし重みがある場合は、ダイクストラなどを考える．

#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;

int N, M;
int A[100009], B[100009];

int main(void)
{
    // 入力
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];

        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // dist：-1は未探索，あるいは頂点0からの距離が格納される
    // que：次に探索すべき頂点の列，Gの隣接した頂点が追加される．

    vector<int> dist(N, -1);
    queue<int> que;

    // 初期設定
    // dist：0番目の頂点を距離0にする．
    // 探索すべき頂点としてqueに0番目の頂点を追加．
    dist[0] = 0;
    que.push(0);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for (int next : G[v]) {

            if (dist[next] != -1) continue;

            dist[next] = dist[v] + 1;

            que.push(next);
        }
    }

    for (int v = 0; v < N; v++) {
        cout << v << " : " << dist[v] << endl;
    }
    

    return 0;
}
