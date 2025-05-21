// print extreme elements of array one by one
// ex- arr[] - {1,2,3,4,5,6}; -> output- 1 6 3 5 4

#include<bits/stdc++.h>
using namespace std;
void printExtremes(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        if(start == end){  // if this codntion is not applied then a particular num when start==end will print two times
            cout<<arr[start++];
        }else{
            cout<<arr[start++]<<" ";
            cout<<arr[end--]<<" ";
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    printExtremes(arr,9); 
}

// output 
// 1 9 2 8 3 7 4 6 5