1# Write your MySQL query statement below
2SELECT product_id,new_price AS price FROM Products
3WHERE (product_id, change_date) IN 
4(SELECT product_id, MAX(change_date) FROM Products
5WHERE change_date <= '2019-08-16' 
6GROUP BY product_id)
7UNION
8SELECT product_id, 10 AS price FROM Products
9WHERE product_id NOT IN
10(SELECT product_id FROM Products
11WHERE change_date <= '2019-08-16');