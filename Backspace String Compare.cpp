class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a1, a2;
        

        for (char c : s) {
            if (c != '#') {
                a1.push(c);
            } else if (!a1.empty()) {
                a1.pop();
            }
        }
        

        for (char c : t) {
            if (c != '#') {
                a2.push(c);
            } else if (!a2.empty()) {
                a2.pop();
            }
        }
        

        string s1, s2;
        while (!a1.empty()) {
            s1 += a1.top(); 
            a1.pop();
        }
        while (!a2.empty()) {
            s2 += a2.top(); 
            a2.pop();
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        return s1 == s2;  // == is fine for std::string
    }
};
