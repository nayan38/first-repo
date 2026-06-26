#include<iostream>
#include<vector>
using namespace std ;
int Pow(int n , int x){         //Pow(x,n)
    long binForm = n;
    if(n<0){
        x = 1/x ;
        binForm = -binForm;
    }
    double ans = 1;
    while(binForm>0){
        if(binForm%2==1){
            ans *=x ;
        }
        x *=x;
        binForm /=2;
    }
    return ans;
}

int main() {
    cout << Pow(4,5);
    return 0;
}