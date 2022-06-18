# Write your MySQL query statement belo
select FirstName, LastName, City, State
from Person left join Address
on Person.PersonId = Address.PersonId
;