# Array / 배열

#### Array란?
- Array는 배열로, 여러 변수를 한번에 선언할 때 사용한다.

<hr>

### .push
- 배열 안에 값을 추가할 때에는 .push를 사용한다.

```js
const alphabet = ["A", "B"];
alphabet.push("C");
console.log(alphabet) // -> ABC를 출력함.
```

### object
- 한 배열 안 여러개의 Property를 묶을 수 있음

```js
const player = {
    name: "minjun",
    points: "10"
};

console.log(player.name); // -> minjun을 출력함.
console.log(player["name"]); // -> minjun을 출력함
```