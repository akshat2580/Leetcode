select name as Employee 
from Employee e
where exists 
(select 1 from Employee m
where e.managerid = m.id
and e.salary > m.salary)