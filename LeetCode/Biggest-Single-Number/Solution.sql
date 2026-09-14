1# Write your MySQL query statement below
2SELECT MAX(num) AS num FROM MyNumbers
3WHERE num IN
4(SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(num) = 1);