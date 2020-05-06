#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;
        string word;
        while (tc--) {
            cin >> word;
            if((word.compare("one"))==0) cout << 1 << endl;
            else if((word.compare("two"))==0) cout << 2 << endl;
            else {
                if((word[0]=='o'&& word[1]=='n')||(word[1]=='n' && word[2]=='e')||(word[0]=='o' && word[2]=='e')) cout << 1 << endl;
                else if((word[0]=='t'&& word[1]=='w')||(word[1]=='w'&& word[2]=='o')||(word[0]=='t'&& word[2]=='o')) cout << 2 << endl;
                else  cout << 3 << endl;
            }
        }
    return 0;
}
