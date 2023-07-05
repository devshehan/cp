#include <bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {3,2,1,5,4,5,1,7,23,20,4};

    int largest = arr[0];
    int secondLargest = -1;


    for(int i=1; i<11; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondLargest &&  arr[i] < largest){
            secondLargest = arr[i];
        }
    }

    cout << secondLargest << endl;

    return 0;
}