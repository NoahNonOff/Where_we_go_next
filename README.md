# Where we'll go next ?
### level -> (みずのと)

Fait une fonction `ft_move` qui prend en paramètres une structure coord (x et y) et un char ('w', 'e', 'n', 's') et devra renvoyer en fonction de la direction
de nouvelles coordonées sachant que la fonction `ft_move` créer un déplacement de 1 dans la direction donnée

**Déplacement sur un plan (4, 3)**
```
(y)
 |
 |     n
 |   w + e
 |     s
 |__________ (x)
 ```

`coord	ft_move(coord pos, char direction);`

pos(x = 1, y = 3) and 'e' should return pos(x = 2, y = 3)<br/>
pos(x = 1, y = 3) and 's' should return pos(x = 1, y = 4)<br/>

le fichier `.h` contient :
```
#include <unistd.h>
#include <stdio.h>

typedef struct Coord {
  int x;
  int y;
}  coord;
```

n == Nord<br/>
s == Sud<br/>
e == East<br/>
w == West<br/>
<br/>
La fonction à remplir se trouve dans **work** (Bonne chance)<br/>
**WARNING: NE PAS REGARDER LES AUTRES FICHIERS** 
