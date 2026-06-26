#include<iostream>
#include<vector>
using namespace std ;
int ProductExcepSelf(vector<int>&arr){              //Product of Array Except Self
    int n = arr.size();
        vector<int>ans(n,1);
        
        for(int i =1; i<n; i++){
            ans[i] = ans[i-1] * arr[i-1];
        }

        int suffix = 1;

        for(int i= n-2; i>=0; i--){
            suffix *= arr[i+1];
            ans[i] *= suffix;
        }
        return ans[0] ;
}

int main() {
    vector<int>nums ={1,2,3,4};
    cout<<ProductExcepSelf(nums);

    return 0;
}