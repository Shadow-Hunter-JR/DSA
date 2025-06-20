#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    vector<int> a(4);
    for (int i = 0; i < 4;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());


}
auto rz = std::accumulate(v.begin(), v.end(), 0, [](int l, int r)
                          { return l * 10 + r; });