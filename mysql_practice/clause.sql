-- CLAUSE STATEMENT

-- LIMIT
-- List First 5 customer with highest credit limit
SELECT
    customerNumber,
    customerName,
    creditLimit
FROM
    customers
ORDER BY
    creditLimit DESC
LIMIT 5;


SELECT "--";
-- List First 5 customer with highest credit limit
SELECT
    customerNumber,
    customerName,
    creditLimit
FROM
    customers
ORDER BY
    creditLimit
LIMIT 5;

SELECT "--";
-- List First 5 customer with highest credit limit
SELECT
    customerNumber,
    customerName,
    creditLimit
FROM
    customers
ORDER BY
    creditLimit,
    customerNumber
LIMIT 5;

-- Using MySQL LIMIT clause for pagination

SELECT "--";
-- return total row in customers table
SELECT
    COUNT(*)
FROM
    customers;

SELECT "--"; 
-- List first 10 customers sorted by name (first page) row 1-10
SELECT
    customerNumber,
    customerName
FROM
    customers
ORDER BY
    customerName
LIMIT 10;


SELECT "--"; 
-- List 10 customers sorted by name in (second page) row 11-20
SELECT
    customerNumber,
    customerName
FROM
    customers
ORDER BY
    customerName
LIMIT 10, 10;

SELECT "--"; 
-- List 10 customers sorted by name in (third page) row 21-30
SELECT
    customerNumber,
    customerName
FROM
    customers
ORDER BY
    customerName
LIMIT 20, 10;

-- Using MySQL LIMIT to get the nth highest or lowest value

SELECT "--";
-- Get second highest customer with credit limit
SELECT
    customerNumber,
    customerName,
    creditLimit
FROM
    customers
ORDER BY
    creditLimit DESC
LIMIT 1, 1;