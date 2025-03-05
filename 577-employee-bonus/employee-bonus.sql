select e.name, b.bonus 
from Employee e
Left Join Bonus b
ON e.empID = b.empID
Where Bonus is NULL or Bonus < 1000  ;
