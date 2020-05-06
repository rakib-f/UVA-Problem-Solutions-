#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,j=0;
    cin >> tc;
    while(tc--)
    {
        string str[10];
        int rank[10];
        int tmp=0;
        ++j;
        for(int i=0;i<10;i++)
        {
            cin >> str[i];
            cin >> rank[i];
            if(rank[i]>tmp) tmp = rank[i];
        }
        cout << "Case #" << j << ":" << endl;
        for(int i=0;i<10;i++)
        {
            if(tmp==rank[i]) cout << str[i] << endl;
        }
    }
    return 0;
}
