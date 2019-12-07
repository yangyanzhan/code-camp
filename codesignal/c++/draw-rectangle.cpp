// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/draw-rectangle.html .

std::vector<std::vector<char>> drawRectangle(std::vector<std::vector<char>> canvas, std::vector<int> rectangle) {
    using namespace std;
    int x1 = rectangle[1], y1 = rectangle[0], x2 = rectangle[3], y2 = rectangle[2];
    canvas[x1][y1] = '*';
    canvas[x1][y2] = '*';
    canvas[x2][y2] = '*';
    canvas[x2][y1] = '*';
    for (int i = x1 + 1; i < x2; i++) {
        canvas[i][y1] = '|';
        canvas[i][y2] = '|';
    }
    for (int j = y1 + 1; j < y2; j++) {
        canvas[x1][j] = '-';
        canvas[x2][j] = '-';
    }
    return canvas;
}

