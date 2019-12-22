// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/parts-of-a-list.html .

class PartList {
public:
    static std::vector<std::pair <std::string, std::string>> partlist(std::vector<std::string> &arr) {
        using namespace std;
        vector<pair<string, string>> res;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            string item1, item2;
            for (int j = 0; j <= i; j++) {
                item1 += arr[j] + " ";
            }
            item1 = item1.substr(0, item1.size() - 1);
            for (int j = i + 1; j < n; j++) {
                item2 += arr[j] + " ";
            }
            item2 = item2.substr(0, item2.size() - 1);
            res.push_back({item1, item2});
        }
        return res;
    }
};

