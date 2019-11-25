// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/elections-winners.html .

int electionsWinners(std::vector<int> votes, int k) {
    using namespace std;
    int largest = *max_element(votes.begin(), votes.end());
    int res = 0, largest_count = 0;
    for (auto vote: votes) {
        if (vote == largest) {
            largest_count++;
        } else if (vote + k > largest) {
            res++;
        }
    }
    if (k > 0) {
        res += largest_count;
    } else if (largest_count == 1) {
        res += 1;
    }
    return res;
}

