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

int n;
pair<lli, lli> d[100000];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> d[i].first >> d[i].second;
    sort(d, d + n, [](const pair<lli, lli> &A, const pair<lli, lli> &B){
        if(A.first < B.first)
            return true;
        else if(A.first == B.first && A.second < B.second)
            return true;
        else return false;
    });
    lli res = d[0].second;
    for(int i = 1; i < n; i++)
        if(d[i].second >= res) res = d[i].second;
        else res = d[i].first;

    cout << res << endl;

    return 0;
}