# Write your MySQL query statement below
select
max(n.num)as num
from MyNumbers n
join ( select  num,count(num) as count from MyNumbers 
group by num ) as c
on n.num=c.num
where count=1;