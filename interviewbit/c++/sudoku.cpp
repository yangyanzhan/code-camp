// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sudoku.html .

vector<set<int>> regions(9), rows(9), columns(9);

int getRegionId(int i, int j) { return (i / 3) * 3 + (j / 3); }

bool traverse(vector<vector<int>> remains, vector<int> &nums) {
    if (remains.size() <= 0)
        return true;
    int i = remains[0][0], j = remains[0][1], regionId = getRegionId(i, j);
    set<int> &row = rows[i], &column = columns[j], &region = regions[regionId];
    remains.erase(remains.begin());
    for (int num = 1; num <= 9; num++) {
        if ((region.find(num) != region.end()) ||
            (row.find(num) != row.end()) ||
            (column.find(num) != column.end())) {
            continue;
        }
        row.insert(num);
        column.insert(num);
        region.insert(num);
        nums.push_back(num);
        if (traverse(remains, nums)) {
            return true;
        }
        nums.pop_back();
        row.erase(num);
        column.erase(num);
        region.erase(num);
    }
    return false;
}

void Solution::solveSudoku(vector<vector<char>> &A) {
    for (int i = 0; i < 9; i++) {
        regions[i] = set<int>();
        rows[i] = set<int>();
        columns[i] = set<int>();
    }
    vector<vector<int>> remains;
    vector<int> nums;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char ch = A[i][j];
            if (isdigit(ch)) {
                int num = ch - '0';
                rows[i].insert(num);
                columns[j].insert(num);
                regions[getRegionId(i, j)].insert(num);
            } else {
                remains.push_back(vector<int>{i, j});
            }
        }
    }
    traverse(remains, nums);
    for (int k = 0; k < remains.size(); k++) {
        A[remains[k][0]][remains[k][1]] = nums[k] + '0';
    }
}
