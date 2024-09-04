# Write your MySQL query statement below
SELECT ROUND(SUM(tiv_2016),2) AS tiv_2016 FROM Insurance
WHERE pid IN
(SELECT pid FROM insurance GROUP BY lat, lon HAVING COUNT(*) = 1)
AND pid NOT IN
(SELECT pid FROM insurance GROUP BY tiv_2015 HAVING COUNT(*) = 1)
