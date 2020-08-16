// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-the-vowels.html .

using namespace std;
std::vector<int> vowelIndices(std::string word) {
    vector<int> res;
    string vowels = "aeiou";
    for (int i = 0; i < word.size(); i++) {
        char ch = tolower(word[i]);
        if (vowels.find(ch) != string::npos) {
            res.push_back(i + 1);
        }
    }
    return res;
}
