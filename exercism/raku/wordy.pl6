# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/aUQqV_jl13Y
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/wordy.html .

unit module Wordy;

grammar Math {
    rule TOP {
        'What is' <expr> '?'
    }
    rule expr {
        | <num> <op> <expr>
        | <num>
    }
    token op {
        | 'plus'
        | 'minus'
        | 'multiplied by'
        | 'divided by'
    }
    token num {
        \-?\d+
    }
}

class Actions {
    method TOP($/) {
        my @tokens = $<expr>.made;
        my $res = @tokens[0];
        for ^(@tokens.elems div 2) -> $i {
            my $num = @tokens[2 * $i + 2];
            given @tokens[2 * $i + 1] {
                when 'plus' {
                    $res += $num;
                }
                when 'minus' {
                    $res -= $num;
                }
                when 'multiplied by' {
                    $res *= $num;
                }
                when 'divided by' {
                    $res /= $num;
                }
            }
        }
        return make $res;
    }
    method expr($/) {
        return make ($<num>, ) if !defined $<expr>;
        return make ($<num>, $<op>, |$<expr>.made);
    }
}

sub answer ($question) is export {
    Math.parse($question, actions => Actions).made or die "error";
}
