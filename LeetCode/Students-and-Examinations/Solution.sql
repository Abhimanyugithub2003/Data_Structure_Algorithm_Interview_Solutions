1# Write your MySQL query statement below
2SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.subject_name) AS attended_exams
3FROM Students AS s
4CROSS JOIN
5Subjects AS sub
6LEFT JOIN 
7Examinations AS e
8ON s.student_id = e.student_id
9AND sub.subject_name = e.subject_name
10GROUP BY s.student_id, s.student_name, sub.subject_name
11ORDER BY student_id, subject_name;