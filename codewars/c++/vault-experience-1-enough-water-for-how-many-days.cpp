// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/vault-experience-1-enough-water-for-how-many-days.html .

using namespace std;

int thirstyIn(int water, std::vector<int> ageOfDweller) {
    if (ageOfDweller.size() <= 0) {
        return -1;
    }
    double cost = 0;
    for (auto age : ageOfDweller) {
        if (age < 18) {
            cost++;
        } else if (age > 50) {
            cost += 1.5;
        } else {
            cost += 2;
        }
    }
    int res = water / cost;
    return res;
}
