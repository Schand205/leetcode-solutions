class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(), len = n+m;
        vector<double> arr;
        arr.reserve(len);
        for(auto c : nums1) arr.push_back(c);
        for(auto c : nums2) arr.push_back(c);
        sort(arr.begin(), arr.end());
        double ret;
        if(len%2 == 1) ret = arr[(len/2)];
        else {
            ret = (arr[len/2] + arr[(len/2)-1]) / 2;
        }
        return ret;
    }
};
