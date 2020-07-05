# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/HM7jugMr2e0
# Blog URL for this problem: https://yanzhan.site/exercism/raku/phone-number.html .

unit module Phone;

sub clean-number ($number is copy) is export {
    $number .= trim;
    $number ~~ s/^\+?1//;
    $number .= trim;
    return Nil if $number !~~ /^\(<[2..9]>\d**2\)[\-|\.|\s+]?<[2..9]>\d**2[\-|\.|\s+]?\d**4$/ &&
        $number !~~ /^<[2..9]>\d**2[\-|\.|\s+]?<[2..9]>\d**2[\-|\.|\s+]?\d**4$/;
    $number ~~ s:g/\D//;
    return $number;
}
