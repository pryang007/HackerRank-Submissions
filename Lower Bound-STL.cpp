#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int n, q, y;
    cin >> n;
    int a[n];
    for(int &i : a)
        cin >> i;
    cin >> q;
    while(q--)
    {
        cin >> y;
        auto index = lower_bound(a, a + n, y);
        if(*index == y)
            cout << "Yes " << index - a  + 1 << endl;
        else
            cout << "No " << index - a + 1 << endl;
    }
    return 0;
}
