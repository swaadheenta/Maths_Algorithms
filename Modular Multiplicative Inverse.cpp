#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int b)  //to find modular multiplicative inverse of 'a' under modulo 'b'
{
    a = a % b;
    for (int x = 1; x < b; x++)
        if ((a * x) % b == 1)
            return x;
}


int main()
{   cout<<"Enter two numbers";
    int p,q;
    cin>>p>>q;
    cout << modInverse(p, q);
    return 0;
}
