# Styled Component

#### Styled Component란 쉽게 말해 CSS를 JS 내에서 사용할 수 있게 해주는 것!

```sh
npm install styled-components
```

Styled Component는 styled-components라는 NPM 패키지명을 가지고 있으며,  
위와 같은 명령어로 설치할 수 있다.

```js
import styled from "styled-components";

styled.p`
  font-size: 20px;
  font-weight: 600;
`;
```

이렇게 코드를 짜면 위 css 코드가 적용된 p태그가 하나 생긴것이다.  
Styled Component는 React 컴포넌트이기 때문에 아래처럼 자유롭게 리턴하여 사용할 수 있다.

```js
import React from "react";
import styled from "styled-components";

const LoginButton = styled.button`
  background-color: skyblue;
  color: white;
  cursor: pointer;
`;

function App() {
  return <LoginButton>로그인</LoginButton>;
}

export default App;
```
