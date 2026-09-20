# Write your MySQL query statement below

SELECT r.contest_id, 
ROUND(
    COALESCE(
        100 * COUNT(r.user_id) / (SELECT COUNT(*) FROM Users)
    ), 2 
) AS percentage

FROM Users u
RIGHT JOIN Register r
ON u.user_id = r.user_id

GROUP BY r.contest_id

ORDER BY percentage DESC, contest_id ASC
