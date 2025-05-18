#include<iostream>
using namespace std;
int main(){
  int num[] = {12,5,4568,1564,98,4212,0156,421,287,51,201,75454,141};
  int target = 98;
  for(int i:num)
  {
    if(target == i){
        cout<<"Element Found";
        break;
    }else{
        cout<<"Element not found";
    }
  }
  return 0;
}