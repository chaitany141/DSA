# Write your MySQL query statement below

SELECT query_name, 
    ROUND(
        COALESCE(
            AVG(rating / position)
        ), 2 
    ) AS quality,

    ROUND(
        COALESCE(
            100 * AVG(rating < 3)
        ), 2 
    ) AS poor_query_percentage
       
FROM Queries

GROUP BY query_name







