// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/rotate-for-a-max.html .

#include <string>
#include <algorithm>

class MaxRotate {
public:
  static long long maxRot(long long n) {
      using namespace std;
      string item = to_string(n);
      long long res = n;
      for (int i = 0; i < item.size(); i++) {
          char head = item[i];
          for (int j = i + 1; j < item.size(); j++) {
              item[j - 1] = item[j];
          }
          item[item.size() - 1] = head;
          res = max(res, stoll(item));
      }
      return res;
  }
};

