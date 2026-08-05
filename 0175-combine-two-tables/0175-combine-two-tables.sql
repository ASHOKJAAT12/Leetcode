# Write your MySQL query statement below
select firstName,lastName,city,state from Person as p
left join Address as d ON p.personId = d.personId;