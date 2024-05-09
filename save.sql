create database login3;
use login3;
show tables;
create table users
(
ID int auto_increment primary key,
NAME varchar(100),
EMAIL varchar(100),
PASS varchar(100)
) ;
select * from users;