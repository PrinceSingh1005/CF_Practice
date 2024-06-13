#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
vector<ll> slicing(vector<ll>& arr,
                    int X, int Y)
{

    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
 
    vector<ll> result(Y - X + 1);
 
    copy(start, end, result.begin());
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vl arr(n);
        int i=0,sum=0;
        if (arr[0]==0) c++;
        if (n==2){
            cout<<0<<"\n";
            continue;
        }
        if (n>1){
            if (arr[0]==arr[1]) c++;
        }
        fo(i,n) {
            cin>>arr[i];
            
        }
        vl ans;
        for (int i=2; i<n; i++){
            ans = slicing(arr,0,i);
            sortall(ans);
            int a = ans.back();
            ans.pop_back();
            sum=accumulate(all(ans),sum);
            if (sum==a) c++;

        }
        cout<<c<<"\n";
    }
    return 0;
}