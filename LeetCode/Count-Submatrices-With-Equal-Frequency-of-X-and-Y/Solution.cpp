class Solution:
    def numberOfSubmatrices(self, grid: List[List[str]]) -> int:
        m, n = len(grid), len(grid[0])

        # Convert grid
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 'X':
                    grid[i][j] = 1
                elif grid[i][j] == 'Y':
                    grid[i][j] = -1
                else:
                    grid[i][j] = 0

        ans = 0
        ps_col = [0] * n
        ps_col_x = [0] * n  # track X counts

        for i in range(m):
            row_sum = 0
            row_x = 0

            for j in range(n):
                ps_col[j] += grid[i][j]

                if grid[i][j] == 1:
                    ps_col_x[j] += 1

                row_sum += ps_col[j]
                row_x += ps_col_x[j]

                # condition: equal X and Y AND at least one X
                if row_sum == 0 and row_x > 0:
                    ans += 1

        return ans