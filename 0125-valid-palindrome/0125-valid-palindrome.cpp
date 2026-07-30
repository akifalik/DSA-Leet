class Solution {
public:
    bool valid(char ch) {
        // FIXED: Used character literals '0' and '9'
        if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) 
            return true;
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0, end = n - 1;

        while (st < end) {
            // FIXED: Standard inner while-loops prevent broken continuation flows
            while (st < end && !valid(s[st])) {
                st++;
            }
            while (st < end && !valid(s[end])) {
                end--;
            }

            // FIXED: Wrapped individual characters inside tolower() properly
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            
            // Crucial step: move both pointers inward after a successful match
            st++;
            end--;
        }
        return true;
    }
};
