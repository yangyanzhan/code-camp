// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/hamming.html .

// hemming.h

#include <string>

using namespace std;

class hamming {
  public:
    static int compute(string in1, string in2);
};

// hemming.cpp

#include <cstdlib>
#include <stdexcept>

#include "hamming.h"

int hamming::compute(string in1, string in2) {
    if (in1.size() != in2.size()) {
        throw domain_error("size of the two arguments is not eaual");
    }
    int res = 0;
    for (int i = 0; i < (int)in1.size(); i++) {
        res += in1[i] == in2[i] ? 0 : 1;
    }
    return res;
}
