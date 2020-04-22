#include <bits/stdc++.h>
#define int long long int
using namespace std;

int cntx[51],cnty[51];
int x[42],y[42];
vector<int> xc, yc;
int n;
 
bool check(int x1, int y1, int x2, int y2) {
    int outx = -1, outy = -1;
    for (int i = 1; i <= 4 * n + 1; i++) {
        if ((x[i] == x2 || x[i] == x1) && y1 <= y[i] && y[i] <= y2)
            continue;
        if ((y[i] == y2 || y[i] == y1) && x1 <= x[i] && x[i] <= x2)
            continue;
        if (outx != -1) {
            return 0;
        }
        outx = x[i], outy = y[i];
    }
    cout << outx << " " << outy << endl;
    return 1;
}
 
main() {
 
    cin >> n;
    for (int i = 1; i <= 4 * n + 1; i++) {
        cin >> x[i] >> y[i];
        cntx[x[i]]++;
        cnty[y[i]]++;
    }
    for (int i = 0; i <= 50; i++) {
        if (cntx[i] >= n) {
            xc.push_back(i);
        }
        if (cnty[i] >= n) {
            yc.push_back(i);
        }
    }
    for (int i = 0; i < xc.size() - 1; i++) {
        for (int j = i + 1; j < xc.size(); j++) {
            for (int k = 0; k < yc.size() - 1; k++) {
                for (int l = k + 1; l < yc.size(); l++) {
                    if (check(xc[i], yc[k], xc[j], yc[l]))
                        break;
                }
            }
        }
    }
 
    
}