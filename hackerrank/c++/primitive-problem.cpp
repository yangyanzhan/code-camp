// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/primitive-problem.html .

int multi_mod(int x, int y, int divisor) {
    return (long)x * y % divisor;
}

int pow_mod(int x, int y, int divisor) {
    int res = 1;
    while (y != 0) {
        if (y % 2 != 0) {
            res = multi_mod(res, x, divisor);
        }
        x = multi_mod(x, x, divisor);
        y /= 2;
    }
    return res;
}

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> get_prime_factors(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime(i) && n % i == 0) {
            res.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        res.push_back(n);
    }
    return res;
}

bool is_primitive_root(int p, vector<int> &prime_factors, int n) {
    int s = p - 1;
    for (auto prime_factor: prime_factors) {
        if (pow_mod(n, s / prime_factor, p) == 1) {
            return false;
        }
    }
    return true;
}

int compute_all(int n, vector<int> &prime_factors) {
    int res = n;
    for (auto prime_factor: prime_factors) {
        res = res / prime_factor * (prime_factor - 1);
    }
    return res;
}

int main() {
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int s = p - 1;
    vector<int> prime_factors = get_prime_factors(s);

    int min_root = 2;
    while (!is_primitive_root(p, prime_factors, min_root)) {
        min_root++;
    }

    int total = compute_all(s, prime_factors);

    cout << min_root << " " << total << endl;

    return 0;
}

