create view temp as select employee_id,first_name,salary from employees where department_id = 90;

drop view temp;

select * from temp;

create table student
(
id int not null unique,
name varchar(25) not null,
english int,
maths int,
total int
);

create trigger add_data
before insert on student
for each row
set new.total = new.english + new.maths;

insert into student(id,name,english,maths) values(101,'Mehul',75,78);
insert into student(id,name,english,maths) values(102,'Rahul',56,68);
insert into student(id,name,english,maths) values(103,'Rohan',95,97);
insert into student(id,name,english,maths) values(104,'Nimesh',35,82);
insert into student(id,name,english,maths) values(105,'Shashvat',25,36);

select * from student;

create table history1
(
id int not null unique,
name varchar(25) not null
);

select * from history1;

create table history2
(
name varchar(25) not null,
detail time
);

select * from history2;

create trigger copy_data
after insert on history1
for each row
insert into history2 values(new.name,curtime());

insert into history1 values(101,'Smit');
insert into history1 values(102,'Simmy');
insert into history1 values(103,'Shlok');
insert into history1 values(104,'Sharvil');
insert into history1 values(105,'Megh');

select * from history1;

select * from history2;