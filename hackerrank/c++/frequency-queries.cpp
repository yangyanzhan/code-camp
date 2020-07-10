// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/frequency-queries.html .

vector<int> freqQuery(vector<vector<int>> queries) {
    vector<int> res;
    map<int, int> mapping;
    map<int, int> counts;
    for (auto query : queries) {
        switch (query[0]) {
        case 1: {
            int num = query[1], count;
            if (mapping.find(num) == mapping.end()) {
                mapping[num] = 1;
                count = 1;
                if (counts.find(count) == counts.end()) {
                    counts[count] = 1;
                } else {
                    counts[count]++;
                }
            } else {
                count = mapping[num];
                counts[count]--;
                mapping[num]++;
                count++;
                if (counts.find(count) == counts.end()) {
                    counts[count] = 1;
                } else {
                    counts[count]++;
                }
            }
            break;
        }
        case 2: {
            int num = query[1], count;
            if (mapping.find(num) != mapping.end() &&
                (count = mapping[num]) > 0) {
                counts[count]--;
                mapping[num]--;
                count--;
                if (count > 0) {
                    if (counts.find(count) == counts.end()) {
                        counts[count] = 1;
                    } else {
                        counts[count]++;
                    }
                }
            }
            break;
        }
        case 3: {
            int count = query[1];
            bool found =
                counts.find(count) != counts.end() && counts[count] > 0;
            res.push_back(found ? 1 : 0);
            break;
        }
        }
    }
    return res;
}
