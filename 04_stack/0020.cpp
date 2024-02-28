class Solution {
public:
    bool isValid(string s) {
        vector<int> open_stack = {};
        map<char, char> openers = { {'}','{'}, {']','['}, {')','('} };

        for (const auto &e : s) {
            if (e == '(' || e == '{' || e == '[' ) {
                open_stack.push_back(e);
            }
            else {
                if (open_stack.empty() || open_stack.back() != openers[e])
                    return false; 
                open_stack.pop_back();
            }
        }
        if (!open_stack.empty())
            return false;
        return true;
    }
};
