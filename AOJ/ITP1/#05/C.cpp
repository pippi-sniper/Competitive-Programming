#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#include<bitset>

#define Vsort(a) sort(a.begin(), a.end())
#define Vreverse(a) reverse(a.begin(), a.end())
#define Srep(n) for(int i = 0; i < (n); i++)
#define rep(i,n) for(int i = 0; i < (n); i++)
#define Lrep(i,a,n) for(int i = (a); i < (n); i++)
#define Brep(n) for(int bit = 0; bit < (1<<n); bit++)
#define rep2nd(n,m) Srep(n) Lrep(j,0,m)
#define vi vector<int>
#define vi64 vector<int64_t>
#define vvi vector<vector<int>>
#define vvi64 vector<vector<int64_t>>

using namespace std;

int main(){
    int h,w;
    while(true){
        cin >> h >> w;
        if((h == 0)&&(w == 0)) return 0;
        vector<vector<char> > a(h,vector<char>(w));
        rep2nd(h,w){
            if((i + j) % 2 == 0) a[i][j] = '#';
            else a[i][j] = '.';
        }
        Srep(h){
            Lrep(j,0,w){
                cout << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}