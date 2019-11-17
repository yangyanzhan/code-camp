# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/GfxBTu3TJWc
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/space-age.html .

unit module SpaceAge;

role Planet {
  method age-on($seconds) {
      ($seconds / $.orbital-period).round(0.01);
  }
}

class Earth does Planet is export {
  my $.orbital-period = 31557600;
}

class Mercury does Planet is export {
  my $.orbital-period = 31557600 * 0.2408467;
}

class Venus does Planet is export {
  my $.orbital-period = 31557600 * 0.61519726;
}

class Mars does Planet is export {
  my $.orbital-period = 31557600 * 1.8808158;
}

class Jupiter does Planet is export {
  my $.orbital-period = 31557600 * 11.862615;
}

class Saturn does Planet is export {
  my $.orbital-period = 31557600 * 29.447498;
}

class Uranus does Planet is export {
  my $.orbital-period = 31557600 * 84.016846;
}

class Neptune does Planet is export {
  my $.orbital-period = 31557600 * 164.79132;
}

