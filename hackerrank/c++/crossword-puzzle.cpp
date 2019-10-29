// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

bool crosswordPuzzle(vector<string> &crossword, vector<string> words) {
    if (words.empty()) {
        return true;
    }
    string word = words[0];
    vector<string> remains(words.begin() + 1, words.end());
    int m = crossword.size(), n = crossword[0].size();
    for (int i = 0; i < m; i++) {
        string &line = crossword[i];
        for (int j = 0; j + word.size() <= n; j++) {
            string old = line.substr(j, word.size());
            bool valid = true;
            for (int k = 0; k < word.size(); k++) {
                if (!(old[k] == '-' || old[k] == word[k])) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                line.replace(j, word.size(), word);
                if (crosswordPuzzle(crossword, remains)) {
                    return true;
                } else {
                    line.replace(j, word.size(), old);
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j + word.size() <= m; j++) {
            bool valid = true;
            vector<char> old;
            for (int k = 0; k < word.size(); k++) {
                if (!(crossword[j + k][i] == '-' || crossword[j + k][i] == word[k])) {
                    valid = false;
                    break;
                }
                old.push_back(crossword[j + k][i]);
            }
            if (valid) {
                for (int k = 0; k < word.size(); k++) {
                    crossword[j + k][i] = word[k];
                }
                if (crosswordPuzzle(crossword, remains)) {
                    return true;
                } else {
                    for (int k = 0; k < word.size(); k++) {
                        crossword[j + k][i] = old[k];
                    }
                }
            }
        }
    }
    return false;
}

vector<string> crosswordPuzzle(vector<string> &crossword, string words) {
    vector<string> words_vec;
    int head = 0, tail = 0;
    while ((tail = words.find(";", head)) != string::npos) {
        words_vec.push_back(words.substr(head, tail - head));
        head = tail + 1;
    }
    words_vec.push_back(words.substr(head));
    crosswordPuzzle(crossword, words_vec);
    return crossword;
}
