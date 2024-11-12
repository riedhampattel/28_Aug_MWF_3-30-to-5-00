create role student;

create user shyam identified by 'abc@123' default role student;

grant select on employees to shyam;

grant select,delete on employees to shyam;

select * from employees;

revoke delete on employees from shyam;

revoke select on employees from shyam;