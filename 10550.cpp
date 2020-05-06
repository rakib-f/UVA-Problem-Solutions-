#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int degree=1080;
    int ini_pos, first_pos, sec_pos, third_pos;

    while(scanf("%d %d %d %d", &ini_pos, &first_pos, &sec_pos, &third_pos)){
        if(ini_pos == 0 && first_pos == 0 && sec_pos == 0 && third_pos == 0)
            break;
        else {
            //degree=720;
            degree+=(((40-first_pos+ini_pos)%40)+((40-first_pos+sec_pos)%40)+((40-third_pos+sec_pos)%40))*9;
            cout<<degree<<endl;
        }
        degree=1080;
    }
    return 0;
}
