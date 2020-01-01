// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/eye-rhyme.html .

bool eyeRhyme(std::string pairOfLines) {
  std::regex pattern("^.*(.{3})\\t.*(.{3})$");
  std::smatch match;
  std::regex_search(pairOfLines, match, pattern);
  return match.str(1) == match.str(2);
}

