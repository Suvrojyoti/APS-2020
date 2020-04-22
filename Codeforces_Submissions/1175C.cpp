#include <bits/stdc++.h>
using namespace std;

int A[200005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int T;
    cin >> T;

    while(T--)
    {
        int N, K;
        cin >> N >> K;
        K++;

        for(int i=1; i<=N; i++)
            cin >> A[i];
        
        int dist = (int) 1e9 + 7, ans = -1;

        for(int i=K; i<=N; i++)
        {
            int curr = (A[i] - A[i-K+1]);
            curr = (curr + 1) / 2;

            if(curr < dist)
            {
                dist = curr;
                ans = (A[i] + A[i-K+1]) / 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}