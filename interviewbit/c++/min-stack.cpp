// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-stack.html .

stack<int> nums, mins;

MinStack::MinStack() {
    while (!nums.empty()) {
        nums.pop();
    }
    while (!mins.empty()) {
        mins.pop();
    }
}

void MinStack::push(int x) {
    nums.push(x);
    if (mins.empty()) {
        mins.push(x);
    } else {
        mins.push(min(mins.top(), x));
    }
}

void MinStack::pop() {
    if (!nums.empty()) {
        nums.pop();
        mins.pop();
    }
}

int MinStack::top() {
    if (nums.empty()) {
        return -1;
    }
    return nums.top();
}

int MinStack::getMin() {
    if (mins.empty()) {
        return -1;
    }
    return mins.top();
}
