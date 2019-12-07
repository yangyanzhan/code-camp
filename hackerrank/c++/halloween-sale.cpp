// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/halloween-sale.html .

int howManyGames(long long p, long long d, long long m, long long s) {
    if (s < p) {
        return 0;
    }
    long long c1 = (p - m) / d + 1;
    long long t1 = (p + (p - (c1 - 1) * d)) * c1 / 2;
    if (s <= t1) {
        long long total = 0, count = 0;
        for (int i = 1; i <= c1; i++) {
            total += p;
            if (total > s) {
                break;
            }
            count++;
            p -= d;
            p = max(p, m);
        }
        return count;
    } else {
        return c1 + (s - t1) / m;
    }
}
