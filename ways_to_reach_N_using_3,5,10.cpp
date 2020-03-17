#include<iostream>
using namespace std;
#define N 1000
int main()
{
    int arr[N]={0};
    int n;
    cin>>n;
    arr[0]=1;
    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i-3]+arr[i];
    }
    for(int i=5;i<=n;i++)
    {
        arr[i]=arr[i-5]+arr[i];
    }
     for(int i=10;i<=n;i++)
    {
        arr[i]=arr[i-10]+arr[i];
    }
     for(int i=0;i<=n;i++)
    {
       // cout<<arr[i];
    }
    cout<<arr[n];
    return 0;
}
