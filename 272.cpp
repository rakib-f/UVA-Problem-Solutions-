#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    char ch;
    int count = 0;
    while(scanf("%c",&ch)==1){
        if(ch == '"'){
            count++;
            if(count%2) cout<<"``";
            else cout<<"''";
        }
        else cout<<ch;
    }
    return 0;
}
