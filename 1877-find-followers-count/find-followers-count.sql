# Write your MySQL query statement below
select
distinct f.user_id  ,u.followers_count
from Followers f
join (
    select user_id ,count(follower_id) as followers_count
    from  Followers
    group by user_id
)as u
on u.user_id=f.user_id
order by u.user_id ;