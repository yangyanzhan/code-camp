// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/program-translation.html .

std::string programTranslation(std::string solution,
                               std::vector<std::string> args) {
  std::string argumentVariants = "";
  for (size_t i = 0; i < args.size(); i++) {
    argumentVariants += args[i];
    if (i < args.size() - 1) {
      argumentVariants += "|";
    }
  }

  std::regex regex("([^\\w\\d$])(" + argumentVariants + ")(?=[^\\w\\d])");
  std::string fmt = "$1$$$2";
  return std::regex_replace(solution, regex, fmt);
}

