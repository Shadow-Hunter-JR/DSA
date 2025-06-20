#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cin.ignore(); 
    while (a--)
    {
        string n;
        getline(cin, n);
        cout << n[0];
        for (size_t i = 0; i < n.size(); i++)
        {
            if (n[i] == ' ')
            {
                if (i + 1 < n.size())
                { 
                    cout << n[i + 1];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
