// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/lrc-2-sub-rip.html .

std::vector<std::string> lrc2subRip(std::vector<std::string> lrcLyrics, std::string songLength) {
    using namespace std;
    vector<vector<string>> lines;
    for (auto lrc: lrcLyrics) {
        int idx = lrc.find(" ");
        string part1 = lrc.substr(1, idx - 1);
        int idx1 = part1.find(":");
        string pp1 = part1.substr(0, idx);
        int idx2 = part1.find(".");
        string pp2 = part1.substr(idx1 + 1, idx2);
        string pp3 = part1.substr(idx2 + 1);
        int m = stoi(pp1);
        int s = stoi(pp2);
        int s1 = stoi(pp3);
        int h = m / 60;
        m = m % 60;
        stringstream ss;
        ss << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << "," << setw(2) << setfill('0') << s1 << "0";
        string time = ss.str();
        string lyric = idx == string::npos ? "" : lrc.substr(idx + 1);
        lines.push_back({time, lyric});
    }
    vector<string> res;
    for (int i = 0; i < lines.size(); i++) {
        res.push_back(to_string(i + 1));
        if (i != lines.size() - 1) {
            res.push_back(lines[i][0] + " --> " + lines[i + 1][0]);
        } else {
            res.push_back(lines[i][0] + " --> " + songLength + ",000");
        }
        res.push_back(lines[i][1]);
        if (i != lines.size() - 1) {
            res.push_back("");
        }
    }
    return res;
}

