1# Write your MySQL query statement below
2SELECT r.contest_id, ROUND( COUNT(r.contest_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2)
3AS percentage FROM Register AS r
4GROUP BY r.contest_id
5ORDER BY percentage DESC, contest_id ASC; 