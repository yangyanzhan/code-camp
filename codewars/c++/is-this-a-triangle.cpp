// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/is-this-a-triangle.html .

namespace Triangle {
  bool isTriangle(int a, int b, int c) {
      long long a1 = a, b1 = b, c1 = c;
      if (a1 <= 0 || b1 <= 0 || c1 <= 0) {
          return false;
      }
      return (a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1);
  }
};

