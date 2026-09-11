1# Write your MySQL query statement below
2SELECT w1.id FROM Weather AS w1
3JOIN Weather AS w2
4ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
5WHERE w1.temperature > w2.temperature;