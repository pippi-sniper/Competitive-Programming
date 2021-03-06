#include <bits/stdc++.h>
using namespace std;
#define int long long int
const double pi = 3.14159265358979;
const int inf = 1e13;
#define endl "\n"
#define dtor(deg) (((deg)/360)*2*pi)
#define all(a) a.begin(),a.end()
#define overload(_1,_2,_3,_4,name,...) name
#define rep1(n) for(int i = 0; i < (n); i++)
#define rep2(i,n) for(int i = 0; i < (n); i++)
#define rep3(i,a,b) for(int i = (a); i < (b); i++)
#define rep4(i,a,b,c) for(int i = (a); i < (b); i += (c))
#define rep(...) overload(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
#define vv(type,name,size,...) vector<vector<type>> name(size,vector<int>(__VA_ARGS__))
struct Edge { int to, cost; Edge(int to, int cost) : to(to), cost(cost) {} };
using Graph = vector<vector<Edge>>;

void Main(){
    int n, k, r, s, p, ans = 0;
    string t;
    cin >> n >> k >> r >> s >> p >> t;
    rep(n){
        if(i < k){
            if(t[i] == 'r') ans += p;
            else if(t[i] == 's') ans += r;
            else if(t[i] == 'p') ans += s;
        }else{
            if(t[i] == t[i-k]) t[i] = 'a';
            else{
                if(t[i] == 'r') ans += p;
                else if(t[i] == 's') ans += r;
                else if(t[i] == 'p') ans += s;
            }
        }
    }
    cout << ans << endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << setprecision(20) << fixed;
    //int n; cin >> n; rep(n)
    Main();
}