#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <bitset>
#include <numeric>
#include <cassert>
using namespace std;
#define  ll  long long
#define endl    "\n"
//ll fib(ll n) { return n <= 2 ? n - 1 : fib(n - 1) + fib(n - 2); }
//ll fact(ll n) { return (n == 0) ? 1 : n * fact(n - 1); }
//ll gcd(ll a, ll b) { return (a) ? gcd(b % a, a) : b; } // greatest common divisor 
//ll lcm(ll a, ll b) { return a / gcd(a, b) * b; } //least common multiple
//unsigned ll nCr(int n, int r) { if (r > n)return 0; r = max(r, n - r); unsigned ll ans = 1, div = 1, i = r + 1; while (i <= n) { ans *= i; i++; ans /= div; div++; }return ans; }
//unsigned ll npr(int n, int r) { if (r > n)return 0; unsigned ll a = 1, i = n - r + 1; while (i <= n) { a *= i; i++; }return a; }
#define cin(v) for(auto& i : v) cin >> i
#define cout(v) for(auto& i : v) cout << i 
#define digits(n) fixed<<setprecision(n)
#define Go_to_the_hell FAST();
#define sz(x)     int(x.size())
#define all(x)     x.begin(), x.end()
#define rall(x)     x.rbegin(), x.rend()
bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second > b.second;
}
//enum x { n = 'k', l = 5 };
//s.insert(s.begin() + 2, 's');
   // scanf("%lf", &x);
   // printf("%.3lf",x);
//= _getwche();
//v.push_back({ -t.second,t.first });
//sort(v.begin(), v.end());
//cout << t.second << " " << -t.first << endl;
void FAST() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
     //freopen("mex.in", "r", stdin); 
     //freopen("output.out", "w", stdout);
#endif	
}
vector<vector<bool>>v(1000000000);
void solve() {
    int n, m;   cin >> n >> m;
    vector<int>st(n);   cin(st);
    for(int i =0;i<n;i++)
        for (int j = i + 1; j < n; j++)
            v[i][j] = 1;
    while (m--) {
        int l, r;   cin >> l >> r;
        cout << (v[l][r] ? "YES" : "NO") << endl;
    }
    
}
