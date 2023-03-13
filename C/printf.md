![transparent](https://capsule-render.vercel.app/api?type=transparent&fontColor=ffcc33&text=MinJun's%20GitHub%20&height=150&fontSize=60&desc=TIL&descAlignY=75&descAlign=60)

# Printf란?

#### Printf는 C언어에서 무언가를 출력하고 싶을 때 사용한다.\n 다음 코드를 이용하면 Hello, World!라는 글을 출력할 수 있다.
```c
#include <stido.h>

int main () {
    printf("Hello, World!");
    return 0;
}
```

#### 위 코드를 줄별로 설명해보면, #include 구문은 헤더 파일을 포함시키는 문법이다. printf 함수를 사용하려면 stdio.h 헤더 파일이 필요하므로 코드 맨 윗줄에서 먼저 stdio.h 헤더 파일을 포함시키도록 구문을 짠 것이다.\nint main () 코드는 main 함수를 실행시키는 구문인데, main 함수는 C 언어로 프로그램을 만들었을 때 가장 처음에 실행되는 특별한 함수다. 만약 main 함수가 없을 경우 컴파일이 되지 않으므로 주의.

<hr>