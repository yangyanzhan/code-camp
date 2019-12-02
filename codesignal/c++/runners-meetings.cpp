// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/runners-meetings.html .

int runnersMeetings(std::vector<int> startPosition, std::vector<int> speed) {
    using namespace std;
    int res = -1, n = startPosition.size();
    map<string, int> meets;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int s1 = startPosition[i], s2 = startPosition[j], v1 = speed[i], v2 = speed[j];
            string key;
            if (s1 == s2) {
                key = "0";
            } else {
                if (v1 == v2) {
                    continue;
                }
                double r = (s2 - s1 + 0.0) / (v1 - v2);
                if (r <= 0) {
                    continue;
                }
                key = to_string(r);
                int idx;
                if ((idx = key.find(".")) != string::npos) {
                    key = key.substr(0, min((int)key.size(), idx + 1 + 4));
                    while (idx + 1 + 4 > key.size()) {
                        key += "0";
                    }
                } else {
                    key += ".0000";
                }
            }
            if (meets.find(key) == meets.end()) {
                meets[key] = 0;
            }
            meets[key]++;
            res = max(res, meets[key]);
        }
    }
    if (res == -1) {
        return res;
    }
    return (int)sqrt(res * 2) + 1;
}

