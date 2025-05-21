#include<bits/stdc++.h>
using namespace std;
int mini(int arr[],int size){
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if(arr[i]<min){
        min = arr[i];
    }
  }
  return min;
}
int main(){
int arr[] = {234,51,21,54,58,78,4,24,87,2356,24,84,521,22,54,89,98,45,6,91,80,75,40,67};
int size = sizeof(arr)/sizeof(int);
int min = mini(arr,size);
cout<<min;
}