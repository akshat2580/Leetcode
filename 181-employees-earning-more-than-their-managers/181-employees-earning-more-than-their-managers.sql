# Write your MySQL query statement below
select a.name as Employee from Employee AS a,
    Employee AS b where
    a.ManagerId = b.Id and a.Salary>b.Salary;
