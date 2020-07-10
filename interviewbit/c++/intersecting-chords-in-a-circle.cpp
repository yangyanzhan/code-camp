// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/intersecting-chords-in-a-circle.html .

int Solution::chordCnt(int A) {
    vector<long long> cache(A + 1, 1);
    for (int i = 2; i <= A; i++) {
        cache[i] = 0;
        for (int j = 0; j <= i - 1; j++) {
            cache[i] += cache[j] * cache[i - 1 - j];
            cache[i] %= 1000000007;
        }
    }
    return cache[A];
}
