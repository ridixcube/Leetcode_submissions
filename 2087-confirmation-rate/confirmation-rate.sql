SELECT s.user_id, 
CASE 
WHEN count(*) > 0 
THEN ROUND(sum(case when c.action = 'confirmed' then 1 else 0 end) / count(*), 2) 
ELSE 0.00 
END as confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c ON c.user_id = s.user_id
GROUP BY s.user_id;