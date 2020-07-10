// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/robot-name.html .

// robot_name.h

#include <cstdlib>
#include <ctime>
#include <set>
#include <string>

using std::set;
using std::string;

namespace robot_name {
class robot {
    static bool hasInitRand;
    static set<string> names;
    string _name;
    string genName();

  public:
    robot() { reset(); }
    string name() const { return _name; }
    void reset();
};
} // namespace robot_name

// robot_name.cpp

#include <cstdlib>
#include <ctime>

#include "robot_name.h"

namespace robot_name {
bool robot::hasInitRand = false;
set<string> robot::names;
string robot::genName() {
    if (!hasInitRand) {
        srand(time(NULL));
        hasInitRand = true;
    }
    string name;
    for (int i = 0; i < 2; i++) {
        name += (rand() % 26 + 'A');
    }
    for (int i = 0; i < 3; i++) {
        name += (rand() % 10 + '0');
    }
    return name;
}
void robot::reset() {
    while (true) {
        string newName = genName();
        if (names.find(newName) == names.end()) {
            _name = newName;
            names.insert(newName);
            break;
        }
    }
}
} // namespace robot_name
