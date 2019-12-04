// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/visits-on-circular-road.html .

int visitsOnCircularRoad(int n, std::vector<int> visitsOrder) {
    using namespace std;
    int res = 0, pre = 1;
    for (int i = 0; i < visitsOrder.size(); i++) {
        int dist = (visitsOrder[i] - pre + n) % n;
        dist = min(dist, n - dist);
        res += dist;
        pre = visitsOrder[i];
    }
    return res;
}

