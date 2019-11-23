// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/fill-template.html .

std::string fillTemplate(std::string in, std::vector<std::vector<std::string>> placeholders) {
    using namespace std;
    string res = in, pre = "";
    while (res != pre) {
        pre = res;
        for (vector<string> item: placeholders) {
            string key = "{{" + item[0] + "}}";
            string value = item[1];
            int pos = 0;
            while ((pos = res.find(key, pos)) != string::npos) {
                res.replace(pos, key.length(), value);
                pos += value.length();
            }
        }
    }
    return res;
}
