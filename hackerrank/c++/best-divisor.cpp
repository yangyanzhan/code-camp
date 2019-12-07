// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/best-divisor.html .

int get_score(int n) {
    int score = 0;
    while (n >= 10) {
        score += n % 10;
        n /= 10;
    }
    score += n;
    return score;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int factor = 1;
    int best_factor = 1;
    int best_score = 1;
    int half = floor(sqrt(n));
    while (factor <= half) {
        if (n % factor == 0) {
            int f1 = factor;
            int score = get_score(f1);
            if (score > best_score || (score == best_score && f1 < best_factor)) {
                best_factor = f1;
                best_score = score;
            }
            int f2 = n / factor;
            score = get_score(f2);
            if (score > best_score || (score == best_score && f2 < best_factor)) {
                best_factor = f2;
                best_score = score;
            }
        }
        factor++;
    }

    cout << best_factor << endl;

    return 0;
}
