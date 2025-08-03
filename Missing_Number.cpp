/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 04-08-2025  01:20:07
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
 ╚═══════════════════════════════════════╝
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9+7, INF = 1e18, N = 2e5+5;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════ 
*/
signed main()
{
    fastIO;
    int n;
    cin >> n;
    vi v1(n);
    for (int i = 1; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    int m = n;
    int ts = n * (n + 1) / 2;
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        s += v1[i];
    }
    cout << ts - s << endl;

    return 0;
}