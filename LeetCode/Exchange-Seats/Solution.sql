1# Write your MySQL query statement below
2SELECT 
3    CASE 
4        WHEN id % 2 = 1 AND id < (SELECT MAX(id) FROM Seat)
5            THEN id + 1
6        WHEN id % 2 = 0 
7            THEN id - 1
8        ELSE id
9    END AS id, student
10    FROM Seat
11ORDER BY id;