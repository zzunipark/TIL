# GlobalStyle

#### GlobalStyle이란 말 그대로 전역 스타일이다.

```sh
npm install styled-components
```

```js
import { createGlobalStyle } from "styled-components";
```

^ Styled-Components 패키지를 추가해주고, `createGlobalStyle`을 Import해주자.

```js
const GlobalStyle = createGlobalStyle`
body {
    margin: 0;
    padding: 0;
}
`;

export default GlobalStyle;
```

GlobalStyle을 Export해준 후, App.js에서 Import해 Return해주면 스타일이 적용된다.

이 GlobalStyle을 이용해서 폰트도 적용할 수 있다.
