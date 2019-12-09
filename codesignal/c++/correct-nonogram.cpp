// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/correct-nonogram.html .

bool correctNonogram(int size, std::vector<std::vector<std::string>> nonogramField) {
    using namespace std;
    int m = nonogramField.size(), n = nonogramField[0].size();
    for (int i = m - size; i < m; i++) {
        vector<int> blacks;
        int c = 0;
        for (int j = n - size; j < n; j++) {
            string now = nonogramField[i][j];
            if (now == ".") {
                if (c > 0) {
                    blacks.push_back(c);
                }
                c = 0;
            } else {
                c++;
            }
        }
        if (c > 0) {
            blacks.push_back(c);
        }
        int idx = -1;
        for (int j = 0; j < n - size; j++) {
            string now = nonogramField[i][j];
            if (now != "-") {
                idx++;
                int num = stoi(now);
                if (idx >= blacks.size()) {
                    return false;
                }
                if (num != blacks[idx]) {
                    return false;
                }
            }
        }
        if (idx != blacks.size() - 1) {
            return false;
        }
    }
    for (int j = n - size; j < n; j++) {
        vector<int> blacks;
        int c = 0;
        for (int i = m - size; i < m; i++) {
            string now = nonogramField[i][j];
            if (now == ".") {
                if (c > 0) {
                    blacks.push_back(c);
                }
                c = 0;
            } else {
                c++;
            }
        }
        if (c > 0) {
            blacks.push_back(c);
        }
        int idx = -1;
        for (int i = 0; i < m - size; i++) {
            string now = nonogramField[i][j];
            if (now != "-") {
                idx++;
                int num = stoi(now);
                if (idx >= blacks.size()) {
                    return false;
                }
                if (num != blacks[idx]) {
                    return false;
                }
            }
        }
        if (idx != blacks.size() - 1) {
            return false;
        }
    }
    return true;
}

