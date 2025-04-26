#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
Problem: Subarray Sum Equals K
Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.

Example:
Input: nums = [1, 1, 1], k = 2
Output: 2
Explanation: There are two subarrays [1, 1] and [1, 1] that sum to 2.

Constraints:
- 1 <= nums.length <= 2 * 10^4
- -1000 <= nums[i] <= 1000
- -10^7 <= k <= 10^7
*/

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumFreq; // To store the frequency of prefix sums
    prefixSumFreq[0] = 1; // Base case: A prefix sum of 0 occurs once

    int prefixSum = 0; // Cumulative sum
    int count = 0; // Count of subarrays with sum equal to k

    for (int num : nums) {
        prefixSum += num; // Update the cumulative sum

        // Check if (prefixSum - k) exists in the map
        if (prefixSumFreq.find(prefixSum - k) != prefixSumFreq.end()) {
            count += prefixSumFreq[prefixSum - k]; // Add the frequency to the count
        }

        // Update the frequency of the current prefix sum
        prefixSumFreq[prefixSum]++;
    }

    return count;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target sum (k): ";
    cin >> k;

    int result = subarraySum(nums, k);
    cout << "The total number of subarrays with sum equal to " << k << " is: " << result << endl;

    return 0;
}