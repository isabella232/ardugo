#include "ArduGo.h"
#include "Board.h"
#include "assets.h"

/*
 *  File: validate.cpp
 *  Purpose: Implementation of move validation methods.
 *  Author: Don Anderson
 */

int
Board::checkValid(int row, int col, point_t color){
  if(!isEmpty(row, col))
    return 0;

  return 1;
}

int
Board::markValids(index_t *index){
  int cnt = 0;
  for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
      if(checkValid(r, c, WHITE_STONE)){
        points[r][c] |= VALID_NEXT;
        if(index){
          index[cnt].row = r;
          index[cnt].col = c;
        }
        cnt++;
      }
    }
  }
  return cnt;
}

