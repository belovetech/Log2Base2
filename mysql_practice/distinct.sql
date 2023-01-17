-- SELECT DISTINCT STATEMENT

--  List all employee lastname
SELECT
    lastName
FROM
    employees
ORDER BY lastName;

SELECT "---";

--  List distinct all employee lastName
SELECT
    DISTINCT lastName
FROM
    employees
ORDER BY lastName;

SELECT "---";

-- List all distinct customer state and city
SELECT
    DISTINCT state, city
FROM
    customers
WHERE 
    state IS NOT NULL
ORDER BY
    state, city;
   
SELECT "---";
-- List all customer state and city

SELECT
    state, city
FROM
    customers
WHERE 
    state IS NOT NULL
ORDER BY
    state, city;
