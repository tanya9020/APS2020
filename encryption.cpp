#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,counter,row,col,len;
    string a;
    getline(cin,a);
    len=a.size();
    row=sqrt(len);
    col=row;
    if(row*col<len)
    {
        col++;
    }
    if(row*col<len)
    {
        row++;
    }
 
    char arr[len];
    for(i=0;i<len;i++)
        arr[i]=a[i];
    for(i=0;i<col;i++)
    {
        counter=i;
        for(j=0;j<row;j++)
        {
           if(counter<len)
           {
            cout<<arr[counter];
            counter=counter+col;
           }
            
        }
        cout<<" ";
    }
    return 0;
}
 

