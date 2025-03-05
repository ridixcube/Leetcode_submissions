select s.user_id,IFNULL(ROUND(sum(action = 'confirmed')/count(*),2), 0.00)  as confirmation_rate
from Signups s
left join Confirmations c
on c.user_id = s.user_id
group by s.user_id