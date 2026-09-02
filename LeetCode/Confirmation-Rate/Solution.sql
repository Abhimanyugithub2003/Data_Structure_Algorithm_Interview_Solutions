1# Write your MySQL query statement below
2SELECT s.user_id, ROUND(AVG(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END), 2) AS confirmation_rate FROM Signups AS s 
3LEFT JOIN Confirmations AS c
4ON s.user_id = c.user_id
5GROUP BY s.user_id;
6