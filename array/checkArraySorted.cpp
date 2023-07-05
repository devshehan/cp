#include <bits/stdc++.h>

using namespace std;

bool isArraySorted(int* a, int n){
    int tempHolder = a[0];

    for(int i=1; i<n; i++){
        if(a[i] < tempHolder){
            return false;
        }else{
            tempHolder = a[i];
        }
    }
    return true;
}

int main(){

    int arr[] = {1,2,3, 6, 5, 7,8,9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << boolalpha;
    cout << isArraySorted(arr, n) << "Hello" << endl;

    return 0;
}