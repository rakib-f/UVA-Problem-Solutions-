#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    char name[tc][100];
    string song[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for(int j=0;j<tc;j++)
    {
        scanf("%s", name[j]);
    }
    int k=0,m=0;
    int count = ceil(tc/16.0);
    for(int i=0;i<count*16;i++)
        {
            cout << name[k] << ": " << song[m] << endl;
            k++;
            m++;
            if(k==tc) k=0;
            if(m==16) m=0;
        }
    return 0;
}


