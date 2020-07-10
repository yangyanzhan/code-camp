// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/food-chain.html .

// food_chain.h

#include <string>
#include <vector>

using namespace std;

class food_chain {
    static vector<string> raw;

  public:
    static string verse(int n);
    static string verses(int a, int b);
    static string sing();
};

// food_chain.cpp

#include "food_chain.h"

vector<string> food_chain::raw = {
    "I know an old lady who swallowed a fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a spider.\n"
    "It wriggled and jiggled and tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a bird.\n"
    "How absurd to swallow a bird!\n"
    "She swallowed the bird to catch the spider that wriggled and jiggled and "
    "tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a cat.\n"
    "Imagine that, to swallow a cat!\n"
    "She swallowed the cat to catch the bird.\n"
    "She swallowed the bird to catch the spider that wriggled and jiggled and "
    "tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a dog.\n"
    "What a hog, to swallow a dog!\n"
    "She swallowed the dog to catch the cat.\n"
    "She swallowed the cat to catch the bird.\n"
    "She swallowed the bird to catch the spider that wriggled and jiggled and "
    "tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a goat.\n"
    "Just opened her throat and swallowed a goat!\n"
    "She swallowed the goat to catch the dog.\n"
    "She swallowed the dog to catch the cat.\n"
    "She swallowed the cat to catch the bird.\n"
    "She swallowed the bird to catch the spider that wriggled and jiggled and "
    "tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a cow.\n"
    "I don't know how she swallowed a cow!\n"
    "She swallowed the cow to catch the goat.\n"
    "She swallowed the goat to catch the dog.\n"
    "She swallowed the dog to catch the cat.\n"
    "She swallowed the cat to catch the bird.\n"
    "She swallowed the bird to catch the spider that wriggled and jiggled and "
    "tickled inside her.\n"
    "She swallowed the spider to catch the fly.\n"
    "I don't know why she swallowed the fly. Perhaps she'll die.\n",
    "I know an old lady who swallowed a horse.\n"
    "She's dead, of course!\n"};

string food_chain::verse(int n) { return raw[n - 1]; }

string food_chain::verses(int a, int b) {
    string res;
    for (int i = a - 1; i <= b - 1; i++) {
        res += raw[i];
        res += "\n";
    }
    return res;
}

string food_chain::sing() { return verses(1, 8); }
