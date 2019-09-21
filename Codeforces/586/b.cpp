#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define PI acos(-1.0)
#define eps 1e-12
#define fi first
#define se second
#define MEM(a,b) memset((a),(b),sizeof(a))
#define mod(x) ((x)%MOD)
#define wz cout<<"-----"<<endl;
#define pb push_back
#define mp make_pair

#define vs vector<string> 
#define vi vector<int> 
#define vll vector<ll> 
#define vull vector<ull>

#define pii pair<int,int>

#define msi map<string, int>
#define mci map<char, int>
#define mii map<int, int>

#define usi unordered_map<string, int>
#define uci unordered_map<char, int>
#define uii unordered_map<int, int>

const int INF_INT = 2147483647;
const ll INF_LL = 9223372036854775807LL;
const ull INF_ULL = 18446744073709551615Ull;
const ll P = 92540646808111039LL;

const ll maxn = 1e5 + 10, MOD = 1e9 + 7;
const int Move[4][2] = {-1,0,1,0,0,1,0,-1};
const int Move_[8][2] = {-1,-1,-1,0,-1,1,0,-1,0,1,1,-1,1,0,1,1};

struct can
{
    int d;
    int idx;
};

bool cmp(can a, can b)
{
    return a.d > b.d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    vector<can>v;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].d;
        v[i].idx = i + 1;
    }
    
    sort(v.begin(), v.end(), cmp);
    int res = 1, cnt = 1;
    for(int i = 1; i < n; i++)
    {
        res += (v[i].d * cnt++) + 1;
    }
    
    cout << res << '\n';
    for(auto x : v)
    {
        cout << x.idx << ' ';
    }
    
    return 0;
}
