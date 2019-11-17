# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/j-bZSQrQwQQ
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/grade-school.html .

unit module GradeSchool;

sub roster (:$students is copy, :$grade) is export {
    $students.sort({ $^a[1] == $^b[1] ?? $^a[0] cmp $^b[0] !! $^a[1] cmp $^b[1] }).grep({ $grade.defined ?? $^a[1] == $grade !! True }).map({ $^a[0] });
}
