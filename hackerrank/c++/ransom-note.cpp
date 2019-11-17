// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/ransom-note.html .

void checkMagazine(vector<string> magazine, vector<string> note) {
    map<string, int> mapping;
    for (auto word : magazine) {
        if (mapping.find(word) == mapping.end()) {
            mapping[word] = 0;
        }
        mapping[word]++;
    }
    bool valid = true;
    for (auto word : note) {
        if (mapping.find(word) == mapping.end() || mapping[word] == 0) {
            valid = false;
            break;
        }
        mapping[word]--;
    }
    std::cout << (valid ? "Yes" : "No") << std::endl;
}
