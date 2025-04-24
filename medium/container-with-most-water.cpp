class Solution {
public:
    int maxArea(vector<int>& height) {
        size_t left = 0, right = height.size()-1;
        int usedHeight, Volume, maxVolume = 0;
        while(left < right) {
            usedHeight = min(height[left], height[right]);
            Volume = usedHeight * (right-left);
            if(Volume > maxVolume) maxVolume = Volume;
            if(height[left] > height[right]) right--;
            else left++;
        }
        return maxVolume;
    }
};
