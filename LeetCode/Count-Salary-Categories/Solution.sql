1# Write your MySQL query statement below
2SELECT "Low Salary" AS category, COUNT(income) AS accounts_count FROM Accounts WHERE income < 20000
3UNION
4SELECT "Average Salary" AS category, COUNT(income) AS accounts_count FROM Accounts WHERE income >= 20000 AND income <= 50000
5UNION
6SELECT "High Salary" AS category, COUNT(income) AS accounts_count FROM Accounts WHERE income > 50000;