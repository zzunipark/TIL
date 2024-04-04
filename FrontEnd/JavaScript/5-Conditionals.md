# Conditionals / 조건문

#### 조건문이란?
- 어떤 조건이 있을 때 조건에 따라 실행 결과를 다르게 해주는 코드문

<hr>

### 술을 마실 수 있는 나이인지 판단하기
```js
const age = prompt("How old are you?");

/*
true || true === true
false || true === true
true || false === true
false || false === false

true && true === true
false && true === false
true && false === false
false && false === false
*/
 
if(isNaN(age) || age < 0>) {
    console.log("Please write a real positive number");
} else if (age < 18) {
    console.log("You are too young");
} else if (age >= 18 && age <= 50) {
    console.log("You can drink");
} else if (age > 50 && age <= 80) {
    console.log("You should exercise")
} else if (age === 100) {
    console.log("wow you are wise");
} else if (age > 80) {
    console.log("You can do whatever you want.")
}
```

### 다른 Type로 전환하기
```js
console.log(typeof "15", typeof parseInt("15")); // -> string number 출력, 즉 string이 아닌 number로 type를 변환함

const age = prompt("Input Number"); // abc 입력

console.log(pareseInt(age)); // -> NaN 출력 ( Not a Number )
```

### ParseInt 한 후 age가 number가 아니면 메시지 띄우기
```js
const age = parseInt(prompt("How old are you?")); // -> 15 입력

console.log(age); // number로 출력됨
```

### Number인지 판별하기
```js
const age = parseInt(prompt("How old are you?"));

console.log(isNaN(age)); // -> 텍스트를 입력하면 true를 출력하고, 수를 입력하면 false를 출력함.

if(isNaN(age)) {
    // true이면 이 줄이 실행되고, false라면 실행되지 않음. 무조건 true 또는 false여야 함.
    console.log("Please write a number");
} else /*false이면 이 코드가 실행됨*/ {
    console.log("You wrote number!");
}
```