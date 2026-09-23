# Write your MySQL query statement below

SELECT e.name, b.bonus
FROM Employee e
left JOIN Bonus b
ON e.empId = b.empId 

where b.bonus < 1000 or b.bonus is NULL


