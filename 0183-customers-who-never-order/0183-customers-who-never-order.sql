/* Write your PL/SQL query statement below */
select name as customers from (
select * from Customers
Minus
select customers.id, customers.name from customers 
join orders on orders.customerId = customers.id);  