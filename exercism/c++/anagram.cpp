// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/anagram.html .

// anagram.h

#include <string>
#include <vector>

using namespace std;

namespace anagram {
    class anagram {
        string word;
        string sortedWord;
        public:
            anagram(const char *c_word);
            vector<string> matches(vector<string> words);
    };
};

// anagram.cpp

#include "anagram.h"
#include <iostream>

namespace anagram {
    anagram::anagram(const char *c_word) {
        word = string(c_word);
        for (char &ch : word) {
            ch = toupper(ch);
        }
        sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
    }

    vector<string> anagram::matches(vector<string> words) {
        words.erase(remove_if(words.begin(), words.end(), [this](string item) {
            string newWord = item;
            for (char &ch : newWord) {
                ch = toupper(ch);
            }
            if (word == newWord) {
                return true;
            }
            sort(newWord.begin(), newWord.end());
            return sortedWord != newWord;
        }), words.end());
        return words;
    }
}

