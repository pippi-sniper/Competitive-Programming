#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979;
#define setup\
    cin.tie(0);\
    ios::sync_with_stdio(false);\
    cout << setprecision(20) << fixed;
#define int long long int
#define db double
#define P pair<int,int>
#define F first
#define S second
#define dtor(deg) (((deg)/360)*2*pi)
#define rtod(rad) (((rad)/2/pi)*360)
#define all(a) a.begin(),a.end()
#define Srep(n) for(int i = 0; i < n; i++)
#define Lrep(i,a,n) for(int i = a; i < n; i++)
#define Brep1st(n) for(int bit = 0; bit < (1 << n); bit++)
#define Brep2nd(n) Srep(n) if(bit >> i & 1)
#define rep2d(n,m) Srep(n) Lrep(j,0,m)
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>

signed main(){
    setup;
    string s;
    cin >> s;
    vi ans(6);
    for(auto i : s) ans[i-'A']++;
    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' '
        << ans[3] << ' ' << ans[4] << ' ' << ans[5] << endl;
}
