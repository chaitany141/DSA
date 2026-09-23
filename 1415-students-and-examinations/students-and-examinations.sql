# Write your MySQL query statement below

select  s.student_id, s.student_name, sub.subject_name, COUNT(e.subject_name) AS attended_exams
from Students s
CROSS JOIN Subjects sub

LEFT JoIn Examinations e
ON e.subject_name = sub.subject_name and  s.student_id = e.student_id

GROUP BY s.student_id, s.student_name, sub.subject_name

ORDER BY student_id , subject_name