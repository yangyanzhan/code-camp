// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/compare-version-numbers.html .

string trim(string num) {
    int i;
    for (i = 0; i < num.length(); i++) {
        if (num[i] != '0') {
            break;
        }
    }
    if (i == num.length()) {
        return "0";
    } else {
        return num.substr(i);
    }
}

vector<string> toNums(string A) {
    A += ".";
    string pre;
    vector<string> res;
    for (int i = 0; i < A.length(); i++) {
        char ch = A[i];
        if (ch == '.') {
            res.push_back(trim(pre));
            pre = "";
        } else {
            pre += ch;
        }
    }
    return res;
}

vector<string> trim(vector<string> nums) {
    vector<string> res = nums;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (res[i] != "0") {
            break;
        } else {
            res.erase(res.begin() + i);
        }
    }
    if (res.size() <= 0) {
        res.push_back("0");
    }
    return res;
}

bool operator<(const string A, const string B) {
    int n = A.length(), m = B.length();
    if (n != m) {
        return n < m;
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < B[i]) {
            return true;
        } else if (A[i] > B[i]) {
            return false;
        }
    }
    return false;
}

bool operator>(const string A, const string B) {
    int n = A.length(), m = B.length();
    if (n != m) {
        return n > m;
    }
    for (int i = 0; i < n; i++) {
        if (A[i] > B[i]) {
            return true;
        } else if (A[i] < B[i]) {
            return false;
        }
    }
    return false;
}

int Solution::compareVersion(string A, string B) {
    vector<string> nums1 = trim(toNums(A)), nums2 = trim(toNums(B));
    for (int i = 0; i < min(nums1.size(), nums2.size()); i++) {
        if (nums1[i] < nums2[i]) {
            return -1;
        } else if (nums1[i] > nums2[i]) {
            return 1;
        }
    }
    if (nums1.size() < nums2.size()) {
        return -1;
    } else if (nums1.size() > nums2.size()) {
        return 1;
    } else {
        return 0;
    }
}
