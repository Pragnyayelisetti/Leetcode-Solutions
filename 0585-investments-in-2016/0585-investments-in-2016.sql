/* Write your PL/SQL query statement below */
with cte as(
    select lat , lon , count(*) from insurance
    group by lat , lon
    having count(*)=1
),
cte1 as(
    select tiv_2015 , count(*) as cnt from insurance
    group by tiv_2015
    having count(*)>=2
)
select round(sum(tiv_2016),2) as tiv_2016 from insurance where
(lat , lon) IN (select lat , lon from cte) and tiv_2015 IN (select tiv_2015 from cte1);