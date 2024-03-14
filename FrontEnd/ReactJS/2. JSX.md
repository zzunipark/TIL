# JSX

#### JSX를 사용하면 코드를 더 간결하고 쉽게 짤 수 있다.

- CreateElement 등을 사용하지 않고도 쉽게 코드를 짤 수 있다.

일반적으로 브라우저는 JSX 문법을 이해하지 못하기 때문에,
변환 작업이 필요한데 임시로 Babel Standalone을 이용해 변환 작업을 진행해준다.

```jsx
const Title = () => (
  <h3 id="title" onMouseEnter={() => console.log("mouse enter")}>
    Hello I'm a title
  </h3>
);
const Button = () => (
  <button
    style={{
      backgroundColor: "tomato",
    }}
    onClick={() => console.log("I'm Clicked")}
  >
    Click me
  </button>
);
const Container = (
  <div>
    <Title />
    <Button />
  </div>
);
```

위처럼 코드를 짤 수 있다.

> 컴포넌트를 만들고 렌더링해서 다른 곳에서 사용할 때는 항상 대문자로 써야한다.
