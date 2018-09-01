/**
 * Project: Chess
 * Name: Board.h
 * Purpose: Board class header
 *
 * @author Bartosz Gorski "Alvirx"
 * @version 1.0 29.08.2018
*/
#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <string>
#include "Chessman.h"

/**
 * Class storing board`s fields, and Chessmen
 */
class Board {
public:
    /**
     * Generates whole board and sets right chessmen to their position
     */
    Board();

    /**
     * Returns Chessman on particular position
     * @param field chosen
     * @return Chessman staying on given field; null if field is empty
     */
    Chessman* getChessman(std::string field);
    /*Temporary method for visualising board*/
    void printBoard();
    /**
     * Moves Chessmen on board
     * @param from - field from move starts
     * @param to - field where move ends
     * @return taken Chessman if there was Chessman on "to" Field; Null otherwise
     */
    Chessman* move(std::string from, std::string to);


private:
    void generateChessmen(bool white);
    void translateCoordinates(int* first, int* second);
    Chessman* board[8][8];
};


#endif //CHESS_BOARD_H
