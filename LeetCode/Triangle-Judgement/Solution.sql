1# Write your MySQL query statement below
2SELECT x, y, z, 
3CASE WHEN x + y > z
4AND x + z > y
5AND y + z > x
6THEN 'Yes'
7ELSE 'No'
8END
9AS triangle FROM Triangle;