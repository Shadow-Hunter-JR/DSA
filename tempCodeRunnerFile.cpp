#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a--){
        int b, c;
        cin >> b >> c;
        int arr[b];
        for (int i = 0; i < b;i++){
            arr[i] = i;
        }
        if(arr[b-1]!=c){
            swap(arr[b - 1], arr[b - 2]);
        }
        for (int i = 0; i < b;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}