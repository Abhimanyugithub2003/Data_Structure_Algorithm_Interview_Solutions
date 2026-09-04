1# Write your MySQL query statement below
2SELECT ROUND(COUNT(*) / (SELECT COUNT(DISTINCT player_id) FROM Activity), 2) AS fraction 
3FROM Activity a
4WHERE (a.player_id, a.event_date) IN
5(SELECT player_id, DATE_ADD(MIN(event_date), INTERVAL 1 DAY) FROM Activity GROUP BY player_id);