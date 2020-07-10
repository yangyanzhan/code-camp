// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/indicator.html .

void Populate(std::map<int, int> &table, int num) {
    int i, root;
    while (num % 2 == 0) {
        table[2] += 1;
        num /= 2;
    }
    root = sqrt(num);
    for (i = 3; i <= root; i = i + 2) {
        while (num % i == 0) {
            table[i] += 1;
            num /= i;
        }
    }
    if (num > 1)
        table[num] += 1;
}

int Process(std::map<int, int> table) {
    int count = 0, fir, sec, temp, minus, temp1;
    std::map<int, int>::iterator it;
    for (it = table.begin(); it != table.end(); it++) {
        fir = it->first;
        sec = it->second;
        temp = fir;
        minus = 1;
        while (sec > 0) {
            sec = sec - minus;
            temp += fir;
            temp1 = temp;
            minus = 0;
            while (temp1 % fir == 0) {
                minus += 1;
                temp1 /= fir;
            }
        }
        temp -= fir;
        if (temp > count)
            count = temp;
    }
    return count;
}

int Indicator(int n) {
    int num;
    std::map<int, int> table;
    std::map<int, int>::iterator it;
    num = n;
    if (num == 1)
        return 1;
    Populate(table, num);
    return Process(table);
}
