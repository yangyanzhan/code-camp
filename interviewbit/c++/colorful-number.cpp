// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/colorful-number.html .

int Solution::colorful(int A) {
    stringstream ss;
    ss << A;
    string word = ss.str();
    set<int> nums;
    for (int i = 0; i < word.length(); i++) {
        for (int k = 1; i + k <= word.length(); k++) {
            string part = word.substr(i, k);
            long long product = 1;
            for (int j = 0; j < part.length(); j++) {
                product *= (part[j] - '0');
            }
            if (nums.find(product) != nums.end()) {
                return 0;
            }
            nums.insert(product);
        }
    }
    return 1;
}
