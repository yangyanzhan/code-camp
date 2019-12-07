// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-smooth.html .

bool isSmooth(std::vector<int> arr) {
    int n = arr.size();
    int middle = 0;
    if(n % 2 == 0){
        middle = arr[n / 2 - 1] + arr[n / 2];
    }else{
        middle = arr[n / 2];
    }
    return arr[0] == middle && middle == arr[n - 1];
}

