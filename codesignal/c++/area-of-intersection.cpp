// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/area-of-intersection.html .

int areaOfIntersection(std::vector<int> shape1, std::vector<int> shape2) {
    using namespace std;
    int n1 = shape1[0], x1 = shape1[1], y1 = shape1[2];
    int n2 = shape2[0], x2 = shape2[1], y2 = shape2[2];
    int res = 0;
    for (int dx = -1; dx <= 1; dx++) {
        if (dx == 0) {
            continue;
        }
        for (int dy = -1; dy <= 1; dy++) {
            if (dy == 0) {
                continue;
            }
            for (int x3 = 1; x3 < n1; x3++) {
                for (int y3 = 1; y3 < n1 - x3; y3++) {
                    int x = x1 + dx * x3;
                    int y = y1 + dy * y3;
                    int dist = abs(x - x2) + abs(y - y2);
                    if (dist < n2) {
                        res++;
                    }
                }
            }
        }
    }
    for (int x = x1 - n1 + 1; x <= x1 + n1 - 1; x++) {
        if (x == x1) {
            continue;
        }
        int dist = abs(x - x2) + abs(y1 - y2);
        if (dist < n2) {
            res++;
        }
    }
    for (int y = y1 - n1 + 1; y <= y1 + n1 - 1; y++) {
        if (y == y1) {
            continue;
        }
        int dist = abs(x1 - x2) + abs(y - y2);
        if (dist < n2) {
            res++;
        }
    }
    int dist = abs(x1 - x2) + abs(y1 - y2);
    if (dist < n2) {
        res++;
    }
    return res;
}
