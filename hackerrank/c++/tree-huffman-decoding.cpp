// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

void decode_huff(node * root, string s) {
    auto curr = root;
    int i = 0;
    vector<char> res;
    while (i < s.size()) {
        auto ch = s[i];
        if (ch == '0') {
            if (curr->left) {
                curr = curr->left;
                i++;
            } else {
                 res.push_back(curr->data);
                 curr = root;
            }
        } else {
            if (curr->right) {
                curr = curr->right;
                i++;
            } else {
                res.push_back(curr->data);
                curr = root;
            }
        }
    }
    res.push_back(curr->data);
    cout << string(res.begin(), res.end());
}
