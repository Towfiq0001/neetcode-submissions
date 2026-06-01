class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }
        unordered_map<char, int> c;
        for (int i = 0; i < s.size(); i++)
        {
            c[s[i]]++;
            c[t[i]]--;
        }
        for (auto pair : c)
        {
            if (pair.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};