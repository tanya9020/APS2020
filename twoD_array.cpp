#include <bits/stdc++.h>

using namespace std;

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    vector<int> res;

    for(unsigned int j=0; j<4;++j){
        for(unsigned int i=0; i<4;++i){
            res.push_back(arr[i][j]+arr[i][j+1]+arr[i][j+2]+
                             arr[i+1][j+1]+
                    arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
        }
    }
    cout<<*max_element(res.begin(),res.end())<<endl;

    return 0;
}

