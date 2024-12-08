//
//  board.h
//  sharkGame
//

#ifndef board_h
#define board_h

#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_BOARD                 20

// 보드 상태: 0 - OK (정상), 1 - NOK (파괴된 칸)
#define BOARDSTATUS_NOK         1
#define BOARDSTATUS_OK          0

// 함수 선언
void board_initBoard(void);               // 보드 초기화
int board_getBoardStatus(int pos);        // 특정 위치의 보드 상태 반환
void board_setBoardStatus(int pos, int status); // 특정 위치의 보드 상태 설정

int board_getSharkPosition(void);         // 상어의 현재 위치 반환
void board_resetSharkPosition(void);      // 상어 위치 초기화
int board_stepShark(void);                // 상어를 한 칸 앞으로 이동

int board_getBoardCoin(int pos);          // 특정 위치에 코인이 있는지 확인
void board_setBoardCoin(int pos);         // 특정 위치에 코인을 배치

void board_printBoardStatus(void);        // 보드 상태 출력
// ----- EX. 3 : board ------------

#endif /* board_h */