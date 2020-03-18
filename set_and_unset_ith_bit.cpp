#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int setBit(int x,int i)
{
    x=x|(1<<i);
    return x;
}

int unsetBit(int x,int i)
{
    x= x & ~(1<<i);
    return x;

}

int main()
{
    int x=15;
    x=unsetBit(x,1);
    cout<<x<<endl;
    x=setBit(x,1);
    cout<<x<<endl;
    return 0;
}
