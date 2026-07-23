# Write your MySQL query statement below
select
Distinct c.class
from 
Courses c
join (
    select class, count(student) as count
    from Courses
    group by class
) as s
on s.class=c.class
where s.count>=5;
