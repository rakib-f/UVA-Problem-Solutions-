#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int tc,n=0;
    while(cin >> tc){
        if(tc==0) break;
        int count = 0,number;
        while (tc--) {
            cin >> number;
            if(number == 0) count--;
            else count++;
        }
        n++;
        cout << "Case " << n << ": " << count << endl;
    }
    return 0;
}
