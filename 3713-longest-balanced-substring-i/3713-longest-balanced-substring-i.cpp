class Solution {
public:
    int longestBalanced(string s) {
        int ans = 1;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> f;
            f[s[i]]++;          // a-->1
            int maxi = f[s[i]]; // 1
            for (int j = i + 1; j < s.size(); j++) {
                f[s[j]]++; // b-->2
                int a = f.begin()->second;
                int fl = 1;
                for (auto it : f) {
                    if (it.second != a) {
                        fl = 0;
                        break;
                    }
                }
                if (fl) {
                    ans = max(ans, j - i + 1);
                }
            }
            ans = max(ans, 1);
        }
        return ans;
    }
};