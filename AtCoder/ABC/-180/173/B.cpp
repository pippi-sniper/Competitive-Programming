#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#include<bitset>

#define Vsort(a) sort(a.bigin(), a.end())
#define rep(i,n) for(int i = 0; i < (n); i++)

using namespace std;
using ll = long long;

int main(){
  int n, ac = 0, wa = 0, tle = 0, re = 0;
  cin >> n;
  vector<string> s(n);
  rep(i,n){
    cin >> s[i];
    if(s[i] == "AC") ac++;
    else if(s[i] == "WA") wa++;
    else if(s[i] == "TLE") tle++;
    else re++; 
}
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
  return 0;
}
