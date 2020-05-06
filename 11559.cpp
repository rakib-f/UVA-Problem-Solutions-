#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int persons,budget,hotels,weeks;
    while(scanf("%ld %ld %ld %ld", &persons, &budget ,&hotels ,&weeks)==4)
    {
        int price,rooms,space=1,money=1;
        long int tmp=1500000000;
        while(hotels--) {
            cin >> price;
            if(price*persons <= budget)
            {
                money = 0;
            }
            for(int i=0;i<weeks;i++)
            {
                cin >> rooms;
                if(rooms>=persons) space = 0;
            }
            if(space == 0 && money == 0)
            {
                if(tmp > price*persons) tmp = price*persons;
            }
        }
        if(money == 0 && space == 0) cout << tmp << endl;
        else cout << "stay home" << endl;
    }
    return 0;
}
