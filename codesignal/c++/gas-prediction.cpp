// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/gas-prediction.html .

bool gasPrediction(std::vector<double> driveDistances, double currentGasLevel, double avgMileage) {
    using namespace std;
    double dist = 0;
    for (auto num: driveDistances) {
        dist += num;
    }
    dist /= 12;
    double gallon = dist / avgMileage;
    return currentGasLevel < gallon;
}

