1# Write your MySQL query statement below
2SELECT visited_on, 
3(
4    SELECT SUM(amount) FROM Customer WHERE
5    visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)
6    AND c.visited_on
7) AS amount,
8ROUND((
9    SELECT SUM(amount) / 7 FROM Customer
10    WHERE visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)
11    AND c.visited_on
12), 2) AS average_amount
13FROM Customer AS c
14WHERE visited_on >= (
15    SELECT DATE_ADD(MIN(visited_on), INTERVAL 6 DAY)
16    FROM Customer
17)
18GROUP BY visited_on
19ORDER BY visited_on;