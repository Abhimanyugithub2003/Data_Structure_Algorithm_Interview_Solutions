1# Write your MySQL query statement below
2SELECT employee_id, department_id FROM Employee
3 WHERE primary_flag = 'Y'
4 OR employee_id IN 
5 (SELECT employee_id FROM Employee 
6 GROUP BY employee_id
7 HAVING COUNT(*) = 1
8 );