// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-subsequence.html .

bool isSubsequence(std::string t, std::string s) {
  std::string pattern = "";
  for (char ch : s) {
    pattern += string("[") + (string("[]^").find(ch) != string::npos ? "\\" : "") + string(1, ch) + "].*";
  }
  std::regex regex(pattern);
  return std::regex_search(t, regex);
}

