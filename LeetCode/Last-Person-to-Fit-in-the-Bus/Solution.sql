1# Write your MySQL query statement below
2SELECT q1.person_name
3FROM Queue AS q1
4JOIN Queue AS q2
5ON q1.turn >= q2.turn
6GROUP BY q1.turn
7HAVING SUM(q2.weight) <= 1000
8ORDER BY SUM(q2.weight) DESC
9LIMIT 1;