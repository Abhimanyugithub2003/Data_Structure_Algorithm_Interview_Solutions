1# Write your MySQL query statement below
2SELECT CASE 
3WHEN id = (SELECT MAX(id) FROM Seat) AND MOD(id, 2) = 1 THEN id
4WHEN MOD(id, 2) = 1 THEN id + 1
5ELSE id - 1
6END AS id, student
7FROM Seat
8ORDER BY id;