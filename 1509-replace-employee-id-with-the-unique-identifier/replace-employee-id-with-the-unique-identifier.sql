select e.unique_id, emp.name from Employees Emp LEFT JOIN EmployeeUNI e ON Emp.id = e.id;