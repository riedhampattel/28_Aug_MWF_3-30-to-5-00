create table demo
(
eid int not null,
first_name varchar(15) not null
);

insert into demo(eid,first_name) values
(101,'Shyam'),
(102,'Krunal'),
(103,'Megha'),
(104,'Dipak');

commit;

select * from demo;

delete from demo where eid = 101;

select * from demo;

rollback;

select * from demo;

delete from demo where eid=101;

select * from demo;

commit;

rollback;

select * from demo;

savepoint s1;
delete from demo where eid = 102;
savepoint s2;
delete from demo where eid = 103;
savepoint s3;
delete from demo where eid = 104;

select * from demo;

rollback to s2;

select * from demo;