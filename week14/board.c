//
//  board.c
//  sharkGame
//

#include "board.h"

// 보드 배열과 상어 위치
int board[N_BOARD];
int shark_position = 0;  // 상어의 초기 위치는 0번 칸

// 보드 초기화 함수
void board_initBoard(void)
{
    for (int i = 0; i < N_BOARD; i++)
    {
        board[i] = BOARDSTATUS_OK; // 모든 칸을 정상 상태로 초기화
    }
    shark_position = 0; // 상어 위치 초기화
}

// 특정 위치의 보드 상태를 반환 (0: OK, 1: NOK)
int board_getBoardStatus(int pos)
{
    if (pos >= 0 && pos < N_BOARD)
    {
        return board[pos];
    }
    return BOARDSTATUS_NOK; // 범위를 벗어나면 NOK로 처리
}

// 특정 위치의 보드 상태를 설정 (0: OK, 1: NOK)
void board_setBoardStatus(int pos, int status)
{
    if (pos >= 0 && pos < N_BOARD)
    {
        board[pos] = status;
    }
}

// 상어의 현재 위치 반환
int board_getSharkPosition(void)
{
    return shark_position;
}

// 상어 위치를 초기화
void board_resetSharkPosition(void)
{
    shark_position = 0;
}

// 상어를 한 칸 앞으로 이동시키고 새로운 위치 반환
int board_stepShark(void)
{
    if (shark_position < N_BOARD - 1)
    {
        shark_position++;
    }
    return shark_position;
}

// 특정 위치에 코인이 있는지 확인 (예제에서는 20% 확률로 코인 존재)
int board_getBoardCoin(int pos)
{
    if (pos >= 0 && pos < N_BOARD && board[pos] == BOARDSTATUS_OK)
    {
        return rand() % 5 == 0; // 20% 확률로 코인이 있음
    }
    return 0;
}

// 특정 위치에 코인을 배치
void board_setBoardCoin(int pos)
{
    if (pos >= 0 && pos < N_BOARD)
    {
        board[pos] = BOARDSTATUS_OK; // 코인이 있는 칸을 OK로 설정
    }
}

// 보드 상태를 출력
void board_printBoardStatus(void)
{
    printf("Board Status: ");
    for (int i = 0; i < N_BOARD; i++)
    {
        if (shark_position == i)
            printf("S ");    // 상어 위치는 'S'로 표시
        else if (board[i] == BOARDSTATUS_NOK)
            printf("X ");    // 파괴된 칸은 'X'로 표시
        else
            printf(". ");    // 정상 칸은 '.'으로 표시
    }
    printf("\n");
}
