// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/etl.html .

// etl.h

#include <map>
#include <vector>
#include <iostream>

class etl {
    public:
        static std::map<char, int> transform(std::map<int, std::vector<char>> oldMapping);
};

// etl.cpp

#include "etl.h"

std::map<char, int> etl::transform(std::map<int, std::vector<char>> oldMapping) {
    std::map<char, int> newMapping;
    for (auto pair : oldMapping) {
        for (char ch : pair.second) {
            newMapping[tolower(ch)] = pair.first;
        }
    }
    return newMapping;
}

