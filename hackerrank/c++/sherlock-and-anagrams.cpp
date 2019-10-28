// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int sherlockAndAnagrams(string s) {
    map<string, int> mapping;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string t = s.substr(i, j - i + 1);
            vector<char> chs(t.begin(), t.end());
            sort(chs.begin(), chs.end());
            string u(chs.begin(), chs.end());
            if (mapping.find(u) == mapping.end()) {
                mapping[u] = 0;
            }
            mapping[u]++;
        }
    }
    int res = 0;
    for (auto it : mapping) {
        int n = it.second;
        res += n * (n - 1) / 2;
    }
    return res;
}
