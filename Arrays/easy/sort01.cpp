#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(vector<int> arr){
   int start = 0;
   int end = arr.size()-1;

   while(start <= end){
    if(arr[start] == 0){
       start++;
     }else{
        swap(arr[start],arr[end]);
        end--;
     }
   }

   for(auto val : arr){
    cout<<val;
   }
}

int main(){
    vector<int> arr = {0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,0,0};
    sortZeroOne(arr);
}