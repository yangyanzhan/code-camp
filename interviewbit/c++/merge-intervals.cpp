// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/merge-intervals.html .

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> res;
    vector<Interval>::iterator it = intervals.begin();
    while (it != intervals.end()) {
        Interval interval = *it;
        int x1 = newInterval.start, y1 = newInterval.end, x2 = interval.start, y2 = interval.end;
        if (y1 < x2) {
            res.push_back(newInterval);
            break;
        }
        if ((x1 <= x2 && x2 <= y1) || (x2 <= x1 && x1 <= y2)) {
            newInterval.start = min(x1, x2);
            newInterval.end = max(y1, y2);
        } else {
            res.push_back(interval);
        }
        it++;
    }
    if (it == intervals.end()) {
        res.push_back(newInterval);
    }
    while (it != intervals.end()) {
        res.push_back(*it);
        it++;
    }
    return res;
}

