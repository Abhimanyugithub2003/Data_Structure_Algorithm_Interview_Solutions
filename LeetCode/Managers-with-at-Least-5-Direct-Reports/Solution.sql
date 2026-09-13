1# Write your MySQL query statement below
2SELECT e2.name FROM Employee AS e1 
3JOIN Employee AS e2
4ON e1.managerId = e2.id
5GROUP BY e2.id, e2.name
6HAVING COUNT(e1.id) >= 5;