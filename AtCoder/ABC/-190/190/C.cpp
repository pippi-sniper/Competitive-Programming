#include <bits/stdc++.h>
using namespace std;
#define int long long int
const double pi = 3.14159265358979;
const int inf = 1e13;
#define pii pair<int,int>
#define endl "\n"
#define dtor(deg) (((deg)/360)*2*pi)
#define all(a) a.begin(),a.end()
#define overload(_1,_2,_3,_4,name,...) name
#define _rep1(n) for(int i = 0; i < (n); i++)
#define _rep2(i,n) for(int i = 0; i < (n); i++)
#define _rep3(i,a,b) for(int i = (a); i < (b); i++)
#define _rep4(i,a,b,c) for(int i = (a); i < (b); i += (c))
#define rep(...) overload(__VA_ARGS__,_rep4,_rep3,_rep2,_rep1)(__VA_ARGS__)
#define _rrep1(n) for(int i = (n) - 1; i >= 0; i--)
#define _rrep2(i,n) for(int i = (n) - 1; i >= 0; i--)
#define _rrep3(i,a,b) for(int i = (b) - 1; i >= (a); i--)
#define rrep(...) overload(__VA_ARGS__,_null,_rrep3,_rrep2,_rrep1)(__VA_ARGS__)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
#define vv(type,name,size,...) vector<vector<type>> name(size,vector<int>(__VA_ARGS__))
#define ForEach(a,b) for_each(a.begin(),a.end(),b)
struct Edge { int to, cost; Edge(int to, int cost) : to(to), cost(cost) {} };
using Graph = vector<vector<Edge>>;
template <class T> bool chmin(T& a, T b){ if(a > b){ a = b; return 1; } return 0; }
template <class T> bool chmax(T& a, T b){ if(a < b){ a = b; return 1; } return 0; }

void Main(){
    int n, m, k, ans = 0;
    cin >> n >> m;
    vector<pair<int,int>> con(m);
    rep(m){
        cin >> con[i].first >> con[i].second;
        con[i].first--; con[i].second--;
    }
    cin >> k;
    vector<pair<int,int>> p(k);
    rep(k){
        cin >> p[i].first >> p[i].second;
        p[i].first--; p[i].second--;
    }
    rep(bit, (1 << k)){
        int temp = 0;
        vector<bool> on(n, 0);
        rep(k){
            if(bit >> i & 1) on[p[i].first] = 1;
            else on[p[i].second] = 1;
        }
        rep(m) if(on[con[i].first] && on[con[i].second]) temp++;
        chmax(ans, temp);
    }
    cout << ans << endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << setprecision(10) << fixed;
    //int n; cin >> n; rep(n)
    Main();
}