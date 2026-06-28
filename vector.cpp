#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(6);

    cout<< "vector V : " ;

    for(int i=0; i < v.size() ;i++){
        cout << v[i] << " " ;
    }

    cout << endl;

    cout << "Size: " << v.size() << endl;

    cout << "At index 2 : "<<v.at(2) << endl;

    cout << "Front value of vector : "<<v.front() << endl;

    v.pop_back();

    cout<< "Again vector V : "; 

    for(int i=0; i < v.size() ;i++){
        cout << v[i] << " " ;
    }

    return 0;
}