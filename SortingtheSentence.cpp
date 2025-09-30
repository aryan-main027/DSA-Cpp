class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> ans(10); // Holds words at their position (1-9)
        string temp;
        int count = 0;

        // Process input string
        for (int index = 0; index <= s.size(); index++)
        {
            if (index == s.size() || s[index] == ' ')
            {
                // Handle word when reaching a space or end of string
                if (!temp.empty())
                {
                    long long pos = temp.back() - '0'; // Get digit from end of word
                    temp.pop_back();                   // Remove digit
                    if (pos >= 1 && pos <= 9)
                    { // Validate position
                        ans[pos] = temp;
                        count++;
                    }
                    temp.clear();
                }
            }
            else
            {
                temp += s[index];
            }
        }

        // Build the sorted sentence
        string result;
        for (int i = 1; i <= count; i++)
        {
            if (!ans[i].empty())
            {
                if (!result.empty())
                    result += ' '; // Add space before non-first words
                result += ans[i];
            }
        }

        return result;
    }
};