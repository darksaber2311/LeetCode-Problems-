# Write your MySQL query statement below
select max(salary) as secondHighestSalary
from(
    select salary,
    dense_Rank() over(order by salary DESC) as rnk
    from employee
)t
where t.rnk = 2;