# Write your MySQL query statement below

SELECT p.product_id,p.new_price as price
FROM Products p
join
(SELECT
        product_id,
        MAX(change_date) AS latest_date
    FROM Products
    WHERE change_date <= '2019-08-16'
    GROUP BY product_id) as c
    on p.product_id=c.product_id
    and p. change_date=c.latest_date

    union
    SELECT
    product_id,
    10 AS price
FROM Products
GROUP BY product_id
HAVING MIN(change_date) > '2019-08-16';