class Solution {
public:
    void generate (vector <int>& arr, int n, vector <int>& freq, vector <vector<int>>& grid, vector <int>& tmp) {
        if (tmp.size() == n) {
            grid.push_back(tmp);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] == 0) {
                freq[i] = 1;
                tmp.push_back(arr[i]);
                generate(arr,n,freq,grid,tmp);
                freq[i] = 0;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> grid;
        vector <int> freq(nums.size(),0), tmp;
        generate(nums, nums.size(),freq,grid,tmp);

        return grid;
    }
};
