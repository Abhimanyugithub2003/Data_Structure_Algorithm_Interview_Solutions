1# Write your MySQL query statement below
2SELECT s.user_id, 
3ROUND(AVG(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END) , 2) AS confirmation_rate
4FROM Signups AS s
5LEFT JOIN Confirmations AS c
6ON s.user_id = c.user_id
7GROUP BY s.user_id;