// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fare-estimator.html .

std::vector<double> fareEstimator(int ride_time, int ride_distance, std::vector<double> cost_per_minute, std::vector<double> cost_per_mile) {
    using namespace std;
    vector<double> res;
    for (int i = 0; i < cost_per_minute.size(); i++) {
        double cost = cost_per_minute[i] * ride_time + cost_per_mile[i] * ride_distance;
        res.push_back(cost);
    }
    return res;
}

