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
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;
typedef vector <ll> vl;
typedef vector <pair <ll, ll> > vll;
typedef pair <ll, ll> pll;

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

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) { for (auto &it : v) cin >> it; return istream; }
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second << el); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << ""; return ostream; }

// <----------------------- Debug Utils End Here ----------------------->

// <----------------------- Predefined Goodies Start Here ----------------------->

ll GCD(ll a, ll b) {if (b > a) {return GCD(b, a);} if (b == 0) {return a;} return GCD(b, a % b);}
ll LCM(ll a, ll b) { return (a / GCD(a, b)) * b; }
ll pwr(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return pwr(a, b - 2, b);}
ll modAdd(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll modMul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll modSub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll modDiv(ll a, ll b, ll m) {a = a % m; b = b % m; return (modMul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
bool isPrime(ll n) { if(n < 2) return false; for(ll k = 2; k * k <= n; k++) if(n % k == 0) return false; return true; }

// <----------------------- Predefined Goodies End Here ----------------------->

// clang-format on

void solveMyProblem(istream &cin, ostream &cout, ll testCase) {
    // Solve Here
    // cout << "Case #" << testCase << ": ";
}

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
        solveMyProblem(in, out, test);
    }

    /*
    Code Ends Here
    */
#ifndef ONLINE_JUDGE
    clock_t endClock = clock();
    double timeTaken = double(endClock - startClock) / double(CLOCKS_PER_SEC);
    cout << fixed << setprecision(7);
    cout << "Time Taken: " << timeTaken << " Sec";
#endif
    return 0;
}