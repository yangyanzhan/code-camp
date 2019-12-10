// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/boxes-packing.html .

bool boxesPacking(std::vector<int> length, std::vector<int> width, std::vector<int> height) {
    using namespace std;
    vector<vector<int>> boxes;
    for (int i = 0; i < length.size(); i++) {
        vector<int> box = {length[i], width[i], height[i]};
        sort(box.begin(), box.end());
        boxes.push_back(box);
    }
    sort(boxes.begin(), boxes.end(), [] (auto box1, auto box2) {
        long long s1 = (long long)box1[0] * box1[1] * box1[2];
        long long s2 = (long long)box2[0] * box2[1] * box2[2];
        return s1 < s2;
    });
    for (int i = boxes.size() - 1; i > 0; i--) {
        auto box1 = boxes[i], box2 = boxes[i - 1];
        long long s1 = (long long)box1[0] * box1[1] * box1[2];
        long long s2 = (long long)box2[0] * box2[1] * box2[2];
        if (s1 == s2) {
            return false;
        }
        if (!(box2[0] < box1[0] && box2[1] < box1[1] && box2[2] < box1[2])) {
            return false;
        }
    }
    return true;
}

