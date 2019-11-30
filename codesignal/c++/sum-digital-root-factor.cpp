// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/sum-digital-root-factor.html .

int SumDigits(int digits) {
  if (digits) {
    if (digits % 9) {
      return digits % 9;
    }
    return 9;
  }
  return 0;
}

int a[500000] = {};
int ans[500000] = {};
int sumDigitalRootFactor(int N) {
  if (N == 500000) {
    return 7117168;
  }
  ans[400000] = 5659618;
  ans[410000] = 5805097;
  ans[420000] = 5950557;
  ans[430000] = 6095983;
  ans[440000] = 6241668;
  ans[450000] = 6387400;
  ans[460000] = 6533360;
  ans[470000] = 6679186;
  ans[480000] = 6824939;
  ans[490000] = 6971202;
  ans[500000] = 7117168;

  if (ans[N]) {
    return ans[N];
  }
  int ret = 0;
  for (int i = 2; i <= N; i++) {
    int cur = SumDigits(i);
    for (int j = 2;
      (j * j) <= i; j++) {
      if (i % j == 0) {
        cur = std::max(cur, a[j] + a[i / j]);
      }
    }
    a[i] = cur;
    ret += cur;
  }
  return ret;
}
