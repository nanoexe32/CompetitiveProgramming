# include <bits/stdc++.h>
using namespace std;

# define endl "\n"
# define io_boost std::ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;

int t, n, a[55];

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++) cin >> a[i], sum += a[i];
        if(n == sum) cout << 0 << endl;
        else if(n < sum) cout << sum - n << endl;
        else cout << 1 << endl;
    }
    return 0;
}