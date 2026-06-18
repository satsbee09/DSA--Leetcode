# Write your MySQL query statement below
select s.name 
from Salesperson as s
 left join Orders as o 
 on o.sales_id=s.sales_id 
left join Company as c
 on o.com_id=c.com_id
 
  group by s.name,s.sales_id
  having count( case when c.name='RED' then 1 end )=0;
