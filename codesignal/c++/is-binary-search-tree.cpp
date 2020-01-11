// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-binary-search-tree.html .

// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

bool is_binary(Tree<int> *tree, int mini, int maxi) {
    using namespace std;
    if (!tree) {
        return true;
    }
    if (tree->value <= mini || tree->value >= maxi) {
        return false;
    }
    return is_binary(tree->left, mini, tree->value) && is_binary(tree->right, tree->value, maxi);
}

bool isBinarySearchTree(Tree<int> *tree) {
    using namespace std;
    return is_binary(tree, numeric_limits<int>::min(), numeric_limits<int>::max());
}

