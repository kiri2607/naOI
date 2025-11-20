#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define per(i, a, b) for(int i = a; i >= b; i--)
#define all(v) begin(v), end(v)
#define st first
#define nd second
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using ll = long long;
using bigi = __int128;
using ull = unsigned long long;
using namespace std;
pair<ll, ll> euk(ll a, ll b){
    if(a == 0) return {0, 1};
    auto [x, y] = euk(b % a, a);
    return {y - (b / a) * x, x};
}
// ax + by = g
// g = gcd(a, b)
// xall = x + k * b / g
// yall = y - k * a / g
void igac(char& c){
    c = getchar_unlocked();
}
void igc(char& c){
    c = getchar_unlocked();
    while(c == ' ' || c == '\n'){
        c = getchar_unlocked();
    }
}
void igs(string& s){
    s.clear();
    char c;
    c = getchar_unlocked();
    while(c == ' ' || c == '\n'){
        c = getchar_unlocked();
    }
    while(c != ' ' && c != '\n'){
        s.push_back(c);
        c = getchar_unlocked();
    }
}
void igi(int& n){
    n = 0;
    char c;
    c = getchar_unlocked();
    while(c == ' ' || c == '\n'){
        c = getchar_unlocked();
    }
    while(c != ' ' && c != '\n'){
        n *= 10;
        n += c - '0';
        c = getchar_unlocked();
    }
}
void igll(ll& n){
    n = 0;
    char c;
    c = getchar_unlocked();
    while(c == ' ' || c == '\n'){
        c = getchar_unlocked();
    }
    while(c != ' ' && c != '\n'){
        n *= 10;
        n += c - '0';
        c = getchar_unlocked();
    }
}
void ogc(char c){
    putchar_unlocked(c);
}
void ogs(string s){
    rep(i, 0, s.size()){
        putchar_unlocked(s[i]);
    }
}
void ogi(int n){
    string s;
    if(n == 0){
        s.push_back('0');
    }
    else if(n < 0){
        n = abs(n);
        while(n > 0){
            s.push_back('0' + n % 10);
            n /= 10;
        }
        s.push_back('-');
    }
    else{
        while(n > 0){
            s.push_back('0' + n % 10);
            n /= 10;
        }
    }
    reverse(all(s));
    ogs(s);
}
void ogll(ll n){
    string s;
    if(n == 0){
        s.push_back('0');
    }
    else if(n < 0){
        n = abs(n);
        while(n > 0){
            s.push_back('0' + n % 10);
            n /= 10;
        }
        s.push_back('-');
    }
    else{
        while(n > 0){
            s.push_back('0' + n % 10);
            n /= 10;
        }
    }
    reverse(all(s));
    ogs(s);
}
int main(){
    fast;
}