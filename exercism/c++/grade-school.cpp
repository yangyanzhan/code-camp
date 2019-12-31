// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/grade-school.html .

// grade_school.h

#include <map>
#include <vector>
#include <string>

using std::map;
using std::vector;
using std::string;

namespace grade_school {
    class school {
        map<int, vector<string>> cache;
        public:
            const map<int, vector<string>> roster() const {
                return cache;
            }
            void add(string name, int grade);
            vector<string> grade(int gradeNum);
    };
}

// grade_school.cpp

#include "grade_school.h"

namespace grade_school {
    void school::add(string name, int grade) {
        if (cache.find(grade) == cache.end()) {
            cache[grade] = vector<string>();
        }
        cache[grade].push_back(name);
        std::sort(cache[grade].begin(), cache[grade].end());
    }
    vector<string> school::grade(int gradeNum) {
        if (cache.find(gradeNum) != cache.end()) {
            return cache[gradeNum];
        }
        return vector<string>();
    }
}

