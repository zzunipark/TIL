<div style="width: 100%; text-align: center;">
  <a href="https://github.com/zzunipark/TIL/blame/main/animation.svg" target="_blank">
    <img src="animation.svg" style="width: 100%;">
  </a>
</div>

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

<hr>

#### 다음과 같이 서식 지정자를 두 번 사용했다면 각 서식 지정자에 들어갈 문자열을 콤마로 구분하여 차례대로 넣어주면 됩다.
```c
printf("%s %s", "Hello", "World");
```

#### 만약 콤마까지 출력하고 싶다면 문자열 안에 콤마를 넣어주면 된다.
```c
printf("%s %s", "Hello,", "World");
```

#### "%s, %s"와 같이 서식 지정자 부분에 콤마를 넣는 방법도 있다.
```c
printf("%s, %s", "Hello", "World");
```

#### 만약 서식 지정자를 "%s%s"처럼 붙여 쓰면 출력할 문자가 띄어쓰기 없이 붙어서 출력된다.
```c
printf("%s%s", "Hello", "World");
```

#### 그럼 서식 지정자를 붙인 상태로 띄어쓰기를 하려면 어떻게 해야 할까? 아래와 같이 문자열에 공백을 넣으면 된다.
```c
printf("%s%s", "Hello ", "World");
printf("%s%s", "Hello", " World");
```

#### 서식 지정자는 %s 외에도 다양한 것들이 있다.
> %d 부호 있는 10진수 정수<br>
> %u 부호 없는 10진수 정수<br>
> %f 소수점이 있는 실수형<br>
> %o 8진수형<br>
> %x, %X 16진수형, 소문자 a부터 f까지, X는 대문자 A부터 F까지<br>
> %c 문자 1개<br>
> %s 문자열<br>
> %e, E 지수형 표기<br>
> %p 포인터<br>
> %% %출력

<hr>

<p align="center">
    [코딩도장](https://dojang.io) 참고
</p>
