// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/string-packet-based-communications.html .

using namespace std;

std::string communicationModule(std::string packet) {
    auto head = packet.substr(0, 4);
    auto ins = packet.substr(4, 4);
    auto data1 = stoi(packet.substr(8, 4));
    auto data2 = stoi(packet.substr(12, 4));
    auto foot = packet.substr(16, 4);
    int res = 0;
    if (ins == "0F12") {
        res = data1 + data2;
    } else if (ins == "B7A2") {
        res = data1 - data2;
    } else if (ins == "C3D9") {
        res = data1 * data2;
    }
    res = min(res, 9999);
    res = max(res, 0);
    string item = to_string(res);
    while (item.size() < 4) {
        item = "0" + item;
    }
    return head + "FFFF" + item + "0000" + foot;
}
