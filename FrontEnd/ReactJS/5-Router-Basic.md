# Router-Basic

#### 사용자가 요청한 URL에 따라 알맞은 페이지를 보여주는 것

```
npm install react-router-dom
```

npm이나 그 외 패키지 매니저를 통해 프로젝트 내에 react-router-dom을 추가해준다.

그 후 `{ BrowserRouter }`를 import 해준다.

```js
import { BrowserRouter } from "react-router-dom";
```

그 후 라우팅하고 싶은 컴포넌트들을 App 컴포넌트에 import해준 다음 `<Routes>` 태그 내에 `<Route path="주소" element={컴포넌트} />` 형식에 맞게 추가해 라우팅 해주면 된다.

이제 각 컴포넌트에서 `<Link to="/이동할곳">내용</Link>` 과 같은 `<Link>` 태그를 추가해주면 된다.
