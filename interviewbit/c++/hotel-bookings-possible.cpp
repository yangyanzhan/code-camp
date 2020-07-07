// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/hotel-bookings-possible.html .

struct Event {
    int time;
    int action;
    Event(int time, int action): time(time), action(action) {}
    bool operator<(const Event &event) const {
        if (time == event.time) {return action > 0;}
        return time < event.time;
    }
};

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    long long n = arrive.size(), i = 0, j = 0;
    long long maxTime = 1000000000000000000;
    while (i < n || j < n) {
        long long a = maxTime, b = maxTime;
        if (i < n) a = arrive[i];
        if (j < n) b = depart[j];
        if (b <= a) {
            K++; j++;
        } else {
            K--; i++;
        }
        if (K < 0) return false;
    }
    return true;
}

