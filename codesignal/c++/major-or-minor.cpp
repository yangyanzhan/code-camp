// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/major-or-minor.html .

int note_to_int(std::string note) {
    using namespace std;
    int end = note.back() - '0';
    string item = note.substr(0, note.size() - 1);
    vector<string> items = {"C",  "C#", "D",  "D#", "E",  "F",
                            "F#", "G",  "G#", "A",  "A#", "B"};
    int start = 0;
    for (int i = 0; i < items.size(); i++) {
        if (items[i] == item) {
            start = i;
            break;
        }
    }
    return end * items.size() + start;
}

std::string majorOrMinor(std::vector<std::string> scale) {
    using namespace std;
    string list;
    for (int i = 1; i < scale.size(); i++) {
        int a = note_to_int(scale[i - 1]);
        int b = note_to_int(scale[i]);
        list += (b - a == 1) ? "S" : "T";
    }
    return list == "TTSTTTS" ? "major" : "minor";
}
