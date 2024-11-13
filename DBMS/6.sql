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

describe users;

describe orders;