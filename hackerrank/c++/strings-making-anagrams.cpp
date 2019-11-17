// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/strings-making-anagrams.html .

int makeAnagram(string a, string b) {
    map<char, int> counts1, counts2;
    for (auto ch : a) {
        if (counts1.find(ch) == counts1.end()) {
            counts1[ch] = 0;
        }
        counts1[ch]++;
    }
    for (auto ch : b) {
        if (counts2.find(ch) == counts2.end()) {
            counts2[ch] = 0;
        }
        counts2[ch]++;
    }
    int res = 0;
    for (auto pair : counts1) {
        char ch = pair.first;
        int count1 = pair.second;
        if (counts2.find(ch) == counts2.end()) {
            res += count1;
        } else {
            int count2 = counts2[ch];
            res += max(count1, count2) - min(count1, count2);
        }
    }
    for (auto pair : counts2) {
        char ch = pair.first;
        int count2 = pair.second;
        if (counts1.find(ch) == counts1.end()) {
            res += count2;
        }
    }
    return res;
}
