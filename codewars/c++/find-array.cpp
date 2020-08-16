// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-array.html .

using namespace std;

template <typename T> vector<T> find_array(vector<T> arr1, vector<int> arr2) {
    vector<T> res;
    for (auto idx : arr2) {
        if (0 <= idx && idx < arr1.size()) {
            res.push_back(arr1[idx]);
        }
    }
    return res;
}
