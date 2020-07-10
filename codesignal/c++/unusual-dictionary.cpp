// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/unusual-dictionary.html .

bool unusualDictionary(std::vector<std::string> wordList) {
    using namespace std;
    vector<string> sorted(wordList.begin(), wordList.end());
    sort(sorted.begin(), sorted.end(), [](auto item1, auto item2) {
        string h1 = "", t1 = item1;
        int idx1;
        if ((idx1 = item1.find(" ")) != string::npos) {
            h1 = item1.substr(0, idx1);
            t1 = item1.substr(idx1 + 1);
        }
        string h2 = "", t2 = item2;
        int idx2;
        if ((idx2 = item2.find(" ")) != string::npos) {
            h2 = item2.substr(0, idx2);
            t2 = item2.substr(idx2 + 1);
        }
        if (t1 != t2) {
            return t1 < t2;
        }
        if (h1.size() > 0 && h2.size() > 0) {
            return h1 < h2;
        }
        return item1 < item2;
    });
    return sorted == wordList;
}
