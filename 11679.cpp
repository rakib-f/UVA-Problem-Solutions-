#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no_0f_banks, no_of_deben;
    while(true)
    {
        cin >> no_0f_banks >> no_of_deben;
        if(no_0f_banks == 0 && no_of_deben == 0) break;
        int reserve[no_0f_banks];
        int deb_val, dbank, cbank, value=0;

        for(int i=0;i<no_0f_banks;i++)
        {
            cin >> reserve[i];
        }
        for(int i=0;i<no_of_deben;i++)
        {
            cin >> dbank >> cbank >> deb_val;
            reserve[dbank-1] -= deb_val;
            reserve[cbank-1] += deb_val;
        }
        for(int i=0;i<no_0f_banks;i++)
        {
            if(reserve[i] < 0)
            {
                value = 1;
            }
        }
        if(value == 1) cout << "N" << endl;
        else cout << "S" << endl;
    }
    return 0;
}
