# Write your MySQL query statement below
select s.name
from SalesPerson s left join (
    select o.com_id,o.sales_id
    from orders o left join company c
    on o.com_id = c.com_id
    where c.name = 'RED'
)x
on s.sales_id = x.sales_id
where x.com_id is null;
