class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<int> set;
        int left = 0, maxLength = 0;
        for (int right = 0; right < s.size(); right++)
        {
            while (set.count(s[right]))
            {
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            int currentLength = right - left + 1;
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
        }
        return maxLength;
    }
};