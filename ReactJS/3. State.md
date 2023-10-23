# State

#### State란, 컴포넌트가 가질 수 있는 상태를 의미한다.

```js
const [state, setState] = useState(초기값);
```

state, setState를 배열 형태로 리턴해줌.  
상태를 불러올때는 state를, 업데이트 하려면 setState를 불러주면 됨.  
state 말고 사용할 목적에 따라 이름을 변경해도 무관.

```js
const [chance, setChance] = useState(20);
```

위 코드대로 하면 chance라는 State가 생기고, 초기값은 20으로 가지게 된다.  
만약 chance의 State값을 변경하고 싶다면

`setChance(변경할값);` 코드를 사용할 수 있다.  
이렇게 하면 chance의 값이 변경된 값으로 변하게 된다.

setState를 써서 State 값을 변경하면 렌더링을 다시한다.
