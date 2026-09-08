1# Write your MySQL query statement below
2DELETE p1 
3FROM Person AS p1
4JOIN Person AS p2
5WHERE p1.email = p2.email AND p1.id > p2.id;