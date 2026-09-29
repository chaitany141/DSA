# Write your MySQL query statement below


select person_name
from (
    select person_name,
        SUM(weight) OVER (ORDER BY turn) AS total_weight 
    from Queue
    order by turn
) AS q

WHERE total_weight <= 1000
ORDER BY total_weight desc
LIMIT 1






