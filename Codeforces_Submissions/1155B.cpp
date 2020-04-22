#include<iostream>
using namespace std;
int main()
{
    int n, cnt=0, ans=0;
    string a;
    cin >> n;
    cin >> a;
    int k = n - 10;
    for(int i=0; i<n-10; i++){
        if(a[i] == '8')
            cnt++;
    }
    ans = k / 2;
    if(k & 1)ans ++;
    if(cnt >= ans)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}