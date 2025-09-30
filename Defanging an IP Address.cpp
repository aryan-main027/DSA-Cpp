class Solution {
public:
    string defangIPaddr(string add) {
        int n = add.size();
        string ans = "";
        int index = 0;
        while (index < n) {
            if (add[index] == '.') {
                ans += "[.]";
            } else {
                ans += add[index];
            }

            index++;
        }

        return ans;
    }
};