-- ORDER BY STATEMENT

SELECT contactLastName, contactFirstName
FROM customers
ORDER BY contactLastName DESC, contactFirstName ASC;


SELECT 
    orderNumber, 
    orderLineNumber,
    quantityOrdered * priceEach AS subtotal
FROM orderdetails
ORDER BY subtotal DESC;


SELECT 
    orderNumber, status
FROM 
    orders
ORDER BY FIELD(status,
        'In Process',
        'On Hold',
        'Cancelled',
        'Resolved',
        'Disputed',
        'Shipped');
        
SELECT 
    firstname,
    lastname,
    reportsTo
FROM
    employees
ORDER BY reportsTo;