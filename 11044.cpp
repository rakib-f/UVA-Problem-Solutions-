#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int tc,row,col;
    cin >> tc;
    while(tc--){
        scanf("%d %d", &row, &col);
        cout << (row/3)*(col/3) << endl;
    }
    return 0;
}
