#include <bits/stdc++.h>

#define fi first
#define se second

const int N = 1000100;
const int Q = 1 << 21;
const long long mod = 1e9 + 7;

using namespace std;

int main()
{
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        //freopen("sum.in", "r", stdin);
        //freopen("sum.out", "w", stdout);
        ios_base::sync_with_stdio(0);

        int n;
        cin >> n;
        vector < int > a, b;
        for(int i = 1; i <= n; i++){
                char c;
                cin >> c;
                if(c == '('){
                        if(a.size() < b.size()){
                                cout << 0;
                                a.push_back(i);
                        } else{
                                cout << 1;
                                b.push_back(i);
                        }
                } else{
                        if(!a.empty() && (b.empty() || a.back() > b.back())){
                                cout << 0;
                                a.pop_back();
                        } else{
                                cout << 1;
                                b.pop_back();
                        }
                }
        }
}