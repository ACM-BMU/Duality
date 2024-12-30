// Search in Rotated Sorted Array
// There is an integer array nums sorted in ascending order (with distinct values).Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.You must write an algorithm with O(log n) runtime complexity.

// EXAMPLE
// Input: nums = [4,5,6,7,0,1,2], target = 0
// OOutput: 4
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

#include <iostream>
using namespace std;

int search(int nums[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            return mid; // Target found
        }

        // Check if the left half is sorted
        if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1; // Target is in the left half
            } else {
                low = mid + 1;  // Target is in the right half
            }
        }
        // Otherwise, the right half is sorted
        else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;  // Target is in the right half
            } else {
                high = mid - 1; // Target is in the left half
            }
        }
    }
    
    return -1; // Target not found
}

int main() {
    int nums1[] = {4, 5, 6, 7, 0, 1, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 0;
    cout << "Index of target " << target1 << ": " << search(nums1, n1, target1) << endl;

    int nums2[] = {4, 5, 6, 7, 0, 1, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 3;
    cout << "Index of target " << target2 << ": " << search(nums2, n2, target2) << endl;

    return 0;
}
