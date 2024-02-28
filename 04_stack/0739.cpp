class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> resp (t.size(), 0);
        stack<int> stk;

        for (int i = 0; i < t.size(); i++) {
            while (!stk.empty() && t[i] > t[stk.top()]) {
                int prevIndex = stk.top();
                stk.pop();
                resp[prevIndex] = i - prevIndex;
            }
            stk.push(i);
        }
        return resp;
    }
};
