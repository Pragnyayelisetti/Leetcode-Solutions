# Write your MySQL query statement below
with cte as(
    select e1.id as id, e1.name as name from
    employee e
    join
    employee e1
    on e.managerId=e1.id
),
cte1 as (
    select name  , count(*) as cnt from cte 
    group by name,id
)
select name from cte1 where cnt>=5;