# Write your MySQL query statement below


select person_name
from (select*
 ,sum(weight) over(order by turn ) as runsum  from Queue) as s
 where s.runsum<=1000
 order by s.turn desc 
 limit 1;
