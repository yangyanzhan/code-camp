// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/catalog-update.html .

std::vector<std::vector<std::string>> catalogUpdate(std::vector<std::vector<std::string>> catalog, std::vector<std::vector<std::string>> updates) {
    using namespace std;
    for (auto update: updates) {
        string cate = update[0], item = update[1];
        bool found = false;
        int pos = -1;
        for (int i = 0; i < catalog.size(); i++) {
            auto list = catalog[i];
            if (list[0] == cate) {
                found = true;
                int item_pos = -1;
                for (int j = 1; j < list.size(); j++) {
                    if (list[j] > item) {
                        item_pos = j;
                        break;
                    }
                }
                if (item_pos == -1) {
                    catalog[i].push_back(item);
                } else {
                    catalog[i].insert(catalog[i].begin() + item_pos, item);
                }
                break;
            } else {
                if (list[0] > cate) {
                    if (pos == -1) {
                        pos = i;
                    }
                }
            }
        }
        if (!found) {
            if (pos == -1) {
                catalog.push_back(update);
            } else {
                catalog.insert(catalog.begin() + pos, update);
            }
        }
    }
    return catalog;
}

