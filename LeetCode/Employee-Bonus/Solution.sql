1# Write your MySQL query statement below
2SELECT e.name, b.bonus FROM Employee AS e
3LEFT JOIN Bonus AS b
4ON e.empId = b.empId
5WHERE b.bonus < 1000
6OR b.bonus IS NULL;