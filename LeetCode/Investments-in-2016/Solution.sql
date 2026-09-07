1# Write your MySQL query statement below
2SELECT ROUND(SUM(tiv_2016), 2) AS tiv_2016
3FROM Insurance
4WHERE tiv_2015 IN(
5    SELECT tiv_2015
6    FROM Insurance
7    GROUP BY tiv_2015
8    HAVING COUNT(*) > 1
9) AND (lat, lon) IN(
10    SELECT lat, lon
11    FROM Insurance
12    GROUP BY lat, lon
13    HAVING COUNT(*) = 1
14)