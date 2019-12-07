// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/number-of-clans.html .

bool sameClan(int a, int b, std::vector<int> &divisors) {
    using namespace std;
    for (int d: divisors) {
        if (!((a % d == 0 && b % d == 0) || (a % d != 0 && b % d != 0))) {
            return false;
        }
    }
    return true;
}

int numberOfClans(std::vector<int> divisors, int k) {
    using namespace std;
    vector<int> clans;
    for (int num = 1; num <= k; num++) {
        bool found = false;
        for (int clan: clans) {
            if (sameClan(num, clan, divisors)) {
                found = true;
                break;
            }
        }
        if (!found) {
            clans.push_back(num);
        }
    }
    return clans.size();
}

