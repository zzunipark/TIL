# Event

<hr>

### HTML Element 클릭하면 이벤트 실행하기
```js
const title = document.querySelector("div.hello:first-child h1");

function handleTitleClick() {
    console.log("title was clicked!");
}

title.addEventListener("click", handleTitleClick);
```

그 외에도 여러 Event를 이용해 Event를 감지하고 다양한 액션을 취할 수 있음.