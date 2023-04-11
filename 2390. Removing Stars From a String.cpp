class Solution {
public:
    string removeStars(string s)
    {
        int prev = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '*')
                prev--;
            else 
            {
                s[prev] = s[i];
                prev++;
            }
        }
        return s.substr(0, prev);
    }
};
