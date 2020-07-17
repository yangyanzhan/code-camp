// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/convert-a-linked-list-to-a-string.html .

#include <sstream>
#include <string>

using namespace std;

std::string stringify(Node *list) {
    stringstream ss;
    Node *ptr = list;
    while (ptr) {
        ss << ptr->data;
        ss << " -> ";
        ptr = ptr->next;
    }
    ss << "nullptr";
    return ss.str();
}
