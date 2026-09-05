1# Write your MySQL query statement below
2SELECT MAX(num) AS num 
3FROM MyNumbers 
4WHERE num IN 
5(SELECT num FROM MyNumbers GROUP BY num HAVING COUNT(*) = 1);