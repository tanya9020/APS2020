#include <bits/stdc++.h>
using namespace std;

void plusMinus(int arr[],int n) {
    double cntz=0;
    double cntp=0;
    double cntn=0;
    for(int i=0;i<n;i++)
    {   
        if(arr[i]<=-1)
            cntn++;
        if(arr[i]>0)
            cntp++;
        if(arr[i]==0)
            cntz++;        
    }
    cout<<cntp/n<<endl;
    cout<<cntn/n<<endl;
    cout<<cntz/n<<endl;

}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    plusMinus(arr,n);
    return 0;
}       
    
