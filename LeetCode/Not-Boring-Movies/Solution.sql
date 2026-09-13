1# Write your MySQL query statement below
2SELECT id, movie, description, rating FROM Cinema
3WHERE id % 2 != 0 AND description != 'boring'
4ORDER BY rating DESC;