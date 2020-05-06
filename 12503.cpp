#include<bits/stdc++.h>

using namespace std;

// you need to take string
//value but store an integer representation.
//so that you can compute easily.

int main()
{
    int tc,n;
    cin >> tc;
    for(int j=0;j<tc;j++)
    {
        cin >> n;
        int ins[n];
        int move[n];
        char str[100];
        int num,p=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s", str);
            if(str[0] == 'L')
            {
                p--;
                move[i] = -1;
            }
            else if(str[0] == 'R')
            {
                p++;
                move[i] = 1;
            }
            else
            {
                scanf("%*s %d", &num);
                p = p + move[num-1];
                move[i] = move[num-1];
            }
        }
        cout << p << endl;
    }
    return 0;
}

