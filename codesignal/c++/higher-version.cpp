// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/higher-version.html .

std::vector<int> split(std::string ver) {
    using namespace std;
    vector<int> res;
    int idx = 0;
    while (true) {
        int dot_idx = ver.find('.', idx);
        if (dot_idx != string::npos) {
            res.push_back(stoi(ver.substr(idx, dot_idx - idx)));
        } else {
            res.push_back(stoi(ver.substr(idx)));
            break;
        }
        idx = dot_idx + 1;
    }
    return res;
}

bool higherVersion(std::string ver1, std::string ver2) {
    using namespace std;
    vector<int> nums1 = split(ver1), nums2 = split(ver2);
    return nums1 > nums2;
}

