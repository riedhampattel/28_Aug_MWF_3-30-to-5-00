create table users
(
user_id int primary key,
name varchar(25),
age int not null
);

create table orders
(
user_id int,
order_id int not null unique,
order_no int not null unique,
foreign key orders(user_id) references users(user_id)
);

insert into users values(101,'Ram',25);
insert into users values(102,'Shyam',21);
insert into users values(103,'Smit',18);
insert into users values(104,'Megh',19);
insert into users values(105,'Kunj',45);
select * from users;

insert into orders values(101,456321,1);
insert into orders values(101,456322,2);
insert into orders values(102,456323,3);
insert into orders values(104,456324,4);
insert into orders values(104,456325,5);
select * from orders;

describe users;

describe orders;

select * from users
natural join
orders;

select users.user_id,users.name,orders.order_no
from users left join orders 
on users.user_id=orders.user_id;

select users.user_id,users.name,orders.order_no
from users right join orders 
on users.user_id=orders.user_id;

select users.user_id,users.name,orders.order_no
from users inner join orders 
on users.user_id=orders.user_id;

select * from users 
cross join orders order by 1;

select * from users
union
select * from orders;

delimiter &&
create procedure display_info()
select * from employees;
end && 

call display_info();

drop procedure display_info;

delimiter &&
create procedure display_info(in id int)
begin
select * from employees where department_id = id;
end &&

call display_info(90);

call display_info(50);