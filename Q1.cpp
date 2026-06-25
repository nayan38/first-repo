#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
void PairSum(vector<int>&v , int target){            //Pair Sum
    int i =0,j = v.size()-1;
    int sum =0;
    vector<int>arr;
    while(i<j){
        sum = v[i] + v[j];
        if(sum>target){
            j--;
        }else if(sum<target){
            i++;
        }else if(sum==target){
            arr.push_back(i);
            arr.push_back(j);
            
        }
    }
    cout<<arr[0]<< " ";
    cout<<arr[1] << "\n";
}

int main() {
    vector<int>arr ={2,7,3,4,5};
    PairSum(arr,9);
    return 0;
}