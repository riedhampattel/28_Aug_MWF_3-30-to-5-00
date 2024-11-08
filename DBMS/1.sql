create schema 28_aug;

create table employees
(
employee_id int,
first_name varchar(15),
commission_pct float
);

drop table employees;

drop schema 28_aug;

create schema 28_aug;

create table employees
(
employee_id int not null unique,
first_name varchar(15) not null,
last_name varchar(15) not null,
hire_date date not null,
salary int not null,
commission_pct float,
manager_id int,
department_id int
);

describe employees;

-- rename table
alter table employees rename to emp_data;
alter table emp_data rename to employees;

describe employees;
describe emp_data;

-- rename column
alter table employees rename column commission_pct to cmpct;
alter table employees rename column cmpct to commission_pct;

describe employees;

-- add column
alter table employees add column job_id varchar(15) not null;

describe employees;

-- add column at specific position
alter table employees add column job_id varchar(15) not null after hire_date;

describe employees;

-- modify column
alter table employees modify column job_id int;

describe employees;

-- drop column
alter table employees drop job_id; 

describe employees;