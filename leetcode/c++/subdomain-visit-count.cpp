// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/subdomain-visit-count.html .

class Solution {
  public:
    vector<string> subdomainVisits(vector<string> &cpdomains) {
        vector<string> res;
        map<string, int> cache;
        for (auto item : cpdomains) {
            int count = stoi(item.substr(0, item.find(" ")));
            string domain = item.substr(item.find(" ") + 1) + ".";
            regex reg("([^.]+)\\.");
            vector<string> parts;
            for (auto it = sregex_iterator(domain.begin(), domain.end(), reg);
                 it != sregex_iterator(); it++) {
                string part = it->str(1);
                parts.push_back(part);
            }
            string sub_domain = "";
            for (int i = parts.size() - 1; i >= 0; i--) {
                if (sub_domain.size() > 0) {
                    sub_domain = parts[i] + "." + sub_domain;
                } else {
                    sub_domain = parts[i];
                }
                if (cache.find(sub_domain) == cache.end()) {
                    cache[sub_domain] = 0;
                }
                cache[sub_domain] += count;
            }
        }
        for (auto pair : cache) {
            res.push_back(to_string(pair.second) + " " + pair.first);
        }
        return res;
    }
};
