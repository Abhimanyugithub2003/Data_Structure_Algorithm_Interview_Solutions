1# Write your MySQL query statement below
2SELECT employee_id, department_id FROM Employee 
3WHERE primary_flag = 'Y'
4UNION 
5SELECT employee_id, department_id FROM Employee
6GROUP BY employee_id
7HAVING COUNT(*) = 1;