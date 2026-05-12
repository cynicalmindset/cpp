// Last updated: 13/05/2026, 01:35:56
class Solution {
public:
  bool isposab(vector<vector<int>> &tasks, int mid) {
    for (auto &task : tasks) {
      int actual = task[0];
      int min = task[1];

      if (min > mid) {
        return false;
      }
      mid -= actual;
    }
    return true;
  }
  int minimumEffort(vector<vector<int>> &tasks) {
    int n = tasks.size();
    int l = 0;
    int r = 1e9;
    int res = INT_MAX;
    auto lambda = [](auto &task1, auto &task2) {
      int d1 = task1[1] - task1[0];
      int d2 = task2[1] - task2[0];

      return d1 > d2;
    };
    sort(begin(tasks), end(tasks), lambda);
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (isposab(tasks, mid)) {
        res = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return res;
  }
};