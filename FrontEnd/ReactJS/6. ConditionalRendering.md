# Conditional Rendering

#### 특정한 조건에 따라 렌더링이 달라지는 것

```js
import React, { useState, useEffect } from "react";

function App() {
  const [condition, setCondition] = useState(false);
  const toggle = () => setCondition(!condition);
  useEffect(() => {
    console.log(condition);
  }, [condition]);
  return <button onClick={toggle}>Toggle</button>;
}
```

위 코드를 실행하게 되면, `condition` 값이 버튼을 누를때마다 바뀌게 된다.  
이걸 응용해서 true면 true를, false면 false를 페이지에 표시하도록 해보자.

```js
import React, { useState, useEffect } from "react";

function App() {
  const [condition, setCondition] = useState(false);
  const toggle = () => setCondition(!condition);
  useEffect(() => {
    console.log(condition);
  }, [condition]);
  return (
    {condition ? <p>true</p> : <p>false</p>}
    <button onClick={toggle}>Toggle</button>
  )
}
```

위 코드를 이용해 이제 우린 조건에 따라 다르게 페이지를 렌더링할 수 있다.
