# Write your MySQL query statement below
select Max(t. salary)  as SecondHighestSalary from (select salary,
Dense_rank() over( order by salary Desc)  as Rnk
from Employee  ) as t
where t.Rnk=2;
