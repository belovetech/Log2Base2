-- OPERATORS STATEMENT
-- AND

SELECT
    customerName,
    country,
    state,
    city
FROM
    customers
WHERE
    state = 'CA' AND city = 'San Francisco';

SELECT "---";
-- OR
SELECT
    customerName,
    country
FROM
    customers
WHERE
    country = 'USA' OR country = 'France';
    

SELECT "---";
-- IN
SELECT
    officeCode, 
    city, 
    phone, 
    country
FROM
    offices
WHERE
    country IN ('USA', 'France');
    
    
SELECT "---";
-- NOT IN
SELECT
    officecode,
    city,
    phone
FROM
    offices
WHERE
    country NOT IN ('USA', 'France')
ORDER BY
    city;

SELECT "---";
-- BETWEEN
SELECT
    productCode,
    productName,
    buyPrice
FROM
    products
WHERE
    buyPrice BETWEEN 90 AND 100;
    
SELECT "---";
-- NOT BETWEEN
SELECT
    productCode,
    productName,
    buyPrice
FROM
    products
WHERE
    buyPrice NOT BETWEEN 20 AND 100;
    
SELECT "---";
-- CAST
SELECT
    orderNumber,
    requiredDate,
    status
FROM
    orders
WHERE
    requireddate BETWEEN
    CAST('2003-01-01' AS DATE) AND
    CAST('2003-01-31' AS DATE);
    
SELECT "--";
-- LIKE _
SELECT
    employeeNumber,
    lastName,
    firstName
FROM
    employees
WHERE 
    firstName LIKE 'T_m';
    
SELECT "--";

SELECT
    employeeNumber,
    lastName,
    firstName
FROM
    employees
WHERE 
    firstName NOT LIKE 'T_m';
    

SELECT "--";
-- Find all employees whose firstName doesn't start with B
SELECT
    employeeNumber,
    lastName,
    firstName
FROM
    employees
WHERE 
    firstName NOT LIKE 'B%';
    
SELECT "--";
-- Find all products whose productCode contains _20

SELECT
    productCode,
    productName
FROM
    products
WHERE
    productCode LIKE '%\_20%';

SELECT "--";
SELECT
    productCode,
    productName
FROM
    products
WHERE
    productCode LIKE '%$_20%' ESCAPE '$';