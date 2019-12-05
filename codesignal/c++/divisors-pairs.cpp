// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/divisors-pairs.html .

int divisorsPairs(std::vector<int> sequence) {
    using namespace std;
    int res = 0;
    for (int i = 0; i < sequence.size(); i++) {
        for (int j = i + 1; j < sequence.size(); j++) {
            int a = sequence[i], b = sequence[j];
            if (a < b && a != 0 && b % a == 0) {
                res++;
            }
        }
    }
    return res;
}

