// initialize 5 elements in array and update all elements to 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    for(int i=0;i<5;i++){
        arr[i] = 1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

// input 
// 1 2 3 4 5
// output
// 1 1 1 1 1