1# Write your MySQL query statement below
2SELECT v.customer_id, COUNT(*) AS count_no_trans FROM visits AS v
3LEFT JOIN Transactions AS t
4ON v.visit_id = t.visit_id
5WHERE t.transaction_id IS NULL 
6GROUP BY v.customer_id;