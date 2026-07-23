class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int curr=0;
       int maxc=0;

       for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
              curr++;

           }
           if(curr>maxc){
              maxc=curr;
           }
           else{
            if(nums[i]==0){
                curr=0;
            }
           }
       }
       return maxc;
    }
};