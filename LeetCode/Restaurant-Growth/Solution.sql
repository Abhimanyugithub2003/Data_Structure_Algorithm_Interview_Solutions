1# Write your MySQL query statement below
2SELECT visited_on,
3(SELECT SUM(amount) FROM Customer 
4WHERE visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)
5AND c.visited_on
6) AS amount,
7ROUND((SELECT SUM(amount)/7 FROM Customer
8WHERE visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY)
9AND c.visited_on
10), 2) AS average_amount
11FROM Customer c
12WHERE visited_on >= (SELECT DATE_ADD(MIN(visited_on), INTERVAL 6 DAY) FROM Customer)
13GROUP BY visited_on
14ORDER BY visited_on;