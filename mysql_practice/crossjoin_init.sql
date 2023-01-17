-- Create salesdb
DROP DATABASE IF EXISTS salesdb;

CREATE DATABASE IF NOT EXISTS salesdb;

USE salesdb;

CREATE TABLE IF NOT EXISTS products(
    id INT AUTO_INCREMENT,
    product_name VARCHAR(225),
    price DECIMAL(13, 2),
    PRIMARY KEY (`id`)
);

CREATE TABLE IF NOT EXISTS stores(
    id INT AUTO_INCREMENT,
    store_name  VARCHAR(100),
    PRIMARY KEY (`id`)
);

CREATE TABLE IF NOT EXISTS sales(
    product_id INT,
    store_id INT,
    quantity DECIMAL(13, 2) NOT NULL,
    sales_date DATE NOT NULL,
    PRIMARY KEY (`product_id`, `store_id`),

    FOREIGN KEY (`product_id`)
        REFERENCES products (`id`)
        ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY (`store_id`)
        REFERENCES stores (`id`)
        ON DELETE CASCADE ON UPDATE CASCADE    
);

INSERT INTO products(product_name, price)
VALUES('iPhone', 699),
      ('iPad',599),
      ('Macbook Pro',1299);

INSERT INTO stores(store_name)
VALUES('North'),
      ('South');

INSERT INTO sales(store_id,product_id,quantity,sales_date)
VALUES(1,1,20,'2017-01-02'),
      (1,2,15,'2017-01-05'),
      (1,3,25,'2017-01-05'),
      (2,1,30,'2017-01-02'),
      (2,2,35,'2017-01-05');