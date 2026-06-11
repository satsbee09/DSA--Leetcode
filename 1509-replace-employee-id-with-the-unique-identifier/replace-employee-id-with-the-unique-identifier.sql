# Write your MySQL query statement below

select 
 s.unique_id,
 e.name
 from EmployeeUNI  as s
 right join Employees as e
 on e.id=s.id;