# Write your MySQL query statement below
SELECT r.contest_id, 
IFNULL(ROUND((COUNT(r.contest_id) * 100.0) / (SELECT COUNT(*) FROM users), 2), 0) AS percentage
FROM Users AS u
LEFT JOIN Register AS r
ON u.user_id = r.user_id
WHERE r.contest_id IS NOT NULL
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;