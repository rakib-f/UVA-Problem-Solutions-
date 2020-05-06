#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int tc;
    while(1) {
    cin >> tc;
    if(tc==0) break;
    else {
        int n,m;
        cin >> n >> m;
        while(tc--){
            int x,y;
            cin >> x >> y;
            if(x==n || y==m) cout << "divisa" << endl;
            else if(x>n && y>m) cout << "NE" << endl;
            else if(x<n && y>m) cout << "NO" << endl;
            else if(x<n && y<m) cout << "SO" << endl;
            else cout << "SE" << endl;
            }
        }
    }
    return 0;
}
