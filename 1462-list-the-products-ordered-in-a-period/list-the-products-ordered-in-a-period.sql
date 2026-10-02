# Write your MySQL query statement below
select product_name, SUM(unit) as 
unit
FROM Products 
inner JOIN Orders 
USING(product_id)

WHERE MONTH(order_date) = 2 and YEAR(order_date) = 2020
group by product_name
HAVING unit >= 100











