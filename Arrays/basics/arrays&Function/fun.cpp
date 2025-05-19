#include<bits/stdc++.h>
using namespace std;
void updateArray(int arr[]){
    for(int i=0;i<10;i++){
        arr[i]+=1;
    }
}
int main(){
  int num[] = {1,2,3,4,5,6,7,8,9,10};
  cout<<"Before updating"<<endl;
  for(int i:num){
     cout<<i<<" ";
  }
  cout<<endl;
  updateArray(num);
  cout<<"After updating"<<endl;
  for(int i:num){
     cout<<i<<" ";
  }

}