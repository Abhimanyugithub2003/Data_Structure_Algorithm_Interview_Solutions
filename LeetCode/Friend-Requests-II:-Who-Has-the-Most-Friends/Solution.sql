1# Write your MySQL query statement below
2SELECT id, COUNT(*) AS num FROM 
3(
4SELECT requester_id AS id FROM RequestAccepted
5UNION ALL
6SELECT accepter_id AS id FROM RequestAccepted
7) AS friend_count 
8GROUP BY id
9ORDER BY num DESC
10LIMIT 1;