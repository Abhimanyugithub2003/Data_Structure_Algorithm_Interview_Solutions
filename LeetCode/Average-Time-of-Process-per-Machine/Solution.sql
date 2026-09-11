1# Write your MySQL query statement below
2SELECT a1.machine_id, ROUND(AVG(a2.timestamp - a1.timestamp), 3) AS processing_time
3FROM Activity AS a1
4JOIN Activity AS a2
5ON a1.machine_id = a2.machine_id
6AND a1.process_id = a2.process_id
7WHERE a1.activity_type = 'start' 
8AND a2.activity_type = 'end'
9GROUP BY a1.machine_id;