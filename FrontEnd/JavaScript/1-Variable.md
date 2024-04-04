# 변수 / Variable

#### 변수란?
- 변수는 값을 저장하는 하나의 저장소이다.

<hr>

### const
- Constant (상수)
- 바뀌지 않는 값. 계속 유지됨.

```js
const a = 10;
const hello = "hello";

console.log(a + 1); // -> 11을 출력함
console.log(hello); // -> hello를 출력함
```

### let
- 바뀌는 값. 선언 후 값을 변경할 수 있음.

```js
let name = "minjun";

console.log(name); // -> minjun을 출력함

name = "park";

console.log("new name is " + name); // -> new name is park을 출력함
```

### var
- 언제 어디서나 바뀔 수 있는 값.
- 다만 특성상 값을 보호할 수 없기 때문에 권장하지 않음

```js
var name = "minjun";
console.log(minjun);
```