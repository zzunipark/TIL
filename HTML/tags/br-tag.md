# `<br>` 태그

#### `<br>` 태그란?
- 기본적으로 HTML에서는 코드 내에서 줄바꿈을 해도 줄바꿈이 적용되지 않는다. 이 때 줄바꿈을 하고 싶다면 `<br>` 태그를 사용하면 된다. 
- `<br>` 태그를 사용하지 않고 줄바꿈이 바로 적용되게 하려면 `<pre>` 태그를 사용하면 된다.

```html
<body>
    <p>hi<br>hi</p>
    <pre>
        hi
        hello
    </pre>
</body>
```

<p>hi<br>hi</p>
<pre>
hi
hello
</pre>

<small>Markdown 특성인지 뭔지 `<pre>` 태그를 쓰면 이렇게 나온다. HTML 환경에선 임베드 없이 줄바꿈된 모습만 나온다.</small>

<hr>

다음 글 : [hr-tag](https://github.com/zzunipark/TIL/blob/main/HTML/tags/hr-tag.md)