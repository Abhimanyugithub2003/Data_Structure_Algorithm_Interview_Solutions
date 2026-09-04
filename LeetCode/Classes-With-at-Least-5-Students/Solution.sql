1# Write your MySQL query statement below
2SELECT class FROM Courses GROUP BY class HAVING COUNT(class) >= 5;