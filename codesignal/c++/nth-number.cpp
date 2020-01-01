// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/nth-number.html .

std::string nthNumber(std::string s, int n) {
  std::regex regex(
    n > 1 ? ("^(?:\\D*\\d+\\D*){" + to_string(n - 1) + "}0*(\\d+).*$") : "^[^1-9]*(\\d+).*$"
  );
  std::smatch match;
  std::regex_match(s, match, regex);
  return match[1];
}

