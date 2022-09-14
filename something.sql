-- find second max in a table using mysql query
-- "id" (type: INTEGER, PRIMARY KEY)
-- "name" (type: VARCHAR(32))

SELECT id
FROM `user`
ORDER BY id DESC            -- start with highest
LIMIT 1                     -- show only 1 row
OFFSET 1 ;                  -- but skip the first (skip 1 row)

SELECT id FROM user ORDER BY id ASC LIMIT 1, 1

select max(id) from user where id  not in (Select max(id) from user);
