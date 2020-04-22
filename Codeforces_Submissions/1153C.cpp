#include <bits/stdc++.h>
using namespace std;
#define N 209
#define M 1000000000000000
#define INF 1000000007
#define MOD 1000000007
typedef long long int ll;
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pf(x) printf("%d ",x);
#define pf2(x,y) printf("%d %d\n",x,y);
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z);
#define fi first
#define se second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tr(x) cout<<x<< endl;
#define tr2(x,y) cout<<x<<" "<<y<< endl;
#define tr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
#define tr4(x,y,z,a) cout<<x<<" "<<y<<" "<<z<<  " " << a << " " << endl;
#define sz(x) ((ll) (x).size())
 
int b[N], a[N];
int h[N][N], ans[N][N];
 
void fail(){
    tr(":(");
    exit(0);
}
string s;
int main(){
    int i,j,k,x,y,t,m,p,z,j1,j2,n;
    sd(n);
    cin >> s;
    if(n%2){fail();}
    
    int cnt1 = 0, cnt2 = 0, x1=0, x2=0;
    for(i=0; i<n; i++){
        if(s[i]=='('){x1++;}
        if(s[i]==')'){x2++;}
    }
    if(x1>n/2 || x2>n/2){fail();}
 
    for(i=0; i<n; i++){
        if(s[i]=='('){
            cnt1++;
            x1--;
        }
        else if(s[i]==')'){
            cnt2++;
            x2--;
        }
        else{
            if((cnt1+x1)<n/2){
                cnt1++;
                s[i]='(';
            }
            else{
                cnt2++;
                s[i] = ')';
            }
        }
        // tr3(i,cnt1,cnt2);
        if(cnt1<cnt2 || (i!=(n-1) && cnt1==cnt2)){fail();}
    }
    tr(s);
}