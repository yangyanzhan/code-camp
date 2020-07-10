// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/101-dalmatians-squash-the-bugs-not-the-dogs.html .

#include <string>
#include <vector>

std::string howManyDalmatians(int number) {
    std::vector<std::string> dogs{"Hardly any", "More than a handful!",
                                  "Woah that's a lot of dogs!",
                                  "101 DALMATIONS!!!"};
    return (number <= 10)
               ? dogs[0]
               : ((number <= 50) ? dogs[1]
                                 : ((number == 101) ? dogs[3] : dogs[2]));
}
