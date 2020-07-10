// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/design-a-stack-with-increment-operation.html .

class CustomStack {
    vector<int> stack;
    int max_size;

  public:
    CustomStack(int maxSize) { max_size = maxSize; }

    void push(int x) {
        if (stack.size() < max_size) {
            stack.push_back(x);
        }
    }

    int pop() {
        if (stack.size() > 0) {
            int num = stack[stack.size() - 1];
            stack.pop_back();
            return num;
        } else {
            return -1;
        }
    }

    void increment(int k, int val) {
        int n = min(k, (int)stack.size());
        for (int i = 0; i < n; i++) {
            stack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
