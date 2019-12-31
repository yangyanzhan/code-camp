// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/word-count.html .

// word_count.h

#include <map>
#include <string>

using namespace std;

class word_count {
    public:
        static map<string, int> words(string sentence);
};

// word_count.cpp

#include <regex>
#include <iostream>

#include "word_count.h"

map<string, int> word_count::words(string sentence) {
    map<string, int> cache;
    regex reg("\\w+('\\w+)?");
    smatch matches;
    while (regex_search(sentence, matches, reg)) {
        string word = matches[0];
        for (char &ch : word) {
            ch = tolower(ch);
        }
        cache[word] += 1;
        sentence = matches.suffix().str();
    }
    return cache;
}

