1# Write your MySQL query statement below
2SELECT u.unique_id, e.name FROM Employees AS e
3LEFT JOIN EmployeeUNI AS u
4ON e.id = u.id;