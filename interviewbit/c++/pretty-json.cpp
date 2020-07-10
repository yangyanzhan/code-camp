// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/pretty-json.html .

string prefix(int ind) {
    string res;
    for (int i = 0; i < ind; i++) {
        res += "\t";
    }
    return res;
}

vector<string> clean(vector<string> words) {
    vector<string> res;
    for (string word: words) {
        if (word.length() <= 0) {
            continue;
        }
        bool valid = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] != '\t') {
                valid = true;
                break;
            }
        }
        if (valid) {
            res.push_back(word);
        }
    }
    return res;
}

vector<string> Solution::prettyJSON(string A) {
    vector<string> res;
    int ind = 0, len = A.length();
    char pre = '\0';
    string delimiter = "{}[]";
    string line;
    for (int i = 0; i < len; i++) {
        char ch = A[i];
        if (pre == ',') {
            res.push_back(line);
            line = prefix(ind);
        }
        if (delimiter.find(ch) != string::npos) {
            res.push_back(line);
            if (ch == '{' || ch == '[') {
                line = prefix(ind) + ch;
                ind++;
                res.push_back(line);
                line = prefix(ind);
            } else {
                ind--;
                line = prefix(ind) + ch;
                if (i + 1 < len && A[i + 1] == ',') {
                } else {
                    res.push_back(line);
                    line = prefix(ind);
                }
            }
        } else {
            line += ch;
        }
        pre = ch;
    }
    return clean(res);
}

