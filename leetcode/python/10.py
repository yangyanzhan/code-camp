#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"

class Solution:
    def isMatch(self, target: str, pattern: str) -> bool:
        # token: [ch, count, could_rewind]
        if pattern == "":
            return target == ""
        if target == "":
            if len(pattern) % 2 != 0:
                return False
            for i in range(len(pattern)):
                if i % 2 == 0:
                    if pattern[i] == "*":
                        return False
                else:
                    if pattern[i] != "*":
                        return False
            return True
        tokens = []
        idx = 0
        while idx < len(pattern):
            if pattern[idx] == "*":
                return False
            token = [pattern[idx], 0, False]
            idx += 1
            if idx < len(pattern):
                if pattern[idx] == "*":
                    token[2] = True
                    idx += 1
            tokens.append(token)
        idx = 0
        visited = []
        while idx < len(target) or len(visited) < len(tokens):
            ch = None
            if idx < len(target):
                ch = target[idx]
            should_rewind = True
            if len(visited) < len(tokens):
                token = tokens[len(visited)][:]
                if ch is None:
                    if token[2]:
                        should_rewind = False
                else:
                    if token[2]:
                        if token[0] == ".":
                            should_rewind = False
                            token[1] = len(target) - idx
                            idx = len(target)
                        else:
                            should_rewind = False
                            match_count = 0
                            for i in range(idx, len(target)):
                                if target[i] != token[0]:
                                    break
                                match_count += 1
                            token[1] = match_count
                            idx += match_count
                    else:
                        if token[0] == "." or token[0] == ch:
                            should_rewind = False
                            token[1] = 1
                            idx += 1
                if not should_rewind:
                    visited.append(token)
                    continue
            ch_consumed = 0
            success = False
            for i in range(len(visited)):
                visited_idx = len(visited) - 1 - i
                token = visited[visited_idx]
                if token[2] and token[1] > 0:
                    success = True
                    token[1] -= 1
                    ch_consumed += 1
                    idx -= ch_consumed
                    visited[visited_idx + 1:] = []
                    break
                else:
                    ch_consumed += token[1]
            if not success:
                return False
        return True
