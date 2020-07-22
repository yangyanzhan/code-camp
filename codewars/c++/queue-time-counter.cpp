// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/queue-time-counter.html .

#include <list>
#include <vector>

using namespace std;

long long queue_for_list(std::list<int> queuers, int pos) {
    auto front = queuers.front();
    if (pos == 0 && front == 1) {
        return 1;
    }
    queuers.pop_front();
    front--;
    pos--;
    if (front > 0) {
        queuers.push_back(front);
    }
    if (pos < 0) {
        pos = queuers.size() - 1;
    }
    return 1 + queue_for_list(queuers, pos);
}

long long queue(const std::vector<int> &queuers, int pos) {
    return queue_for_list(list(queuers.begin(), queuers.end()), pos);
}
