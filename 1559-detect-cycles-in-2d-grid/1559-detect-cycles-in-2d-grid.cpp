class Solution {
public:
    int m, n;
    vector<vector<int>> visited;

    bool dfs(int r, int c, int pr, int pc, vector<vector<char>>& grid) {
        visited[r][c] = 1;

        vector<pair<int,int>> dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}};

        for (auto &d : dirs) {
            int nr = r + d.first;
            int nc = c + d.second;

            if (nr < 0 || nc < 0 || nr >= m || nc >= n) continue;

            if (grid[nr][nc] != grid[r][c]) continue;

            if (!visited[nr][nc]) {
                if (dfs(nr, nc, r, c, grid)) return true;
            }
            else if (!(nr == pr && nc == pc)) {
                return true;
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        visited.assign(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    if (dfs(i, j, -1, -1, grid)) return true;
                }
            }
        }

        return false;
    }
};