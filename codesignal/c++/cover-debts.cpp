// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/cover-debts.html .

double coverDebts(int s, std::vector<int> debts, std::vector<int> interests) {
    using namespace std;
    double cost = 0;
    vector<tuple<double, double>> items;
    for (int i = 0; i < debts.size(); i++) {
        items.push_back(make_tuple(double(debts[i]), interests[i] / 100.0));
    }
    sort(items.begin(), items.end(),
         [](auto item1, auto item2) { return get<1>(item1) > get<1>(item2); });
    while (true) {
        double money = s * 0.1;
        bool empty = true;
        for (int i = 0; i < items.size(); i++) {
            auto &debt = get<0>(items[i]);
            if (abs(debt) < 0.001) {
                continue;
            } else {
                empty = false;
                if (debt >= money) {
                    debt -= money;
                    cost += money;
                    break;
                } else {
                    money -= debt;
                    cost += debt;
                    debt = 0;
                }
            }
        }
        if (empty) {
            break;
        } else {
            for (int i = 0; i < items.size(); i++) {
                auto &debt = get<0>(items[i]);
                auto &rate = get<1>(items[i]);
                if (abs(debt) < 0.001) {
                    continue;
                } else {
                    debt *= 1 + rate;
                }
            }
        }
    }
    return cost;
}
