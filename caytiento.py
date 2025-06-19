class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True

    def search(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.is_end_of_word

    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ''
        for i in range(len(strs[0])):
            for j in range(1, len(strs)):
                if i == len(strs[j]) or strs[j][i] != strs[0][i]:
                    return strs[0][:i]
        return strs[0]


trie = Trie()
words = ["the", "a", "an", "there", "answer", "any", "by", "bye", "their"]
for word in words:
    trie.insert(word)

searchword = input("Nhập từ cần tìm: ")
print(trie.search(searchword))

print(trie.longestCommonPrefix(words))