#include <bits/stdc++.h>
using namespace std;
#define int long long int
const double pi = 3.14159265358979;
const int inf = 1e13;
#define setup cin.tie(0); ios::sync_with_stdio(false); cout << setprecision(20) << fixed;
#define db double
#define P pair<int,int>
#define F first
#define S second
#define endl "\n"
#define dtor(deg) (((deg)/360)*2*pi)
#define rtod(rad) (((rad)/2/pi)*360)
#define all(a) a.begin(),a.end()
#define Srep(n) for(int i = 0; i < n; i++)
#define Lrep(i,a,n) for(int i = a; i < n; i++)
#define Brep1st(n) for(int bit = 0; bit < (1 << n); bit++)
#define Brep2nd(n) Srep(n) if(bit >> i & 1)
#define rep2d(n,m) Srep(n) Lrep(j,0,m)
#define RoundUp(a,b) (a % b ? a / b + 1 : a / b)
#define vi vector<int>
#define vvi vector<vi>
#define vdb vector<db>
#define vb vector<bool>
#define V vector

signed main(){
    setup;
    int n, a = 0, b = 1, c = 1, d = 2;
    cin >> n;
    V<V<char>> s(n, V<char>(n)), t(n, V<char>(n)), _1(n, V<char>(n)), _2(n, V<char>(n)), _3(n, V<char>(n));
    rep2d(n, n) cin >> s[i][j];
    rep2d(n, n){
        cin >> t[i][j];
        if(s[i][j] != t[i][j]) a++;
    }
    for(int i = 0, k = n - 1; i < n; i++, k--){
        for(int j = 0, l = n - 1; j < n; j++, l--){
            _1[l][i] = s[i][j];
            _2[j][k] = s[i][j];
            _3[i][j] = s[k][l];
        }
    }
    rep2d(n, n){
        if(_1[i][j] != t[i][j]) b++;
        if(_2[i][j] != t[i][j]) c++;
        if(_3[i][j] != t[i][j]) d++;
    }
    cout << min(a, min(b, min(c, d))) << endl;
}