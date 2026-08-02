class Solution {
public:
    string reverseWords(string s) {
        vector<string> word;
        string ans="";
        string temp="";

        for(char c:s){
            if(c!=' '){
                temp+=c;
            }
            else{
                if(!temp.empty()){  //jaise hi space ayega temp ko word me push krke word me dalna h
                    word.push_back(temp);
                    temp.clear();
                }
            }
        }
        if (!temp.empty()){
            word.push_back(temp);//last wala temp empty nhi hoga uske liye ye loop h
        }
        reverse(word.begin(),word.end());

        for(int i=0;i<word.size();i++){
            ans+=word[i];
            if(i!=word.size()-1){
                ans+=" ";
            }
        }
        return ans;
    }
};