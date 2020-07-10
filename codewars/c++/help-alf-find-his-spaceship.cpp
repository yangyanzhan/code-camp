// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/help-alf-find-his-spaceship.html .

#include <regex>
#include <sstream>
#include <vector>

using namespace std;

class EightiesKids2 {
  public:
    static string findSpaceship(const string &map) {
        string error = "Spaceship lost forever.";
        vector<string> matrix;
        regex reg1("[^\\n]+");
        for (auto it = sregex_iterator(map.begin(), map.end(), reg1);
             it != sregex_iterator(); it++) {
            matrix.push_back(it->str());
        }
        regex reg2("\\n");
        int m = distance(sregex_iterator(map.begin(), map.end(), reg2),
                         sregex_iterator()) +
                1;
        for (int i = matrix.size() - 1; i >= 0; i--) {
            int j = matrix[i].find("X");
            if (j != string::npos) {
                stringstream ss;
                ss << "[" << j << ", "
                   << (matrix.size() - 1 - i + (m - matrix.size())) << "]";
                return ss.str();
            }
        }
        return error;
    }
};
