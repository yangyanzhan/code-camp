# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/j-bZSQrQwQQ

unit module GradeSchool;

sub roster (:$students is copy, :$grade) is export {
    $students.sort({ $^a[1] == $^b[1] ?? $^a[0] cmp $^b[0] !! $^a[1] cmp $^b[1] }).grep({ $grade.defined ?? $^a[1] == $grade !! True }).map({ $^a[0] });
}
