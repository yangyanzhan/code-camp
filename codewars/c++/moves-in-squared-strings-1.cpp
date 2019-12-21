// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/moves-in-squared-strings-1.html .

#include <cmath>

class Opstrings {
public:
    static std::vector<std::string> split(const std::string &s) {
        using namespace std;
        int n = sqrt(s.size());
        vector<string> res;
        for (int i = 0; i < n; i++) {
            res.push_back(s.substr((n + 1) * i, n));
        }
        return res;
    }
    static std::string vertMirror(const std::string &s) {
        using namespace std;
        vector<string> cache = split(s);
        string res;
        for (auto item: cache) {
            reverse(item.begin(), item.end());
            res += item;
            res += "\n";
        }
        return res.substr(0, res.size() - 1);
    }
	static std::string horMirror(const std::string &s) {
        using namespace std;
        vector<string> cache = split(s);
        reverse(cache.begin(), cache.end());
        string res;
        for (auto item: cache) {
            res += item;
            res += "\n";
        }
        return res.substr(0, res.size() - 1);
    }
    template<typename Func>
    static std::string oper(Func f, const std::string &s) {
        using namespace std;
        return f(s);
    }
};


