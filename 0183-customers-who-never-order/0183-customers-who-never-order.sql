/* Write your T-SQL query statement below */
-- SELECT c.name AS Customers
-- FROM Customers AS c
-- LEFT JOIN Orders AS o 
-- ON  c.id = o.customerId
-- WHERE o.customerId IS NULL;

select c.name as Customers
from customers as c
where not exists(
    select o.customerId
    from orders as o
    where c.id=o.customerId
)