1# Write your MySQL query statement below
2SELECT r.contest_id, 
3IFNULL(ROUND((COUNT(r.contest_id) * 100.0) / (SELECT COUNT(*) FROM users), 2), 0) AS percentage
4FROM Users AS u
5LEFT JOIN Register AS r
6ON u.user_id = r.user_id
7WHERE r.contest_id IS NOT NULL
8GROUP BY r.contest_id
9ORDER BY percentage DESC, r.contest_id ASC;