#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int MaxSumArray(vector<int>&v){             //Maximun SubArray 
    int curSum =0 , maxSum = INT_MIN;
    int n= v.size();
    for(int i =0; i <n;i++){
        curSum += v[i];
        maxSum = max(curSum,maxSum);
        if(curSum<0){
            curSum =0;
        }
    }
    return maxSum ;
}
int main(){
    vector<int>v ={3,-4,5,4,-1,7,-8} ;
    cout<< MaxSumArray ;
    return 0;
}