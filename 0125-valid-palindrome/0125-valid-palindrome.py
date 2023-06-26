class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_str = ''.join(char for char in s if char.isalnum())
        new_str = new_str.lower()
        # print(new_str)
        if new_str == new_str[::-1]:
            return True
        return False