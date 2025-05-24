// Intersection basically refers to common elements 
// arr1[] = {1,34,21,34,55};
// arr2[] = {23,45,61,34,1,5};
// common elements - 1,34
// ans[] = {1,34}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr1[] = {1,34,21,55};
  int size1 = 5;
  int arr2[] = {23,45,34,61,34,1,5};
  int size2 = 6;
  
  vector<int>ans;

  for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
        if(arr1[i]==arr2[j]){
            arr2[j] = INT_MIN;
            ans.push_back(arr1[i]);
            break;
        }
    }
  }

  for(auto val:ans){
    cout<< val <<" ";
  }

}