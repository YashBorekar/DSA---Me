// find maximum number in an array
#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int size){
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if(arr[i]>max){
        max = arr[i];
    }
  }
  return max;
}
int main(){
int arr[] = {234,51,21,54,58,78,4,24,87,2356,24,84,521,22,54,89,98,45,6,91,80,75,40,67};
int size = sizeof(arr)/sizeof(int);
int max = maxi(arr,size);
cout<<max;
}

// why INT_MIN , we can use min = 0 ?
// our code should work properly in every cases and types of inputs
// if all numbers in input is negative then you will get 0 as output always if min = INT_MIN then it will assigned to -2 pow(31)... which means smallest int value

