select Employee.name, Bonus.bonus from Employee
Left Join Bonus ON Employee.empID = Bonus.empID
Where Bonus IS null or bonus < 1000 ;
