// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/credit-card-issuer-checking.html .

#include <map>
#include <tuple>
#include <algorithm>

std::string getIssuer(const std::string &number) {
    using namespace std;
    map<string, tuple<vector<string>, vector<int>>> cache;
    cache["AMEX"] = make_tuple(vector<string>{"34", "37"}, vector<int>{15});
    cache["Discover"] = make_tuple(vector<string>{"6011"}, vector<int>{16});
    cache["Mastercard"] = make_tuple(vector<string>{"51", "52", "53", "54", "55"}, vector<int>{16});
    cache["VISA"] = make_tuple(vector<string>{"4"}, vector<int>{13, 16});
    for (auto pair: cache) {
        string vendor = pair.first;
        auto checks = pair.second;
        auto checks1 = get<0>(checks);
        auto checks2 = get<1>(checks);
        int n = number.size();
        if (find(checks2.begin(), checks2.end(), n) == checks2.end()) {
            continue;
        }
        bool valid = false;
        for (auto item: checks1) {
            int m = item.size();
            string head = number.substr(0, m);
            if (head == item) {
                valid = true;
                break;
            }
        }
        if (valid) {
            return vendor;
        }
    }
    return "Unknown";
}

