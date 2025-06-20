#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define M int(1e9 + 7)
#define endl "\n"


int main(){
    int a;
    cin >> a;
    while(a--){
        int n, m, l, r, g, lr;
        cin >> n >> m >> l >> r;
        if(r!=0)
             lr = l / r;
     
        int s = m / 2;
        if(m%2==1){
            cout << lr + (s * -1) << " " << lr + 1 + s;
        }
        else if(m%2==0){
            cout << lr + (s * -1) + 1 << " " << lr + 1+ s ;
        }

        cout << endl;
    }
}