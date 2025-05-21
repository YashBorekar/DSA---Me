// count 0s and 1s in array
#include<bits/stdc++.h>
using namespace std;
void countOnesZeros(int arr[],int size);

int main(){
   int arr[] = {0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0};
   int length = sizeof(arr)/sizeof(int);
   countOnesZeros(arr,length);
}

void countOnesZeros(int arr[],int size){
    int numOfZeros = 0;
    int numOfOnes = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            numOfZeros++;
        }
        if(arr[i]==1){
            numOfOnes++;
        }
    }

    cout<<"0's - "<<numOfZeros<<endl;
    cout<<"1's - "<<numOfOnes<<endl;

}

// output
// 0's - 17
// 1's - 10
