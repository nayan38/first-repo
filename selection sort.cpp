#include<iostream>
using namespace std ;

int selectionSort(int arr[]){
    for(int i =0 ; i<5-1 ; i++){
        int smalli = i;

        for(int j =i+1; j<5;j++){
            if(arr[j] < arr[smalli]){
                smalli= j;
            }
        }
        swap(arr[i],arr[smalli]);
    }
    return 0;
}

int main() {
    int arr[5] = {
        9,8,6,1,3
    };
    selectionSort(arr);
    for(int i =0; i<5 ; i++){
        cout<< arr[i] << " " ;
    }
    cout<< "\n" ;
    return 0;
}