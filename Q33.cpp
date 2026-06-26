#include<iostream>
#include<vector>
using namespace std ;
int Search(vector<int>&arr, int target){            //Search in Rotated Array
    int st = 0, end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid] == target) return mid ;
        if(arr[st] <= arr[mid]){
            if(arr[st]<=target && target <=arr[mid]){
                end = mid -1 ;
            }else{
                st = mid + 1 ;
            }
        }else{
            if(arr[mid] <= target && target <=arr[end]) st = mid +1;
            else end = mid -1;
        }
    }
}

int main() {
    vector<int>nums = {4,5,6,7,0,1,2}; int target = 0;
    cout << Search(nums,target);
    return 0;
}