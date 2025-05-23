// find unique elmement in array (all elements appearing two time instead of one elment)
#include<bits/stdc++.h>
using namespace std;
int findUniqueElement(vector <int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


int main(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<arr.size();i++){
     cin>>arr[i];
   }
   cout<<findUniqueElement(arr);
}

//input
// 7
// 1 2 1 2 3 4 3 

// output
// 4