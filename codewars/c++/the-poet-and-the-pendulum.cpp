// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/the-poet-and-the-pendulum.html .

#include <algorithm>
#include <list>
#include <vector>

using namespace std;

vector<int> Pendulum(vector<int> values) {
    list<int> res;
    sort(values.begin(), values.end());
    for (int i = 0; i < values.size(); i++) {
        if (i % 2 == 0) {
            res.insert(res.begin(), values[i]);
        } else {
            res.push_back(values[i]);
        }
    }
    return vector<int>(res.begin(), res.end());
}
