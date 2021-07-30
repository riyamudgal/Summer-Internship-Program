/*
Table: Cinema

+----------------+----------+
| Column Name    | Type     |
+----------------+----------+
| id             | int      |
| movie          | varchar  |
| description    | varchar  |
| rating         | float    |
+----------------+----------+
id is the primary key for this table.
Each row contains information about the name of a movie, its genre, and its rating.
rating is a 2 decimal places float in the range [0, 10]

Write an SQL query to report the movies with an odd-numbered ID and a description that is not "boring".

Return the result table in descending order by rating.
*/


select id, movie, description, rating from cinema where description not like 'boring' and id%2!=0 order by rating desc
