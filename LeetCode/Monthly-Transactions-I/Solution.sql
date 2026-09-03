1# Write your MySQL query statement below
2SELECT DATE_FORMAT(trans_date, '%Y-%m') AS month,
3country,
4COUNT(*) AS trans_count,
5SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END) AS approved_count,
6SUM(amount) AS trans_total_amount,
7SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount 
8FROM Transactions 
9GROUP BY month, country; 
10