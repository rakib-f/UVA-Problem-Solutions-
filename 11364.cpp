#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int tc,store_no;
    int store;
    cin >> tc;
    while(tc--){
        cin >> store_no;
        int max_val=0,min_val=100,distance=0;
        while(store_no--){
            cin>>store;
            if(store>max_val)
                max_val=store;
            if(store<min_val)
                min_val=store;
        }
        distance=(max_val-min_val)*2;
        cout<<distance<<endl;
    }

    return 0;
}

