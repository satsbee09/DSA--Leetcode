# Write your MySQL query statement below
select
distinct c.customer_id 
from 
Customer c
join
( select customer_id,count(distinct product_key) as cnt
from Customer
group by customer_id ) n
on c.customer_id=n.customer_id
where n.cnt=(select count(product_key) from Product) ;
