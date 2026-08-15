class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>freq;
        int k=10;

        vector<string>ans;

        for(int i=0;i+k-1<s.size();i++){
            string sub = s.substr(i,k);

            freq[sub]++;
            if(freq[sub]==2){
                ans.push_back(sub);
            }
        }
        return ans;
    }
};