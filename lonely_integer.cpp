#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int n) {
    if(n==1)
        return 1;
    sort(arr,arr+n);
    for(int i=0;i<n;)
    {
        if(arr[i]==arr[i+1])
            i=i+2;
        else
            return arr[i];
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
        cin>>arr[j];
    cout << check(arr, n) << endl;
}

