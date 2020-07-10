// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/word-break-ii.html .

map<string, vector<string>> cache;

vector<string> wordBreak1(string s, unordered_set<string>& wordDict) {
    if (cache.find(s) != cache.end()) {
        return cache[s];
    }
    vector<string> words;
    if (wordDict.find(s) != wordDict.end()) {
        words.push_back(s);
    }
    int n = s.length();
    for (int len = 1; len < n; len++) {
        string head = s.substr(0, len);
        if (wordDict.find(head) != wordDict.end()) {
            vector<string> nextWords = wordBreak1(s.substr(len), wordDict);
            for (string nextWord: nextWords) {
                words.push_back(head + " " + nextWord);
            }
        }
    }
    cache[s] = words;
    return words;
}

vector<string> Solution::wordBreak(string A, vector<string> &B) {
    unordered_set<string> words;
    for (string word: B) {
        words.insert(word);
    }
    cache.clear();
    vector<string> res = wordBreak1(A, words);
    sort(res.begin(), res.end());
    return res;
}

