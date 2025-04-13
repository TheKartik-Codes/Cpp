//A program that finds two indices of numbers in an array that add up to a specific target.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> hash_map; // To store numbers and their indices
    
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
    
        // Check if the complement exists in the hash map
        if (hash_map.find(complement) != hash_map.end()) 
        {
            return {hash_map[complement], i}; // Return indices
        }
        // Store the current number and its index in the hash map
        hash_map[nums[i]] = i;
    }
    return {}; // This line will never be reached (guaranteed solution)
}