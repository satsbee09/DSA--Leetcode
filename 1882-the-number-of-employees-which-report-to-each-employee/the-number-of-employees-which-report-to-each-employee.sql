# Write your MySQL query statement below
select r.employee_id,r.name,count(r.employee_id) as 
reports_count ,Round(avg(e.age))  as average_age   from Employees r
 join (select * from Employees )as e
on r.employee_id=e.reports_to
group by r.employee_id 
order by r.employee_id;
