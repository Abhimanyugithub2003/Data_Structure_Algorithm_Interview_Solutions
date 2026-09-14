1# Write your MySQL query statement below
2SELECT x, y, z, 
3CASE 
4    WHEN (x + y) <= z THEN 'No'
5    WHEN (x + z) <= y THEN 'No'
6    WHEN (y + z) <= x THEN 'No'
7    ELSE 'Yes'
8END AS triangle
9FROM Triangle;