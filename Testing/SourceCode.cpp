/*
    $$$$$$\              $$\     $$\
    $$  __$$\             $$ |    $$ |
    $$ /  $$ |$$\   $$\ $$$$$$\   $$$$$$$\   $$$$$$\   $$$$$$\        $$\
    $$$$$$$$ |$$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  __$$\       \__|
    $$  __$$ |$$ |  $$ |  $$ |    $$ |  $$ |$$ /  $$ |$$ |  \__|
    $$ |  $$ |$$ |  $$ |  $$ |$$\ $$ |  $$ |$$ |  $$ |$$ |            $$\
    $$ |  $$ |\$$$$$$  |  \$$$$  |$$ |  $$ |\$$$$$$  |$$ |            \__|
    \__|  \__| \______/    \____/ \__|  \__| \______/ \__|
    $$$$$$$\                      $$$$$$$$\ $$\
    $$  __$$\                     $$  _____|$$ |
    $$ |  $$ | $$$$$$\   $$$$$$$\ $$ |      $$ | $$$$$$\  $$\   $$\
    $$ |  $$ |$$  __$$\ $$  _____|$$$$$\    $$ |$$  __$$\ \$$\ $$  |
    $$ |  $$ |$$ /  $$ |$$ /      $$  __|   $$ |$$$$$$$$ | \$$$$  /
    $$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |$$   ____| $$  $$<
    $$$$$$$  |\$$$$$$  |\$$$$$$$\ $$ |      $$ |\$$$$$$$\ $$  /\$$\
    \_______/  \______/  \_______|\__|      \__| \_______|\__/  \__|
*/
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

// clang-format off
// <----------------------- Macros Start Here ----------------------->

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el   '\n'
#define MOD1 1000000007
#define MOD2 998244353
#define INF numeric_limits<ll>::max()

// Container Macros
#define all(x)      x.begin(), x.end()
#define rall(x)     x.rbegin(), x.rend()
#define popFront(x) x.erase(x.begin())
#define mp(x, y)    make_pair(x, y)
#define pb          push_back
#define ppb         pop_back
#define ff          first
#define ss          second

// Typedefs Here
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// <----------------------- Macros End Here ----------------------->

// <----------------------- Debug Utils Start Here ----------------------->
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << el;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

// <----------------------- Debug Utils End Here ----------------------->

// <----------------------- Predefined Goodies Start Here ----------------------->

ll GCD(ll a, ll b) {if (b > a) {return GCD(b, a);} if (b == 0) {return a;} return GCD(b, a % b);}
ll pwr(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extGCD(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extGCD(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extGCD(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return pwr(a, b - 2, b);}
ll modAdd(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll modMul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll modSub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll modDiv(ll a, ll b, ll m) {a = a % m; b = b % m; return (modMul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))

// <----------------------- Predefined Goodies End Here ----------------------->

// clang-format on
void solveMyProblem(istream &cin, ostream &cout) {}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    clock_t startClock = clock();
#endif
    FastIO;
    istream &in(cin);
    ostream &out(cout);
    /*
    Start Coding Here
    */

    ll t = 1;
    cin >> t;
    for (ll test = 1; test <= t; test++) {
        // printf("Case #%lld: ", test);
        solveMyProblem(in, out);
    }

    /*
    Code Ends Here
    */
#ifndef ONLINE_JUDGE
    clock_t endClock = clock();
    double timeTaken = double(endClock - startClock) / double(CLOCKS_PER_SEC);
    cout << "Time Taken: " << timeTaken << " Sec";
#endif
    return 0;
}