// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/nucleotide-count.html .

// nucleotide_count.h

#include <map>
#include <stdexcept>
#include <string>

using namespace std;

namespace nucleotide_count {
class counter {
    string word;

  public:
    counter(string word);
    map<char, int> nucleotide_counts() const;
    int count(char ch) const;
};
}; // namespace nucleotide_count

// nucleotide_count.cpp

#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {
counter::counter(string word) { this->word = word; }
map<char, int> counter::nucleotide_counts() const {
    map<char, int> cache{{'A', 0}, {'C', 0}, {'T', 0}, {'G', 0}};
    string actg("ACTG");
    for (char ch : word) {
        if (actg.find(ch) == string::npos) {
            throw invalid_argument("not in actg");
        }
        cache[ch] += 1;
    }
    return cache;
}
int counter::count(char ch) const {
    string actg("ACTG");
    if (actg.find(ch) == string::npos) {
        throw invalid_argument("not in actg");
    }
    return nucleotide_counts()[ch];
}
}; // namespace nucleotide_count
