// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/2-sum.html .

struct Pair {
    int begin;
    int end;
    Pair(int begin, int end) : begin(begin), end(end) {}
    bool operator<(const Pair &pair) const {
        if (end != pair.end) {
            return end < pair.end;
        }
        return begin < pair.begin;
    }
    vector<int> answer() {
        if (invalid()) {
            return vector<int>();
        }
        return vector<int>{begin + 1, end + 1};
    }
    bool invalid() { return begin == end; }
};

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    map<int, vector<int>> mapping;
    for (int i = 0; i < A.size(); i++) {
        int num = A[i];
        if (mapping.find(num) == mapping.end()) {
            mapping[num] = vector<int>{i};
        } else {
            mapping[num].push_back(i);
        }
    }
    Pair bestPair(0, 0);
    for (int i = 0; i < A.size(); i++) {
        int a = A[i], b = B - a;
        if (mapping.find(b) == mapping.end()) {
            continue;
        }
        vector<int> &indexes = mapping[b];
        for (int index : indexes) {
            if (index > i) {
                Pair pair(i, index);
                if (bestPair.invalid()) {
                    bestPair = pair;
                } else {
                    bestPair = min(bestPair, pair);
                }
                break;
            }
        }
    }
    return bestPair.answer();
}
