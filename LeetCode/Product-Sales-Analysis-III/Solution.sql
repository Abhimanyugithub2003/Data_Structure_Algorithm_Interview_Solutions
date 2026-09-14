1# Write your MySQL query statement below
2SELECT product_id, year AS first_year, quantity, price
3FROM Sales
4WHERE (product_id, year) IN 
5(SELECT product_id, MIN(year) FROM Sales 
6GROUP BY product_id);