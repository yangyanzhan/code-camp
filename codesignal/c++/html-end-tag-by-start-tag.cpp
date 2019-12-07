// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/html-end-tag-by-start-tag.html .

std::string htmlEndTagByStartTag(std::string startTag) {
    using namespace std;
    int pos = 0;
    while (++pos < startTag.length()) {
        if (startTag[pos] == '>' || startTag[pos] == ' ') {
            break;
        }
    }
    string res = startTag.substr(0, pos) + ">";
    res.insert(1, "/");
    return res;
}

