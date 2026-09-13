1# Write your MySQL query statement below
2SELECT DATE_FORMAT(trans_date, '%Y-%m') as month, country, 
3COUNT(*) AS trans_count, 
4COUNT(CASE WHEN state = 'approved' THEN 1 END) AS approved_count,
5SUM(amount) AS trans_total_amount,
6SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount
7FROM Transactions 
8GROUP BY month, country;