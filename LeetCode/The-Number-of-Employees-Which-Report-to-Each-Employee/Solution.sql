1# Write your MySQL query statement below
2SELECT e1.employee_id AS employee_id, e1.name, COUNT(e2.employee_id) AS reports_count, ROUND(AVG(e2.age), 0) AS average_age FROM Employees AS e1
3JOIN
4Employees AS e2
5ON e1.employee_id = e2.reports_to
6GROUP BY e1.employee_id, e1.name
7ORDER BY e1.employee_id;