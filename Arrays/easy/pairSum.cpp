#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,8,4,5,6,7,2,3};
    int targetSum = 9;
    // find the pair of element with sum = 9;
    // if we see - (1,8),(4,5),(6,3),(7,2)

    //traversing through each element
    for (int i = 0; i < arr.size(); i++)
    {
       // traversing through elements after i element for pairing
       for (int j = i+1; j < arr.size(); j++)
       {
          if(arr[i]+arr[j] == targetSum){
              cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" "; // (1,8) (1,4) (1,5) (1,6) (1,7) (1,2) (1,3) (8,4) (8,5) (8,6) (8,7) (8,2) (8,3) (4,5) (4,6) (4,7) (4,2) (4,3) (5,6) (5,7) (5,2) (5,3) (6,7) (6,2) (6,3) (7,2) (7,3) (2,3) 
          }
       }
          
    }
    
}