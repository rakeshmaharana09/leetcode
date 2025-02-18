class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i < j) {
            int vol = min(height[i], height[j]) * (j - i);
            maxVol = max(maxVol, vol);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxVol;
    }
};
