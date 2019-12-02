// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/volleyball-positions.html .

int Q(int x) {
    int f = x % 6;
    return (f < 0 ? f + 6 : f);
}

std::vector<std::vector<std::string>> volleyballPositions(std::vector<std::vector<std::string>> f, int k) {

    std::vector<std::string> p =
    {f[3][2], f[1][2], f[0][1], f[1][0], f[3][0], f[2][1]};

    f[3][2] = p[Q(-k)];
    f[1][2] = p[Q(-k + 1)];
    f[0][1] = p[Q(-k + 2)];
    f[1][0] = p[Q(-k + 3)];
    f[3][0] = p[Q(-k + 4)];
    f[2][1] = p[Q(-k + 5)];

    return f;
}


