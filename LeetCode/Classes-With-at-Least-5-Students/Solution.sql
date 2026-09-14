1# Write your MySQL query statement below
2SELECT class FROM Courses GROUP BY class
3HAVING COUNT(DISTINCT student) >= 5;