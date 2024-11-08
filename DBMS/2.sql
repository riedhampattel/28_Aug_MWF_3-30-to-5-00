select employee_id,first_name,salary from employees;

select * from employees;

insert into employees values(100,'Steven','King','1987-07-17',24000,null,null,90);

select * from employees;

update employees set salary = 35000 where employee_id = 100;

select * from employees;

delete from employees where employee_id = 100;

select * from employees;