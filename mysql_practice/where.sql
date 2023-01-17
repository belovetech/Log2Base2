-- WHERE STATEMENT
-- find employee whose job title is 'sales rep'
SELECT 
    firstName, 
    lastName, 
    jobtitle
FROM 
    employees
WHERE 
    jobtitle = 'sales Rep';

SELECT "---";
-- find employee shose jobtitle is 'sales rep' and officecode is 1
SELECT 
    firstName, 
    lastName, 
    jobtitle, 
    officecode
FROM 
    employees
WHERE 
    jobtitle = 'sales Rep' AND 
    officecode = 1;

SELECT "---";
-- find employee whose officecode is between 1 - 3
SELECT
    firstName,
    lastName,
    officecode
FROM
    employees
WHERE
    officecode BETWEEN 1 AND 3
ORDER BY
    officecode;
    

SELECT "---";
-- Find employee whose lastname ends with 'son'
SELECT
    firstName,
    lastName
FROM
    employees
WHERE
    lastName LIKE '%son'
ORDER BY
    firstName;
    
SELECT "---";
-- find employee whose officecodes ie either 1, 2, or 3
SELECT
    firstName,
    lastName,
    officecode
FROM
    employees
WHERE
    officecode IN (1, 2, 3)
ORDER BY
    officecode;
    
SELECT "---";
-- Find all employees whose reportsTo is unknown or missing 
SELECT
    firstName,
    lastName,
    reportsTo
FROM
    employees
WHERE
    reportsTo IS NULL;

SELECT "---";
-- Find all employees who are not sales rep
SELECT
    firstName,
    lastName,
    jobtitle
FROM
    employees
WHERE
    jobtitle <> 'Sales Rep';

SELECT "---";
-- Find all employees whose officecode greater than 5;
SELECT
    firstName,
    lastName,
    officecode
FROM
    employees
WHERE
    officecode > 5;
    
SELECT "---";
-- Find all employees whose officecode less than or equal to 4;
SELECT
    firstName,
    lastName,
    officecode
FROM
    employees
WHERE
    officecode <= 4;