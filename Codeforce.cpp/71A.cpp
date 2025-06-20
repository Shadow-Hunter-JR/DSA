#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a--){
        string b;
        cin >> b;
        int c = b.size();
        if(c>10){
            cout << b[0] << c - 2 << b[c - 1] << endl;
        }
        else
            cout << b << endl;
    }
}