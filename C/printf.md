![transparent](https://capsule-render.vercel.app/api?type=transparent&fontColor=ffcc33&text=MinJun's%20GitHub%20&height=150&fontSize=60&desc=TIL&descAlignY=75&descAlign=60)

# Printf란?

#### Printf는 C언어에서 무언가를 출력하고 싶을 때 사용하는 하나의 함수이다.<br>다음 코드를 이용하면 Hello, World!라는 글을 출력할 수 있다.
```c
#include <stido.h>

int main () {
    printf("Hello, World!");
    return 0;
}
```

#### 위 코드를 줄별로 설명해보면,
- #include 구문은 헤더 파일을 포함시키는 문법이다. printf 함수를 사용하려면 stdio.h 헤더 파일이 필요하므로 코드 맨 윗줄에서 먼저 stdio.h 헤더 파일을 포함시키도록 구문을 짠 것이다.
- int main () 코드는 main 함수를 실행시키는 구문인데, main 함수는 C 언어로 프로그램을 만들었을 때 가장 처음에 실행되는 특별한 함수다. 만약 main 함수가 없을 경우 컴파일이 되지 않으므로 주의.
- printf라는 코드는 화면에 문자열을 출력시키는 함수이다. 그렇다면 함수는 무엇일까? main, printf와 같은 단어 뒤에는 괄호가 붙어 있는데, 이렇게 괄호 뒤에 붙은 단어를 함수(function) 이라고 한다.
- 위 코드와 같이 printf를 쓰고 괄호 안에 출력할 내용을 적은 후 세미콜론을 붙이면 printf 함수가 실행된다. 다른 말로는 함수를 호출 (call) 한다고 말하기도 한다.
- 마지막에는 return 0; 이라는 구문이 쓰였는데, return은 함수가 종료됐다는 의미를 가지며, 함수 내의 변수나 어떤 값을 돌려주는 역할을 한다. 즉 return 0;을 사용하는 이유는 오류 없이 정상적으로 함수를 종료하기 위해 사용하는 구문이다.

<hr>