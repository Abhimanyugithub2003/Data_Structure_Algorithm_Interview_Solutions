1# Write your MySQL query statement below
2SELECT user_id, CONCAT(UPPER(LEFT(name, 1)), LOWER(RIGHT(name, LENGTH(name)-1))) AS name
3FROM Users 
4ORDER BY user_id;