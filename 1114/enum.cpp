#include <iostream>

// ----------------------------------------------------------
// enum class 예제
//  - 기존 enum과 달리 스코프(enum 내부 범위)를 가짐
//  - 정수(int)로의 암시적 변환이 불가능 → 타입 안전성 증가
//  - 서로 다른 enum class 간 비교 불가 → 논리적 오류 방지
// ----------------------------------------------------------

enum class E_STATE
{
    // 기본 상태 (아무것도 선택되지 않은 초기 상태)
    E_NONE = 0,

    // 가위바위보 선택지
    E_SCISSORS,   // 1
    E_ROCK,       // 2
    E_PAPER       // 3
};

int main()
{
    // ------------------------------------------------------
    // enum class는 기본 초기화({}) 시 0으로 세팅됨.
    // 따라서 ePlayer = E_STATE::E_NONE 상태가 됨.
    // ------------------------------------------------------
    E_STATE ePlayer{};   // = E_STATE::E_NONE
    E_STATE eCpu{};      // = E_STATE::E_NONE

    // ------------------------------------------------------
    // enum class는 값 사용 시 반드시 스코프 지정 필요.
    // 기존 enum처럼 ePlayer = E_PAPER; ← 이런 문법 불가능.
    // ------------------------------------------------------
    ePlayer = E_STATE::E_PAPER;

    // ------------------------------------------------------
    // enum class는 int로 암시적 변환이 불가능하기 때문에
    // printf에서 사용하려면 반드시 명시적으로 변환해야 함.
    // ------------------------------------------------------
    printf("Player State = %d\n", static_cast<int>(ePlayer));
    printf("CPU State    = %d\n", static_cast<int>(eCpu));

    // ------------------------------------------------------
    // switch 문도 스코프가 필요함 (E_STATE::E_ROCK ...)
    // ------------------------------------------------------
    switch (ePlayer)
    {
    case E_STATE::E_NONE:
        printf("아직 선택하지 않았음\n");
        break;

    case E_STATE::E_SCISSORS:
        printf("플레이어: 가위\n");
        break;

    case E_STATE::E_ROCK:
        printf("플레이어: 바위\n");
        break;

    case E_STATE::E_PAPER:
        printf("플레이어: 보\n");
        break;
    }

    return 0;
}