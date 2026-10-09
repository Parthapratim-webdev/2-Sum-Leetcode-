#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            int first = arr[i];
            int sec = tar - first;

            if (m.find(sec) != m.end()) {
                ans.push_back(i);
                ans.push_back(m[sec]);
                return ans;
            }

            m[first] = i;
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> arr = {2, 7, 11, 15};
    int tar = 9;

    vector<int> ans = s.twoSum(arr, tar);

    if (!ans.empty()) {
        cout << "Indices: ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}