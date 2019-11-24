// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/exercism/cpp/acronym.html .

#if !defined(ACRONYM_H)
#define ACRONYM_H

#include <string>

namespace acronym {

    std::string acronym(std::string words);

}  // namespace acronym

#endif // ACRONYM_H

#include "acronym.h"

namespace acronym {

    std::string acronym(std::string words) {
        words += " ";
        std::string res = "";
        int pre = 0, now = 0;
        while ((now = words.find(" ", pre)) != (int)std::string::npos) {
            std::string word = words.substr(pre, now - pre);
            pre = now + 1;
            res += toupper(word[0]);
        }
        return res;
    }

}  // namespace acronym
