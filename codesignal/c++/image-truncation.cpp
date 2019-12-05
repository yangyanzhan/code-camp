// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/image-truncation.html .

std::vector<std::vector<int>> imageTruncation(std::vector<std::vector<int>> image, int threshold) {
    using namespace std;
    for (auto &row: image) {
        for (auto &pixel: row) {
            if (pixel > threshold) {
                pixel = threshold;
            }
        }
    }
    return image;
}

