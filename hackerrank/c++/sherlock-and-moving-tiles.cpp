// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/sherlock-and-moving-tiles.html .

vector<double> movingTiles(double l, double s1, double s2, vector<double> queries) {
    double diff = abs(s1 - s2) / sqrt(2);
    vector<double> res;
    for (auto query: queries) {
        res.push_back((l - sqrt(query)) / diff);
    }
    return res;
}
