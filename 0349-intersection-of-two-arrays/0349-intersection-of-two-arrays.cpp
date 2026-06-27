#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Store elements of the first array in a hash set to remove duplicates
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> intersection_set;
        
        // Check if elements of the second array exist in the set
        for (int num : nums2) {
            if (set1.count(num)) {
                intersection_set.insert(num);
            }
        }
        
        // Convert the intersection set back to a vector
        return std::vector<int>(intersection_set.begin(), intersection_set.end());
    }
};