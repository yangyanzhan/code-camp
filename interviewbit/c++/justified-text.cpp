// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/justified-text.html .

string pad(string A, int num) {
    for (int i = 0; i < num; i++) {
        A += " ";
    }
    return A;
}

string merge1(vector<string> &words) {
    string res = words[0];
    for (int i = 1; i < words.size(); i++) {
        res += " " + words[i];
    }
    return res;
}

string merge(vector<string> &words, int B) {
    if (words.size() == 1) {
        return pad(words[0], B - words[0].length());
    }
    int len = 0;
    for (string word : words) {
        len += word.length();
    }
    int k1 = (B - len) / (words.size() - 1),
        k2 = (B - len) % (words.size() - 1);
    string res;
    for (int i = 0; i < words.size() - 1; i++) {
        string addon = (i < k2) ? " " : "";
        res += pad(words[i], k1) + addon;
    }
    res += words.back();
    return res;
}

vector<string> Solution::fullJustify(vector<string> &A, int B) {
    int idx = 0, n = A.size(), len = 0;
    vector<string> words;
    vector<string> res;
    while (idx < n) {
        string word = A[idx];
        if (word == "") {
            idx++;
            continue;
        }
        if (words.size() > 0 && len + words.size() + word.length() > B) {
            res.push_back(merge(words, B));
            words.clear();
            words.push_back(word);
            len = word.length();
        } else {
            words.push_back(word);
            len += word.length();
        }
        idx++;
    }
    if (words.size() > 0) {
        string line = merge1(words);
        res.push_back(pad(line, B - line.length()));
    }
    return res;
}
