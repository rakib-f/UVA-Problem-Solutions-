#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc,total_farmer,farm_size,animal_number,degree;
    cin >> tc;
    while(tc--) {
        int sum = 0;
        cin >> total_farmer;
        while(total_farmer--){
                cin >> farm_size >> animal_number >> degree;
                sum +=farm_size*degree;
        }
        cout << sum << endl;
    }
    return 0;
}
