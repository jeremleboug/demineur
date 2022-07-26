void initialisation(int nbmine, int col, int lin, char tab[col][lin]) {
  int random_line = 0;
  int random_column = 0;
  int line = 0;
  int column = 0;
  while (nbmine > 0) {
    random_line = rand() % lin;
    random_column = rand() % col;
    if (tab[random_column][random_line] != 'M') {
      tab[random_column][random_line] = 'M';
      nbmine--;
    }
  }
  for (int line = 0; line < lin; line++) {
    for (column; column < col; column++) {
      tab[column][line] =verification(column, line, col, lin, tab) + 48;
    }
    column = 0;
  }
}
