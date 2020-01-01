// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-tree-symmetric.html .

// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

bool isMirror(Tree<int> *t, Tree<int> *s) {
    if (t == nullptr && s == nullptr) {
        return true;
    }
    if (t == nullptr || s == nullptr) {
        return false;
    }
    if (t->value != s->value) {
        return false;
    }
    return isMirror(t->left, s->right) && isMirror(t->right, s->left);
}

bool isTreeSymmetric(Tree<int> *t) {
    return isMirror(t, t);
}

