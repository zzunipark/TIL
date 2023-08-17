# Function / 함수

#### 함수란?
- 함수는 반복해서 사용하는 코드 조각이다.

<hr>

### 이름 출력하기

```js
function sayHello() {
    console.log("Hello, World!");
}

sayHello(); // -> Hello, World! 출력

function sayHelloName(nameOfPerson, age) {
    console.log("Hello my name is " + nameOfPerson + " age : " + age);
}

sayHelloName("Kim", 10); // -> Hello my name is Kim age : 10 출력
sayHelloName("Park", 20); // -> Hello my name is Park age : 20 출력
sayHelloName("Lee", 30); // -> Hello my name is Lee age : 30 출력
```

### 산수하기

```js
function plus(firstNumber, secondNumber) {
    console.log(firstNumber, secondNumber);
}

function divide(a, b) {
    console.log(a / b);
}

plus(2, 4); // -> 2 + 4를 실행한 값을 출력함
divide(2, 4) // -> 2 / 4를 실행한 값을 출력함
```

### 배열 안에 함수 넣기
```js
const player = {
    name: "minjun",
    sayHello: function(otherPersonName) {
        console.log("Hello, " + otherPersonName + "Nice to meet you!");
    },
};

console.log(player.name);
player.sayHello("Park");
```