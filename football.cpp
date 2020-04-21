#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int A[n];
        long long int B[n];
        long long int total[n];
        for(int i=0;i<n;i++)
            cin>>A[i];

        for(int i=0;i<n;i++)
            cin>>B[i];

        for(int i=0;i<n;i++)
            total[i]=A[i]*20-B[i]*10;
            //cout<<total[i];

        //cout << " max element is: " << *max_element(total , total + n) << endl;
        if(*std::max_element(total, total + n)>0)
           cout << *std::max_element(total, total + n) << "\n";
        else
           cout<<0<<endl;
    }
    return 0;
}