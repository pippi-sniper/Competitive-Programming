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
    vec(int, a, 1000100);
    map<int, int> bucket;
    cin >> a[0];
    bucket[a[0]]++;
    for(int i = 1; ; i++){
        a[i] = (a[i-1] % 2 ? 3 * a[i-1] + 1 : a[i-1] / 2);
        bucket[a[i]]++;
        if(bucket[a[i]] == 2){
            cout << i + 1 << endl;
            return;
        }
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << setprecision(20) << fixed;
    //int n; cin >> n; rep(n)
    Main();
}