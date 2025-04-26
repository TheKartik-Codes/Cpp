#include <iostream>
#include <vector>
using namespace std;

/*
Problem: Remove Duplicates from Sorted Array II
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice.

Example:
Input: nums = [1, 1, 1, 2, 2, 3]
Output: 5, nums = [1, 1, 2, 2, 3]
Explanation: Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2, and 3 respectively. It doesn't matter what you leave beyond the returned length.

Constraints:
- 1 <= nums.length <= 3 * 10^4
- -10^4 <= nums[i] <= 10^4
- nums is sorted in non-decreasing order.
*/

int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 2) return nums.size(); // If the array has 2 or fewer elements, no duplicates need to be removed.

    int i = 2; // Start from the third element (index 2)

    for (int j = 2; j < nums.size(); ++j) {
        // If the current element is different from the element at position i - 2
        if (nums[j] != nums[i - 2]) {
            nums[i] = nums[j]; // Place the current element at position i
            i++; // Increment i
        }
    }

    return i; // Return the new length of the array
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);
    cout << "The new length of the array is: " << newLength << endl;
    cout << "The modified array is: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}