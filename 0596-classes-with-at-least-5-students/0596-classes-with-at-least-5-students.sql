/* Write your PL/SQL query statement below */
SELECT * FROM
(
    SELECT class from(
        SELECT class , COUNT(student) from courses
        group by class
        having count(student) >= 5
    )
);