#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        long long int res;
        cin >> n;
        res = (n*567)/9;
        res = (res+7492)*235;
        res = (res/47)-498;
        string str = to_string(res);
        int len = str.length();
        char ch = str[len-2];
        cout << ch << endl;
    }
}
