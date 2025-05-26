#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int> arr = {1,2,3,5,9,8,6};
    int targetSum = 9;
    // find the triplet pair of element with sum = 9;
    // if we see - (1,2,6) (1,3,5) 

    //traversing through each element
    for (int i = 0; i < arr.size(); i++)
    {
       // traversing through elements after i element for pairing
       for (int j = i+1; j < arr.size(); j++)
       {
              for(int k=j+1;k<arr.size();k++){
                   if(arr[i]+arr[j]+arr[k] == targetSum){
                       cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" "; // (1,2,6) (1,3,5) 
                   }
                  
          }
       }
          
    }
}