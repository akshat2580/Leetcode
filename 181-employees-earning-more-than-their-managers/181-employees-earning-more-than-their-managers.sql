select name as Employee
from Employee e
where salary > (select salary from Employee m where e.managerid = m.id)