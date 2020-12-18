#include<bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
        res = res*x;

        y = y>>1;
        x = x*x;
    }
    return res;
}

int main()
{   cout<<"Enter two numbers";
    int p;
    cin>>p;
    unsigned int q;
    cin>>q;
    cout<<p<<" to power "<<q<<" is "<<power(p,q);
}
