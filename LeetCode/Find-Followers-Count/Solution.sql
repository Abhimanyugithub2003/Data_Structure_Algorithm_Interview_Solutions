1# Write your MySQL query statement below
2SELECT user_id, COUNT(follower_id) AS followers_count FROM Followers GROUP BY user_id 
3ORDER BY user_id ASC;