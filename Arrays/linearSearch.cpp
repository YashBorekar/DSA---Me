#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int target,vector <int> num){
  for(int i=0;i<num.size();i++){
      if(num[i]==target){
        return i;
      }
  }
  return -1;
}

int main(){
  vector <int> num = {12,5,4568,1564,98,4212,0156,421,287,51,201,75454,141};
  int target;
  cin>>target;
  cout<<LinearSearch(target,num);
  return 0;
}