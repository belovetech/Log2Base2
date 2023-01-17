-- JOIN STATEMENT


SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name AS committee
FROM
    members m
INNER JOIN
    committees c
ON
    m.name = c.name;
    
SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name AS committee
FROM
    members m
INNER JOIN
    committees c USING(name);
    
SELECT "--";

SELECT * FROM members;
SELECT * FROM committees;

-- left join
SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name As committee
FROM members m
LEFT JOIN
    committees c USING(name);

SELECT "--";


SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name AS committee
FROM members m
LEFT JOIN 
    committees c USING(name)
WHERE c.committee_id IS NULL;

-- right join
SELECT "--";
SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name AS committee
FROM members m
RIGHT JOIN 
    committees c USING(name)
WHERE m.member_id IS NULL;


-- cross join
SELECT "--";
SELECT
    m.member_id,
    m.name AS member,
    c.committee_id,
    c.name AS committee
FROM 
    members m
CROSS JOIN 
    committees c;


-- SELF JOIN
SELECT 
    CONCAT(m.firstName, ', ', m.lastName) AS Manager,
    CONCAT(e.firstName, ', ', e.lastName) AS 'Direct report'
FROM
    employees e
INNER JOIN employees m ON 
    m.employeeNumber = e.reportsTo
ORDER BY 
    Manager;