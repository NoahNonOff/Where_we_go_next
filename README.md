# Where we'll go next ?
### level -> (みずのと)

Fait une fonction `ft_move` qui prend en paramètres une structure coord (x et y)
et un char ('w', 'e', 'n', 's') et devra renvoyer en fonction de la direction
de nouvelles coordonées

**Point sur un plan (1, 2) par exemple**
```
(y)
 |
 |
 |     +
 |__________ (x)
 ```

`coord	ft_move(coord pos, char direction);`

pos(x = 1, y = 3) and 'n' should return pos(x = 2, y = 3)
pos(x = 1, y = 3) and 'e' should return pos(x = 1, y = 4)