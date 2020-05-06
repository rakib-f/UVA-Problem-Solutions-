#include<bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin >> tc ;
    while(tc--) {
        int dis = 0,columns,y1,y2,res=1;
        cin >> columns;
        cin >> y1 >> y2;
        dis=abs(y1-y2);
        columns--;
        while(columns--){
                cin >> y1 >> y2;
                if(dis!=abs(y1-y2)){
                    res=0;
                }
        }
        if(res==0)
        cout << "no" << endl;
        else
        cout << "yes" << endl;
        if(tc) cout << endl;
    }
    return 0;
}
