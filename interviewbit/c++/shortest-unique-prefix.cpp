// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/shortest-unique-prefix.html .

struct Node {
    string word;
    vector<char> chs;
    vector<Node *> children;
    int count;
    Node(string word)
        : word(word), chs(vector<char>()), children(vector<Node *>()),
          count(0) {}
    void insert(string raw) {
        count++;
        if (raw.length() <= 0) {
            return;
        }
        char ch = raw[0];
        int idx;
        auto it = find(chs.begin(), chs.end(), ch);
        if (it == chs.end()) {
            chs.push_back(ch);
            children.push_back(new Node(word + ch));
            idx = children.size() - 1;
        } else {
            idx = it - chs.begin();
        }
        children[idx]->insert(raw.substr(1));
    }
};

void traverse(Node *root, vector<string> &res) {
    if (!root) {
        return;
    }
    if (root->count == 1) {
        res.push_back(root->word);
        return;
    }
    for (auto child : root->children) {
        traverse(child, res);
    }
}

void sort(vector<string> &raws, vector<string> &res) {
    map<int, string> cache;
    for (int i = 0; i < raws.size(); i++) {
        string raw = raws[i];
        for (string item : res) {
            if (raw.find(item) == 0) {
                cache[i] = item;
                break;
            }
        }
    }
    for (int i = 0; i < raws.size(); i++) {
        res[i] = cache[i];
    }
}

vector<string> Solution::prefix(vector<string> &words) {
    Node *trie = new Node("");
    for (string word : words) {
        trie->insert(word);
    }
    vector<string> res;
    traverse(trie, res);
    sort(words, res);
    return res;
}
