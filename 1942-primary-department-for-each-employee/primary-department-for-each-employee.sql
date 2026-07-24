# Write your MySQL query statement below
Select employee_id , department_id
from Employee e
where primary_flag ='Y'
Union 
select employee_id , department_id
from Employee e
group by employee_id
having count(employee_id)=1;