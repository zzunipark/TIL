# Interval

#### Interval이란?
- 매번 일어나야 하는 무언가

<hr>

### 5초에 한번씩 Hello 출력하기
```js
function sayHello() {
    console.log("Hello");
}

setInterval(sayHello, 5000);
```

#### 자매품으로 setTimeout도 존재하는데, setInterval은 계속 실행되지만 setTimeout은 지정한 ms만큼 기다린 후 코드를 실행하는 방식이다.