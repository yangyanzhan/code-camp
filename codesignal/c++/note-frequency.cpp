// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/note-frequency.html .

double noteFrequency(std::string note) {
    using namespace std;
    vector<vector<string>> notes = {
        {"C"}, {"C#", "Db"}, {"D"}, {"D#", "Eb"}, {"E"}, {"F"}, {"F#", "Gb"},
        {"G"}, {"G#", "Ab"}, {"A"}, {"A#", "Bb"}, {"B"}};
    int num = note[note.size() - 1] - '0';
    note = note.substr(0, note.size() - 1);
    int idx;
    for (int i = 0; i < notes.size(); i++) {
        for (auto note1 : notes[i]) {
            if (note1 == note) {
                idx = i;
                break;
            }
        }
    }
    double c5 = 523.251131;
    if (num >= 5) {
        return c5 * pow(2, idx / 12.0 + num - 5);
    } else {
        return c5 / pow(2, 5 - 1 - num + (12 - idx) / 12.0);
    }
}
