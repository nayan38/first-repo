#include<iostream>
#include<vector>
using namespace std ;
                        //Majority Element in the Array
int MajoritElement(vector<int>&arr){        // For Unsorted Array
    int freq =0, ans =0,n=arr.size();
    for(int i=0 ; i<n;i++){
        if(freq ==0){
            ans = arr[i];
        }
        if(ans ==arr[i]) freq ++;
        else freq --;
    }
    return ans;
}
int MajoritElementS(vector<int>&arr){       // For Sorted Array
    int ans =0, n=arr.size(); 
    int count =0;
    for(int val : arr){
        if(val == ans) count ++;
    }
    if(count > n/2) return ans ;
    else return -1;
}

int main() {
    vector<int>nums ={2,2,1,1,1,2,2};
    cout<<MajoritElement(nums)<<endl;
    return 0;
}