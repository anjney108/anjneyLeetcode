# Write your MySQL query statement below
-- using the lag and lead function
-- lag(column_name, offset, default) over(order by column_name ); previous row 
-- lead(column_name, offset, default) over(order by column_name ); subsequent row
WITH temp AS (
    SELECT id , num,
    LAG(num,1) OVER(ORDER BY ID) AS prev1,
    LAG(num,2) OVER(ORDER BY ID) AS prev2
    FROM Logs
)
SELECT DISTINCT num AS ConsecutiveNums
FROM temp
WHERE num=prev1 
AND num=prev2;