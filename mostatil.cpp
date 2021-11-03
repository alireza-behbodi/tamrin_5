
#include<iostream>
using namespace std;
void main()
{
    int i, j, m, n;
    cout << "plz enter m and n";
    cin >> m >> n;      
    i = 1;
    for (j = 1; j <= m; j++) 
    {
        i = 1;
        while (i <= n)
        {
            cout << "*#";
            i++;
        }
        cout << endl;
    }
}