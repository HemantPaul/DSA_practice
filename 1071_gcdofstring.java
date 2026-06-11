class Solution {

    public String gcdOfStrings(String str1, String str2) {

        // Step 1: check if concatenation works both ways
        if (!(str1 + str2).equals(str2 + str1)) {
            return "";
        }

        // Step 2: find gcd of lengths
        int len = gcd(str1.length(), str2.length());

        // Step 3: return prefix of that length
        return str1.substring(0, len);
    }

    // Euclidean algorithm for gcd
    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}















/* 🧠 Key insight (very important)

A string x can divide both strings only if:

1. They are “compatible” when concatenated

If:

str1 + str2 == str2 + str1

✔️ Then they share the same repeating pattern
❌ If not, answer is "" (empty string)

2. Length of answer = GCD of lengths

If they are compatible, the answer length is:

gcd(len(str1), len(str2))

Then we just take that prefix from str1.

✨ Why GCD?

Because the largest repeating pattern must evenly divide both lengths.


🪜 Step-by-step algorithm
Check if str1 + str2 == str2 + str1
If not → return ""
Compute:
g = gcd(strlen(str1), strlen(str2))
Return:
first g characters of str1
*/