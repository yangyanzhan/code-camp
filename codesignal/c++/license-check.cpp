// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/license-check.html .

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <jsoncpp/json/json.h>
#include <set>

using namespace std;

vector<vector<string>> extract_info(string command) {
    vector<vector<string>> res;
    command += " > info.txt";
    system(command.c_str());
    fstream in("info.txt");
    string line;
    getline(in, line);
    while (getline(in, line)) {
        int idx = line.find("\t");
        if (idx == string::npos) {
            break;
        }
        string head = line.substr(0, idx);
        line += ",";
        vector<string> row{head};
        int pre = idx;
        while ((idx = line.find(",", pre + 1)) != string::npos) {
            string item = line.substr(pre + 1, idx - pre);
            row.push_back(item);
            pre = idx;
        }
        res.push_back(row);
    }
    in.close();
    return res;
}

int main() {
    string command = "mysql -u test -D ri_db -e ";
    auto users = extract_info(command + "'select * from users'");
    auto products = extract_info(command + "'select * from products'");
    for (auto user : users) {
        string user_name = user[0];
        cout << "User " << user_name << ":" << endl;
        auto begin = user.begin();
        advance(begin, 1);
        set<string> licenses(begin, user.end());
        for (auto product : products) {
            string product_name = product[0];
            bool valid = false;
            for (int i = 1; i < product.size(); i++) {
                if (licenses.find(product[i]) != licenses.end()) {
                    valid = true;
                    break;
                }
            }
            cout << "  " << product_name << ": " << (valid ? "true" : "false")
                 << endl;
        }
    }
    return 0;
}
