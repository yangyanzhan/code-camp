// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-rectangle-in-binary-matrix.html .

int R;
int C;

int maxHist(vector<int> &row) {
    // Create an empty stack. The stack holds indexes of
    // hist[] array/ The bars stored in stack are always
    // in increasing order of their heights.
    stack<int> result;

    int top_val;     // Top of stack

    int max_area = 0; // Initialize max area in current
                      // row (or histogram)

    int area = 0;    // Initialize area with current top

    // Run through all bars of given histogram (or row)
    int i = 0;
    while (i < C)
    {
        // If this bar is higher than the bar on top stack,
        // push it to stack
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);

        else
        {
            // If this bar is lower than top of stack, then
            // calculate area of rectangle with stack top as
            // the smallest (or minimum height) bar. 'i' is
            // 'right index' for the top and element before
            // top in stack is 'left index'
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;

            if (!result.empty())
                area = top_val * (i - result.top() - 1 );
            max_area = max(area, max_area);
        }
    }

    // Now pop the remaining bars from stack and calculate area
    // with every popped bar as the smallest bar
    while (!result.empty())
    {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1 );

        max_area = max(area, max_area);
    }
    return max_area;
}

// Returns area of the largest rectangle with all 1s in A[][]
int Solution::maximalRectangle(vector<vector<int> > &A) {
    R = A.size();
    C = A[0].size();
    // Calculate area for first row and initialize it as
    // result
    int result = maxHist(A[0]);

    // iterate over row to find maximum rectangular area
    // considering each row as histogram
    for (int i = 1; i < R; i++)
    {

        for (int j = 0; j < C; j++)

            // if A[i][j] is 1 then add A[i -1][j]
            if (A[i][j]) A[i][j] += A[i - 1][j];


        // Update result if area with current row (as last row)
        // of rectangle) is more
        result = max(result, maxHist(A[i]));
    }

    return result;
}
