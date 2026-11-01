CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
    select max(salary) as getNthHighestSalary
    from(
        select salary,
        dense_rank() over(order by salary DESC) as rnk
        from employee
    )t
    where t.rnk = N
  );
END