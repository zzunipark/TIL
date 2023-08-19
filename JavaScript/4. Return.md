# Return / 반환값

#### 반환값이란?
- 함수에서 반환하는 값

<hr>

### 한국나이 계산해보기
```js
const age = 96;
function calculateKrAge(ageOfForeigner) {
    return ageOfForeigner + 2;
}

const krAge = calculateKrAge(age);

console.log(krAge) // -> 98 출력
```