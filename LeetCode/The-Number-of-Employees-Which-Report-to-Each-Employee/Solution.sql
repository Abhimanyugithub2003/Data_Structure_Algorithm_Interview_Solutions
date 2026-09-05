1# Write your MySQL query statement below
2SELECT e1.employee_id, e1.name, COUNT(e2.employee_id) AS reports_count, ROUND(AVG(e2.age)) AS average_age FROM Employees AS e1
3JOIN Employees AS e2
4ON e1.employee_id = e2.reports_to
5GROUP BY e1.employee_id, e1.name 
6ORDER BY e1.employee_id;