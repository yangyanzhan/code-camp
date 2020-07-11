// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/largest-rectangle-in-histogram.html .

int Solution::largestRectangleArea(vector<int> &A) {
    vector<int> hist = A;
    int n = A.size();
    stack<int> s;

    int max_area = 0;  // Initalize max area
    int tp;            // To store top of stack
    int area_with_top; // To store area with top bar as the smallest bar

    // Run through all bars of given histogram
    int i = 0;
    while (i < n) {
        // If this bar is higher than the bar on top stack, push it to stack
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);

        // If this bar is lower than top of stack, then calculate area of rectangle
        // with stack top as the smallest (or minimum height) bar. 'i' is
        // 'right index' for the top and element before top in stack is 'left index'
        else {
            tp = s.top(); // store the top index
            s.pop();      // pop the top

            // Calculate the area with hist[tp] stack as smallest bar
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    // Now pop the remaining bars from stack and calculate area with every
    // popped bar as the smallest bar
    while (s.empty() == false) {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}
