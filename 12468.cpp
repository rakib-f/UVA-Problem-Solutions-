#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    while(true)
    {
        cin >> n >> m;
        if(m == -1 && n == -1) break;
        if(abs(m-n) >= 50)
        {
            if(m>n) cout << abs(100-m+n);
            else cout << abs(100-n+m);
        }
        else cout << abs(m-n);
        cout << endl;
    }
}
