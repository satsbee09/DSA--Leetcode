# Write your MySQL query statement below
select 
e.employee_id
from Employees as e
where e.manager_id not in (
    Select employee_id from Employees  
)
and e.salary<30000
order by employee_id;
