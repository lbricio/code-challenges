class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 1;
        long int right = 0; for (auto & pile : piles) { right += pile; }
        long int mid_k;

        while (k < right) {
            mid_k = (k + (right - k)/2);

            long int total_time = 0;
            for (int &p : piles) {
                    total_time += (p + mid_k - 1) / mid_k;
            }
            if (total_time > h) {
                k = mid_k + 1;
            } else {
                right = mid_k;
            }
        }
        return k;
    }
};

// k until max possible k           // (log n)
// all piles                        // (n)
// each pile until pile-k is <= 0   // (1)
