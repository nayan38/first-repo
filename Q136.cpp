#include<iostream>
#include<vector>
using namespace std ;
                                 //Single number 
int main() {
    vector<int>v ={1,1,4,2,3,2,3};
    int ans = 0;
    for(int val : v){
        ans ^= val;
    }
    cout<< ans << endl;
    return 0;
}