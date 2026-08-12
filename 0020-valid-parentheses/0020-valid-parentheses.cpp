class Solution {
public:
    bool isValid(string s) {
        // Step 1: Early exit optimization
        if (s.length() % 2 != 0) {
            return false;
        }

        // Step 2: Initialize stack for tracking opens
        stack<char> bracketStack;

        // Step 3: Single pass through the string
        for (char c : s) {
            // Check for opening brackets
            if (c == '(' || c == '[' || c == '{') {
                bracketStack.push(c);
            } 
            // Check for closing brackets
            else {
                // Fail if there is no matching opening bracket waiting
                if (bracketStack.empty()) {
                    return false;
                }

                char topElement = bracketStack.top();
                bracketStack.pop();

                // Fail if the types do not match
                if ((c == ')' && topElement != '(') ||
                    (c == ']' && topElement != '[') ||
                    (c == '}' && topElement != '{')) {
                    return false;
                }
            }
        }

        // Step 4: Ensure no unmatched opening brackets remain
        return bracketStack.empty();
    }
};
