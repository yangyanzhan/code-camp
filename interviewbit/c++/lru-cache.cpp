// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/lru-cache.html .

#include <list>

int mCapacity;
list<int> used;
map<int, int> cache;
map<int, list<int>::iterator> pos;

LRUCache::LRUCache(int capacity) {
    mCapacity = capacity;
    used = list<int>();
    cache = map<int, int>();
    pos = map<int, list<int>::iterator>();
}

void use(int key) {
    if (pos.find(key) != pos.end()) {
        list<int>::iterator it = pos[key];
        used.erase(it);
        used.push_front(key);
        pos[key] = used.begin();
    } else {
        if (used.size() < mCapacity) {
            used.push_front(key);
            pos[key] = used.begin();
        } else {
            int removeKey = used.back();
            used.pop_back();
            pos.erase(removeKey);
            cache.erase(removeKey);
            used.push_front(key);
            pos[key] = used.begin();
        }
    }
}

int LRUCache::get(int key) {
    if (cache.find(key) != cache.end()) {
        use(key);
        return cache[key];
    }
    return -1;
}

void LRUCache::set(int key, int value) {
    use(key);
    cache[key] = value;
}
