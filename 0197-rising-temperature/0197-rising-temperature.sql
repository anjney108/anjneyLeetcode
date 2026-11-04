/* Write your T-SQL query statement below */
SELECT v.id as id
FROM Weather w
JOIN Weather v
ON DATEDIFF(DAY,w.recordDate,v.recordDate) = 1
WHERE w.temperature < v.temperature;