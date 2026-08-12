class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen; // value -> most recent index
        for (int i = 0; i < (int)nums.size(); i++) {
            auto it = lastSeen.find(nums[i]);
            if (it != lastSeen.end() && i - it->second <= k) {
                return true;
            }
            lastSeen[nums[i]] = i;
        }
        return false;
    }
};