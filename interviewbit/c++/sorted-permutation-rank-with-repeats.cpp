// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sorted-permutation-rank-with-repeats.html .

#define MOD 1000003

void initializeFactorials(int totalLen, vector<int> &fact) {
    long long int factorial = 1;
    fact.push_back(1); // 0!= 1
    for (int curIndex = 1; curIndex < totalLen; curIndex++) {
        factorial = (factorial * curIndex) % MOD;
        fact.push_back(factorial);
    }
    return;
}

long long int inverseNumber(int num) {
    // Inverse modulo : https://en.wikipedia.org/wiki/Modular_multiplicative_inverse
    // Calculate num ^ MOD-2  % MOD
    long long int ans = 1, base = (long long)num;
    int power = MOD - 2;
    while (power > 0) {
        if (power == 1) {
            return (ans * base) % MOD;
        }
        if (power % 2 == 0) {
            base = (base * base) % MOD;
            power /= 2;
        } else {
            ans = (ans * base) % MOD;
            power--;
        }
    }
    return ans;
}

int Solution::findRank(string S) {
    // Initializations

    int charCount[256]; // count of characters in S.
    memset(charCount, 0, sizeof(charCount));
    for (int i = 0; i < S.length(); i++)
        charCount[S[i]]++;

    vector<int> fact; // fact[i] will contain i! % MOD
    initializeFactorials(S.length() + 1, fact);

    long long int rank = 1;
    for (int i = 0; i < S.length(); i++) {
        // find number of permutations placing character smaller than S[i] at ith position
        // among characters from i to S.length
        long long int less = 0;
        int remaining = S.length() - i - 1;
        for (int ch = 0; ch < S[i]; ch++) {
            if (charCount[ch] == 0)
                continue;
            // Lets try placing ch as the first character in remaining characters
            // and check the number of permutation possible.
            charCount[ch]--;
            long long int numPermutation = fact[remaining];

            for (int c = 0; c < 128; c++) {
                if (charCount[c] <= 1)
                    continue;
                numPermutation =
                    (numPermutation * inverseNumber(fact[charCount[c]])) % MOD;
            }

            charCount[ch]++;
            less = (less + numPermutation) % MOD;
        }

        rank = (rank + less) % MOD;
        // remove the current character from the set.
        charCount[S[i]]--;
    }
    return rank;
}
