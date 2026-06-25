#include<iostream>
#include<vector>
using namespace std ;
int maxArea(vector<int>&arr){           //Container with Most water 
    int maxWater = 0, n = arr.size();
    int lp =0, rp =n-1;
    while(lp<rp){
        int w = rp - lp ;
        int h = min(arr[lp], arr[rp]);
        int currwater = w *h ;
        maxWater = max(maxWater,currwater);

        arr[lp] < arr[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main() {
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl;
    return 0;
}