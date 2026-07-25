# Write your MySQL query statement below
(SELECT
u.name as results
FROM Users u
JOIN MovieRating m
ON u.user_id = m.user_id
GROUP BY u.user_id, u.name
ORDER BY COUNT(*) DESC, u.name ASC
LIMIT 1)
union all
(SELECT
    m.title as results
FROM MovieRating mr
JOIN Movies m
ON mr.movie_id = m.movie_id
WHERE created_at BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY m.movie_id, m.title
ORDER BY AVG(mr.rating) DESC, m.title ASC
LIMIT 1);