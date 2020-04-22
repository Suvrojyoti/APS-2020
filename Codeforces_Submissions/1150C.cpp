#include<bits/stdc++.h>
using namespace std;

#define MAXN 200005
#define MAXL 1299710
int prime[MAXN];
int check[MAXL];
int a[MAXN];
int tot = 0;

int xxs(int n)
{
    memset(check, 0, sizeof(check));
    for(int i = 2; i < n; ++i)
    {
      if (!check[i])
        prime[tot++] = i;

      for (int j = 0; j < tot; ++j)
      {
        if (i * prime[j] > n)
          break;

        check[i*prime[j]] = 1;
        if (i % prime[j] == 0)
          break;
      }
    }
}

int main()
{
    xxs(400012);
    int n, c=0, d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    int p=0, s=0, ans=0;
    while(c>0||d>0)
    {
        while(s<prime[p]-1||c==0)
        {
            if(d)
            {
                printf("2 ");
                d--;
                s+=2;
            }
            else
            {
                break;
            }
        }
        if(s==prime[p])
        {
            p++;
            ans++;
            continue;
        }
        while(s<prime[p])
        {
            if(c)
            {
                printf("1 ");
                c--;
                s++;
            }
            else
            {
                break;
            }
        }
        if(s==prime[p])
        {
            p++;
            ans++;
            continue;
        }
    }


    return 0;
}