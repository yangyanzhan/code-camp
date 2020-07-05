# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/GfxBTu3TJWc
# Blog URL for this problem: https://yanzhan.site/exercism/raku/atbash-cipher.html .

unit module AtbashCipher;

sub encode($phrase is copy) is export {
    $phrase ~~ s:i:g/<-[a..z\d]>//;
    my $encoded = $phrase.lc.trans(("a"..."z") => ("z"..."a"));
    gather {
        loop {
            if $encoded.chars <= 5 {
                take $encoded;
                last;
            }
            take $encoded.substr(0, 5);
            $encoded .= substr(5);
        }
    }
}

sub decode($phrase) is export {
    $phrase.lc.trans(("a"..."z", " ") => ("z"..."a", ""));
}
