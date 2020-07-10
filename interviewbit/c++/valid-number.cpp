// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/valid-number.html .

bool isDigits(string A) {
    for (int i = 0; i < A.length(); i++) {
        if (!isdigit(A[i])) {
            return false;
        }
    }
    return A.length() > 0;
}

bool isInteger(string A) {
    if (A.length() <= 0) {
        return false;
    }
    if (A[0] == '-' || A[0] == '+') {
        return isDigits(A.substr(1));
    } else {
        return isDigits(A);
    }
}

bool isReal(string A) {
    int idx = A.find('.');
    if (idx == string::npos) {
        return isInteger(A);
    } else {
        string A1 = A.substr(0, idx), A2 = A.substr(idx + 1);
        return (A1 == "" || isInteger(A1)) && isDigits(A2);
    }
}

string trimOneSide(string A) {
    int i;
    for (i = 0; i < A.length(); i++) {
        if (A[i] != ' ') {
            break;
        }
    }
    return A.substr(i);
}

string trim(string A) {
    A = trimOneSide(A);
    reverse(A.begin(), A.end());
    A = trimOneSide(A);
    reverse(A.begin(), A.end());
    return A;
}

string lower(string A) {
    string res;
    for (int i = 0; i < A.length(); i++) {
        res += tolower(A[i]);
    }
    return res;
}

int Solution::isNumber(const string A) {
    string B = lower(trim(A));
    int idx = B.find('e');
    if (idx == string::npos) {
        return isReal(B);
    } else {
        string B1 = B.substr(0, idx), B2 = B.substr(idx + 1);
        return isReal(B1) && isInteger(B2);
    }
}
