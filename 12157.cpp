#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,k=0;
    cin >> tc;
    while(tc--)
    {
        int mile = 29, juce = 59, calls, call, cost_mile=0,cost_juce=0;
        ++k;
        cin >> calls;
        for(int i=0;i<calls;i++)
        {
            cin >> call;
            cost_mile += ((call/30)+1)*10;
            cost_juce += ((call/60)+1)*15;
        }
        cout << "Case " << k << ": ";
        if(cost_mile > cost_juce) cout << "Juice " << cost_juce << endl;
        else if(cost_mile < cost_juce) cout << "Mile " << cost_mile << endl;
        else  cout << "Mile Juice " << cost_juce << endl;
    }
    return 0;
}
