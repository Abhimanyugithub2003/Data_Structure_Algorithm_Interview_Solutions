1# Write your MySQL query statement below
2SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.subject_name) AS attended_exams
3FROM Students AS s
4CROSS JOIN Subjects AS sub
5LEFT JOIN Examinations AS e
6ON s.student_id = e.student_id
7AND sub.subject_name = e.subject_name
8GROUP BY s.student_id, s.student_name, sub.subject_name
9ORDER BY s.student_id, sub.subject_name;