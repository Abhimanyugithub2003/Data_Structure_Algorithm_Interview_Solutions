1# Write your MySQL query statement below
2SELECT q1.person_name FROM Queue AS q1
3INNER JOIN Queue AS q2
4ON q1.turn >= q2.turn
5GROUP BY q1.turn
6HAVING SUM(q2.weight) <= 1000
7ORDER BY SUM(q2.weight) DESC
8LIMIT 1;