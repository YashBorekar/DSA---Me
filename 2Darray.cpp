#include<bits/stdc++.h>
using namespace std;
int main(){

    // initialization
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}};

    // cout<<arr[1][3]<<endl;

    // row-wise printing
    cout<<"row-wise - ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
    }

    cout<<endl;
    //column-wise 
    cout<<"column-wise - ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        // cout<<endl;
    }
    
}