#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>& a, int target, int low, int high){
    if(low > high){
        return -1;
    }

    int mid = low + (high - low) / 2;

    if(target == a[mid]){
        return mid;
    }else if(a[mid] > target){
        return binarySearch(a,target,low, mid-1);
    }else{
        return binarySearch(a,target,mid+1,high);
    }
}

int main(){

    vector<int> a = {1,2,3,4,5,200,1,2,5,3,6,3,7,8,54,2,1};

    sort(a.begin(), a.end());

    cout << "index of : " << binarySearch(a,200,0,a.size()-1) << endl;
    
    return 0;
}