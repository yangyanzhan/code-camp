# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/GG3i56fcoVk .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Blog URL for this problem: https://yanzhan.site/rosetta/abundant-odd-numbers.html .
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

sub odd-abundant (\x) {
    my @l = x.is-prime ?? 1 !! flat
    1, (3 .. x.sqrt.floor).map: -> \d {
         next unless d +& 1;
         my \y = x div d;
         next if y * d !== x;
         d !== y ?? (d, y) !! d
    };
    @l.sum > x ?? @l.sort !! Empty;
}

sub odd-abundants (Int :$start-at is copy) {
    $start-at = ( $start-at + 2 ) div 3;
    $start-at += $start-at %% 2;
    $start-at *= 3;
    ($start-at, *+6 ... *).hyper.map: {
        next unless my $oa = .&odd-abundant;
        sprintf "%6d: divisor sum: {$oa.join: ' + '} = {$oa.sum}", $_
    }
}

put 'First 25 abundant odd numbers:';
.put for odd-abundants( :start-at(1) )[^25];

put "\nOne thousandth abundant odd number:\n" ~ odd-abundants( :start-at(1) )[999] ~

"\n\nFirst abundant odd number above one billion:\n" ~ odd-abundants( :start-at(1_000_000_000) ).head;
