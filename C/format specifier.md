![transparent](https://capsule-render.vercel.app/api?type=transparent&fontColor=ffcc33&text=MinJun's%20GitHub%20&height=150&fontSize=60&desc=TIL&descAlignY=75&descAlign=60)

# 서식 지정자(format specifier)란?

#### 서식 지정자는 printf로 문자열을 출력할 때 값으로 바뀌는 부분을 뜻합니다.
```c
#include <stido.h>

int main () {
    printf("%s\n", "Hello, World!");
    return 0;
}
```

#### 서식 지정자는 왜 사용할까요?
- 서식 지정자를 사용하든 "Hello, world!"를 바로 출력하든 결과에는 차이가 없다. 하지만 서식 지정자는 변수를 사용하여 같은 내용을 여러 개 출력하거나, 출력 형태를 바꿀 때 유용하게 사용할 수 있다.
- 다음과 같이 %s를 두 번 사용했다면 각 %s에 들어갈 문자열을 , (콤마)로 구분하여 차례대로 넣어주면 됩니다.

<hr>