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
struct FastIO{
    ~FastIO(){
        Flush();
    }
    static const int Size = 1 << 21;
    char ibuffer[Size];
    int ipos = 0, ien = 0;
    int GetChar(){
        if(ipos == ien){
            ien = fread(ibuffer, 1, Size, stdin);
            ipos = 0;
            if(ien == 0) return EOF;
        }
        return ibuffer[ipos++];
    }
    void igi(long long& n){
        n = 0;
        bool im = false;
        int c;
        c = GetChar();
        while(c <= ' ' && c != EOF){
            c = GetChar();
        }
        if(c == '-'){
            im = true;
            c = GetChar();
        }
        while(c >= '0' && c <= '9'){
            n *= 10;
            n += c - '0';
            c = GetChar();
        }
        if(im) n *= -1;
    }
    string igs(){
        int c = GetChar();
        string odp;
        odp.reserve(32);
        while(c <= ' ' && c != EOF) c = GetChar();
        while(c > ' ' && c != EOF){
            odp.push_back(c);
            c  = GetChar();
        }
        return odp;
    }
    void igc(char& c){
        int ch = GetChar();
        while(ch <= ' ' && ch != EOF){
            ch = GetChar();
        }
        c = ch;
    }
    char obuffer[Size];
    int opos = 0;
    void Flush(){
        fwrite(obuffer, 1, opos, stdout);
        opos = 0;
    }
    void PutChar(char c){
        if(opos == Size) Flush();
        obuffer[opos++] = c;
    }
    void ogs(const char* s){
        while(*s){
            PutChar(*s);
            ++s;
        }
    }
    void ogi(ll nn){
        char buf[21];
        int st = 19;
        buf[20] = '\0';
        bool im = false;
        if(nn == 0){
            buf[st] = '0';
            st--;
        }
        unsigned long long x;
        if(nn < 0){
            x = -(unsigned long long)nn;
            im = true;
        }
        else{
            x = nn;
        }
        while(x > 0){
            buf[st] = '0' + x % 10;
            st--;
            x /= 10;
        }
        if(im){
            buf[st] = '-';
            st--;
        }
        ogs(buf + st + 1);
    }
};
int main(){
    fast;
}
