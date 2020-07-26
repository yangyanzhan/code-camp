// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/principal-diagonal-vs-secondary-diagonal.html .

#include <string>
#include <vector>

using namespace std;

std::string diagonal(vector<vector<int>> matrix) {
    long long r1 = 0, r2 = 0;
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        r1 += matrix[i][i];
        r2 += matrix[i][n - 1 - i];
    }
    if (r1 == r2) {
        return "Draw!";
    }
    return r1 > r2 ? "Principal Diagonal win!" : "Secondary Diagonal win!";
}
