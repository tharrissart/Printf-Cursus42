_This project has been created as part of the 42 curriculum by **thharris**_

# ft_printf

## Description

La fonction consiste a rédiger un texte formaté a la sortie souhaitee.
Dans la zone de texter souhaiter, nous avons differents type de texter a afficher : 

- le texte souhaiter (exemple : "Bonjours je m'appelle thharris").

- `%d` : un charactere en valeur décimale.

- `%c` : un charactère ASCII.

- `%s` : une chaîne de charactère.

- `%p` : l'adresse dans la machine en base Hexadecimale "0123456789ABCDEF" précéder de "0x".

- `%i` : permet d'ecrire un int en valeur decimale.

- `%u` : permet d'ecrire un int exclusivement positif en valeur decimale.

- `%x` : permet d'ecrire un int en base Hexadecimal "0123456789abcdef".

- `%X` : permet d'ecrire un int en base Hexadecimale "0123456789ABCDEF".

- `%%` : permet d'ecrire le signe '%'.

## Instruction

Pour executer le programme, il suffit de taper la commande `make`, ce qui compile et tranforme tous les fichier `.c` en fichier `.o`.

Grace a cela vous pouvez executer le programme avec `./a.out` et vous verrez le texte predefinis dans le fichier `main.c`.

Si vous voulez modifier des valeurs, il suffit de modifier les valeurs dans le fihier
`main.c`.

Suite a cela executer la commande `make re` ce qui efface et reexecute la copilation des fichier `.c` en `.o`.

Taper la commande `./a.out` et admirer les modifications

## Ressources

- Discussions avec des etudiants pour modifier quelques petits details.