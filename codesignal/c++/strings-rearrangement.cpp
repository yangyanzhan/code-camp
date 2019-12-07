// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/strings-rearrangement.html .

struct Node {
    bool visited = false;
    std::string item;
    std::vector<Node *> outs;
};

int dist(std::string item1, std::string item2) {
    int res = 0;
    for (int i = 0; i < item1.size(); i++) {
        if (item1[i] != item2[i]) {
            res++;
        }
    }
    return res;
}

bool dfs(Node *head, int seen, int expected) {
    head->visited = true;
    for (auto out: head->outs) {
        if (!out->visited) {
            if (dfs(out, seen + 1, expected)) {
                return true;
            }
        }
    }
    head->visited = false;
    return (seen + 1) == expected;
}

bool stringsRearrangement(std::vector<std::string> inputArray) {
    using namespace std;
    vector<Node *> nodes;
    for (auto item: inputArray) {
        Node *curr = new Node();
        curr->item = item;
        for (auto node: nodes) {
            if (dist(node->item, curr->item) == 1) {
                node->outs.push_back(curr);
                curr->outs.push_back(node);
            }
        }
        nodes.push_back(curr);
    }
    for (auto node: nodes) {
        if (dfs(node, 0, nodes.size())) {
            return true;
        }
    }
    return false;
}
