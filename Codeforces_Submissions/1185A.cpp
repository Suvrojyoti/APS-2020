# include<bits/stdc++.h>

using namespace std;

const int N = 1000000 + 77;
int a[N] , d;
int main() {
   scanf("%d %d %d %d" , a + 1 , a + 2 , a + 3 , & d);
   sort(a + 1 , a + 4);
   printf("%d\n" , max(0 , d - a[2] + a[1]) + max(0 , d - a[3] + a[2]));
   return 0;
}