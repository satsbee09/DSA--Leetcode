# Write your MySQL query statement below

select  w.id
from 
Weather as w 
join Weather as t
where datediff(w.recordDate,t.recordDate)=1&& w.temperature>t.temperature;
