#include <bits/stdc++.h>
using namespace std;

# define endl "\n"
# define io_boost std::ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned int ui;
typedef vector<int> vector_i;
typedef vector<long long int> vector_lli;
typedef vector<unsigned int> vector_ui;
typedef vector<unsigned long long int> vector_ulli;
typedef set<int> set_i;
typedef set<long long int> set_lli;
typedef set<unsigned int> set_ui;
typedef set<unsigned long long int> set_ulli;
typedef unordered_set<int> u_set_i;
typedef unordered_set<long long int> u_set_lli;
typedef unordered_set<unsigned int> u_set_ui;
typedef unordered_set<unsigned long long int> u_set_ulli;
const int INF = numeric_limits<int>::max();
int t;
string a;
char *End;
ulli k, an;

int main() {
    io_boost;
    cin >> t;
    while(t--){
        cin >> a >> k;
        if(k == 1) cout << a << endl;
        else{
            for(ulli i = 0; i < k - 1; i++){
                int mini = INF, maxi = 0;
                for(const char &c :a)
                    mini = min(mini, c - '0'), maxi = max(maxi, c -'0');
                if(mini == 0 || maxi == 0) break;
                an = strtoull(a.c_str(), &End, 10) + (mini * maxi);
                a = to_string(an);
            }
            cout << a << endl;
        }
    }
    return 0;
}