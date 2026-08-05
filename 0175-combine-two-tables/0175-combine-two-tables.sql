# Write your MySQL query statement below
select p.firstName,p.lastName,d.city,d.state from Person as p
left join Address as d ON p.personId = d.personId;