// LeetCode Problem 1: Two Sum
// Problem: Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example: Input: nums = [2,7,11,15], target = 9
// Output: [0,1] because nums[0] + nums[1] = 2 + 7 = 9

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap; // To store the number and its index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Find the complement

        // Check if the complement exists in the hash map
        if (hashMap.find(complement) != hashMap.end()) {
            return {hashMap[complement], i}; // Return the indices
        }

        // Store the current number and its index in the hash map
        hashMap[nums[i]] = i;
    }

    return {}; // Return an empty vector if no solution is found (shouldn't happen)
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}