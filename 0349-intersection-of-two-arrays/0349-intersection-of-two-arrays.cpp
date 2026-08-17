class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>freq;
        vector<int>ans;
        for(int num : nums1){
            freq.insert(num);
        }

        for(int num :nums2){
            if(freq.count(num)){
                ans.push_back(num);
                freq.erase(num);
            }
        }
        return ans;
        
    }
};