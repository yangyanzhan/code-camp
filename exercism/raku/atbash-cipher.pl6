# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/GfxBTu3TJWc

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
