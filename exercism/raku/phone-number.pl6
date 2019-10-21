# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/HM7jugMr2e0

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
