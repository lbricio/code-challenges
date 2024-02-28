class Solution {
public:
    int maxArea(vector<int>& height) {
        int heights_num = height.size();
        int l=0, r=heights_num-1;
        int max_result=0;

        while (l < r) {
            int actual_height = min(height[l], height[r]);
            int container = actual_height * (r-l);
            
            if (container > max_result)
                max_result = container;

            if (height[l] < height[r]) {
                do l++;
                while(l < r && height[l] < actual_height);
            }
            else {
                do r--;
                while(l < r && height[r] < actual_height);
            }
        }
        return max_result;
    }
};
