#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int a;
    cin >> a;
    int ar[a][3],s=0,t=0;
    for (int i = 0; i < a;i++){
        for (int j = 0; j < 3;j++){
            cin>>ar[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s=s+ar[i][j];
        }
        if(s>=2)
            t++;
        s = 0;
    }
    cout << t << endl;
}