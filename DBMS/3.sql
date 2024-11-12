select employee_id,last_name from employees;

select * from employees;

alter table employees modify hire_date varchar(15) not null;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');

select * from employees;

select * from employees where department_id = 80;

select * from employees;

select employee_id,first_name,salary*12 from employees;

select employee_id,first_name,salary*12 as annual_salary from employees;

select * from employees;

select employee_id as id from employees;

select employee_id,concat(first_name,last_name) as full_name from employees;

select employee_id,concat(first_name,concat(' ',last_name)) as full_name from employees;

select * from employees where salary>10000;

select * from employees where salary>10000 and salary<20000;

select * from employees where department_id = 90 or department_id = 60;

select * from employees where salary between 10000 and 20000;

select * from employees;

select * from employees order by last_name asc;

select * from employees order by last_name desc;

select * from employees order by 5;

select last_name as surname from employees order by surname;

select last_name as surname from employees order by last_name;

select last_name as surname from employees order by 1;

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%e%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-J_n-%';

select * from employees where hire_date like '%-Ju_-%';

select * from employees where department_id = 90 or department_id = 60 or department_id = 50;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where (manager_id,department_id) in ((100,90),(102,60));

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select distinct department_id from employees;

select * from employees;

select min(salary) from employees;

select max(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(commission_pct) from employees;

select department_id,min(salary) from employees group by department_id;

select department_id,min(salary) from employees group by department_id having min(salary)>10000;

select department_id,max(salary) from employees group by department_id having min(salary)>10000;

select department_id,max(salary) from employees group by department_id having max(salary)>10000;

select * from employees order by salary desc limit 5;

select * from employees order by salary limit 5;

select * from employees;

select * from employees limit 10 offset 5;

select * from employees order by salary limit 10 offset 6;