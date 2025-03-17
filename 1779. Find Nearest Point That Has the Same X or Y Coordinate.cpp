class Solution {
    public:
        int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
              int minDistance = INT_MAX;
              int resultIndex = -1;
              for (int i = 0; i < points.size(); i++) {
                int a = points[i][0];
                int b = points[i][1];
                  if (a == x || b == y) {
                    int distance = abs(a - x) + abs(b - y);
                if (distance < minDistance) {
                    minDistance = distance;
                    resultIndex = i;
                }
              }
              }
              return resultIndex;
        }
    };