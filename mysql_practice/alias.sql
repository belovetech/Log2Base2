-- ALIAS STATEMENT
-- MySQL alias for columns

SELECT
    CONCAT_WS(', ', firstName, lastName) AS fullName
FROM
    employees;
    
SELECT "--";
SELECT
    CONCAT_WS(', ', firstName, lastName) AS fullName
FROM
    employees
ORDER BY
    fullName;
    
    
SELECT "--";
-- selects the orders whose total amount is greater than 60000
SELECT
    orderNumber `order no`,
    SUM(quantityOrdered * priceEach) total
FROM
    orderdetails
GROUP BY
    `order no`;
HAVING total > 60000;