// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/analyze-ip-addresses.html .

#include <algorithm>
#include <dirent.h>
#include <fstream>
#include <iostream>
#include <jsoncpp/json/json.h>
#include <regex>
#include <set>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <vector>

using namespace std;

bool is_dir(const char *path) {
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISDIR(path_stat.st_mode);
}

void list_dir(string root_path, vector<string> &files) {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(root_path.c_str())) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            string path(ent->d_name);
            if (path == "." || path == "..") {
                continue;
            }
            path = root_path + "/" + path;
            if (is_dir(path.c_str())) {
                list_dir(path, files);
            } else {
                files.push_back(path);
            }
        }
        closedir(dir);
    }
}

int main() {
    set<string> ips;
    regex reg("(\\d+)\\.(\\d+)\\.(\\d+)\\.(\\d+)");
    vector<string> files;
    list_dir("/root", files);
    for (auto file : files) {
        ifstream in(file);
        string line;
        while (in >> line) {
            for (auto it = sregex_iterator(line.begin(), line.end(), reg);
                 it != sregex_iterator(); it++) {
                if (it->size() != 5) {
                    continue;
                }
                bool valid = true;
                for (int i = 1; i <= 4; i++) {
                    string item = (*it)[i].str();
                    if (item.size() > 3) {
                        valid = false;
                        break;
                    }
                    int num = stoi(item);
                    if (num != 0 && item[0] == '0') {
                        valid = false;
                        break;
                    }
                    if (!(0 <= num && num <= 255)) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) {
                    continue;
                }
                string ip = it->str();
                ips.insert(ip);
            }
        }
    }
    for (auto ip : ips) {
        cout << ip << endl;
    }
    return 0;
}
