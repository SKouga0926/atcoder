# 計算量について（complexity）

計算量は，アルゴリズムの評価を行うための指標である．
単に実行時間を参照する場合，コンピュータの性能に依存してしまうため，計算量を参照する必要がある．

計算量には時間計算量と，空間計算量がある．<br>
ただし基本的には時間計算量が使われるため，本ドキュメントでも時間計算量を扱う．

## 時間計算量
時間計算量は，実行が始まってから実行が終わるまでの命令が実行された回数（ステップ数・計算の数）を表す．

## 空間計算量
空間計算量はアルゴリズムを解くときに，どれほどの空間（メモリ）を使うかを表す．

## （時間）計算量の出し方

下記のプログラム（アルゴリズム）の時間計算量は，合計でn+2である．

```c++
int calcSum(int data[], int n) {
    int sum = 0;  // ここで1ステップ
    for(int i = 0; i < n; i += 1) {
        sum += data[i]; // ここでnステップ
    }
    return sum; // ここで1ステップ
} 
```

## 最悪計算量・平均計算量・最良計算量について
計算量には，最悪，平均，最良計算量がある．<br>

### 最悪計算量とは

下記は，最悪計算量の例である．最悪計算量では，あるアルゴリズムに対して，複数計算量が考えられる場合（if文などで複数分岐するなど），一番ステップ数が多い条件の場合を考えるので，下記のプログラムの場合であれば，最悪計算量は，$n^3$である． 

```c++
// 
int f1(int,data[], int n) {
    if(n % 2 == 0) {
        // 偶数なら n^2 ステップの処理: O(n^2)
    }
    else {
        // 奇数ならn^3 ステップの処理: O(n^3)
    }
}
```

### 平均計算量とは
ほとんどのアルゴリズムでは最悪計算量を参照するが，最悪計算量だけでは，計算量の予測が出来ない場合がある．例えば，「if文をほとんど通らないケース」や，「for文がほとんど回らない」場合など，最悪の計算量を参照していたら，実際の計算回数と異なる結果が出てしまう．<br>

最悪なパターンがまず起こらないようなアルゴリズム，例えば，クイックソートアルゴリズムは，その典型的な例となる．クイックソートは多くの場合は，理想的なソートアルゴリズムであり，その平均計算量は，$O(nlogn)$である．しかし最悪計算量を想定すると，計算量は$O(n^2)$となってしまい，かなり異なった計算回数となってしまう．

### 最良計算量とは
最良計算量とは，あるアルゴリズムに対して，複数計算量が考えられる場合（if文などで複数分岐するなど），一番ステップ数が少ない条件の場合を考えるので，下記のプログラムの場合であれば，最悪計算量は，$n^2$である．

```c++
// 
int f1(int,data[], int n) {
    if(n % 2 == 0) {
        // 偶数なら n^2 ステップの処理: O(n^2)
    }
    else {
        // 奇数ならn^3 ステップの処理: O(n^3)
    }
}
```

# オーダーとは
オーダー記法（漸近記法，ラウダウの記号）とは，複雑な計算量を簡単化して表現する方法である．
例えば，ステップ回数が$3n + 5$であったり，$3n^2 + 5n + 9$などのような複雑な関数になってくると，比較が煩雑になってくる．<br>

そのようなときに，用いられるのがオーダー記法である．オーダー記法では，入力数nが十分大きいときのステップ数を大雑把に見積もることが出来る．例えば，ステップ数が$4n^3 + 3n^2 + 5n + 9$だった場合，オーダー表記すると，漸近的計算量は，$O(n^3)$と表記する．これは極限を考えた際に，前者の数式と後者の数式で変わらない性質から用いられる．

## 補足
$f(n) \leq cg(n)$のとき，$f(n) = O(g(n))$と表記し，計算量は，オーダー$g(n)$であるという．具体例をあげると，$f(n) = 2n^2 + 5n + 3$のとき，$n$が十分に大きいときは，$f(n) \leq cg(n) = 3n^2$で表されるため，漸近的計算量は，$O(n^2)$となる．

# 参考
https://www.momoyama-usagi.com/entry/calc-order