// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/.html .

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string xy_temp;
    getline(cin, xy_temp);

    vector<string> xy = split_string(xy_temp);

    int x = stoi(xy[0]);

    int y = stoi(xy[1]);

    bool x_diff = false, y_diff = false;

    for (int n_itr = 1; n_itr < n; n_itr++) {
        string xy_temp;
        getline(cin, xy_temp);

        vector<string> xy = split_string(xy_temp);

        int x1 = stoi(xy[0]);

        if (x != x1) {
            x_diff = true;
        }

        int y1 = stoi(xy[1]);

        if (y != y1) {
            y_diff = true;
        }

        if (x_diff && y_diff) {
            break;
        }
    }

    cout << (x_diff && y_diff ? "NO" : "YES") << endl;

    return 0;
}
