select Employee.name, Bonus.bonus 
from Employee
Left Join Bonus ON Employee.empID = Bonus.empID
Where bonus < 1000 or Bonus IS null;
