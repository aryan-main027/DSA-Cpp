class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) {
            return 0;
            
        }
        vector<bool> ans(26, 0);       
        for (int i = 0; i < sentence.size(); i++) {
            ans[sentence[i] - 'a'] = 1;
        }

        for (int i = 0; i < 26; i++) {
            if (ans[i] == 0) {
                return 0;
            }
        }
        return 1;
    }
};