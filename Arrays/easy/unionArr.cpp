#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {1,3,4,6,7,8};
    int sizeA = 5;
    int B[] = {2,5,9,10};
    int sizeB = 4;

    vector<int> result;

    for(int i=0;i<sizeA;i++){
        result.push_back(A[i]);
    }

    for(int i=0;i<sizeB;i++){
        result.push_back(B[i]);
    }
    
    for(int i=0;i<result.size();i++){
        cout<< result[i] <<" ";
    }

}