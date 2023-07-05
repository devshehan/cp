#include <iostream>
#include <vector>

using namespace std;

int binarySearchRecursive(const vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1;  // Target element not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;  // Found the target
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, right);  // Continue searching in the right half
    }
    else {
        return binarySearchRecursive(arr, target, left, mid - 1);  // Continue searching in the left half
    }
}

int binarySearch(const vector<int>& arr, int target) {
    return binarySearchRecursive(arr, target, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 12;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
