-- Create member and committee table

DROP TABLE IF EXISTS members;

CREATE TABLE IF NOT EXISTS members(
    member_id INT AUTO_INCREMENT,
    name VARCHAR(255),
    PRIMARY KEY (member_id)
);

DROP TABLE IF EXISTS committees;

CREATE TABLE IF NOT EXISTS committees(
    committee_id INT AUTO_INCREMENT,
    name VARCHAR(255),
    PRIMARY KEY (committee_id)
);

INSERT INTO members (name) 
VALUES ('Jane'),('Kane'),('Ken'),('Bob'),('Mark'),('Mike');

INSERT INTO committees (name)
VALUES ('Bob'),('Ken'),('Jane'),('Ben');