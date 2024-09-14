#include<iostream>
using namespace std;
#define int long long
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> P;
const int maxn = 2e5 + 5;
const int inf = 1e12;
const int mod = 998244353;
int n, m, a[maxn];
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    cout << a[n] << ' ';
    for (int i = 1; i < n; ++i) cout << a[i] << ' ';
    cout << endl;
}
signed main()
{
    int T = 1;
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
