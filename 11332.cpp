#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int tmp;
    while(scanf("%lld", &n))
        {
      //  cin >> n;
        if(n==0) break;
       while(n>9) {
            tmp = n%10;
            n = n/10;
            n = n + tmp;
       }
       cout << n << endl;
    }
    return 0;
}

