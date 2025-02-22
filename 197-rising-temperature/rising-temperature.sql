select W1.id 
from Weather AS W1, Weather AS W2
where W1.temperature > w2.temperature AND DATEDIFF(W1.recordDate, W2.recordDate) = 1;