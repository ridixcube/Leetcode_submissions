select p.product_name, s.year, s.price 
FROM Sales s 
Join Product p ON s.product_id = p.product_id;