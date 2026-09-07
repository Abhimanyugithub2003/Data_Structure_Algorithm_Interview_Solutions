1# Write your MySQL query statement below
2SELECT id, COUNT(*) AS num
3FROM (
4    SELECT requesteR_id AS id FROM RequestAccepted
5    UNION ALL
6    SELECT accepter_id FROM RequestAccepted
7) AS friend_count
8GROUP BY id
9ORDER BY num DESC
10LIMIT 1;