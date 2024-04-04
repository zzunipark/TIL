# Bring HTML Element / HTML 요소 갖고오기

<hr>

### id로 element 찾고 수정하기
```js
const title = document.getElementById("title");

title.innerText = "Got you!";

console.log(title.id);
console.log(title.className);
```

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE-edge">
    <title>Momentum</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <h1 id="title">Grab me!</h1>
    <script src="app.js"></script>
</body>

</html>
```

### 그 외에..
그 외에 정말 많은 함수들을 사용할 수 있다.
- class나 tag로 element를 가져오는 등 다양하게 HTML Element를 갖고올 수 있다.