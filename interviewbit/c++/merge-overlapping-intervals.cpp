// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/merge-overlapping-intervals.html .

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool cmp(Interval i1, Interval i2) {
    return i1.start < i2.start;
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    sort(A.begin(), A.end(), cmp);
    vector<Interval>::iterator it = A.begin();
    Interval i = *it;
    it++;
    while (it != A.end()) {
        Interval i1 = *it;
        if (i1.start > i.end) {
            res.push_back(i);
            i = i1;
        } else {
            i.end = max(i.end, i1.end);
        }
        it++;
    }
    res.push_back(i);
    return res;
}

