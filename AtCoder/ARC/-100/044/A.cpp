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

bool is_prime(int n){
    if (n < 2) return 0;
    else if (n == 2) return 1;
    else if (n % 2 == 0) return 0;
    double sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2) if (n % i == 0) return 0;
    return 1;
}

int sum_digit(int n){
    int sum = 0;
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++) sum += (int)(s[i] - '0');
    return sum;
}

signed main(){
    setup;
    int n;
    cin >> n;
    if(n == 1) cout << "Not Prime" << endl;
    else if(is_prime(n)) cout << "Prime" << endl;
    else if(n % 2 && n % 5 && sum_digit(n) % 3) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
}