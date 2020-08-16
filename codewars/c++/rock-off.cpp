// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/rock-off.html .

using namespace std;

string solve_rock_off(const vector<int> &alice, const vector<int> &bob) {
    int s1 = 0, s2 = 0;
    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) {
            s1++;
        } else if (alice[i] < bob[i]) {
            s2++;
        }
    }
    string head = to_string(s1) + ", " + to_string(s2) + ": ";
    if (s1 == s2) {
        return head + "that looks like a \"draw\"! Rock on!";
    }
    if (s1 > s2) {
        return head + "Alice made \"Kurt\" proud!";
    }
    return head + "Bob made \"Jeff\" proud!";
}
