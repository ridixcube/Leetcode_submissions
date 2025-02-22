SELECT name
FROM Employee
WHERE id IN(
    SELECT managerID
    FROM Employee
    GROUP BY managerId
    HAVING count(*) >= 5
);