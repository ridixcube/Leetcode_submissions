select Employee.name, Bonus.bonus 
from Employee
Left Join Bonus 
ON Employee.empID = Bonus.empID
Where Bonus is NULL or Bonus < 1000  ;
