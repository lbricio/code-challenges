class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			unordered_set<int> already_seen;
	
			for (auto const& e : nums) {
				if (already_seen.find(e) != already_seen.end()) {
					return true;
				}
				already_seen.insert(e);
			}
			return false;
		}
	};
