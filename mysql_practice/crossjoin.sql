-- List all sales

-- SELECT
--     product_name,
--     store_name,
--     quantity,
-- FROM 
--     sales
--         INNER JOIN 
--     products ON products.id = sales.product_id
--         INNER JOIN 
--     stores ON stores.id = sales.store_id
-- GROUP BY
--     store_names, product_name;

SELECT
    store_name,
    product_name,
    SUM(quantity * price) AS revenue
FROM
    sales
        INNER JOIN
    products ON products.id = sales.product_id
        INNER JOIN
    stores ON stores.id = sales.store_id
GROUP BY 
    store_name, product_name
ORDER BY
    store_name;
    
SELECT "--";
SELECT
    store_name, product_name
FROM
    stores AS a
        CROSS JOIN
    products AS b;
    
    