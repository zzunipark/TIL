# `<link>` 태그

#### `<link>` 태그란?
- `<link>` 태그는 현재 문서와 외부 리소스 사이의 관계를 정의할 때 사용한다.
- `<link>` 태그는 주로 favicon과 css 파일 등을 연결할 때 주로 사용된다.
- `<link>` 태그는 빈 요소이며, 속성만을 포함하고 있으므로 닫는 태그가 필요하지 않다.

```html
<head>
    <link rel="" href="" type="">
</head>
```
<small>`<link>` 태그 안에는 crossorigin, href, hreflang, rel, type 등이 들어갈 수 있는데, 대표적으로 href, rel, type이 가장 많이 사용된다.</small>

- "rel" 속성은 연결된 리소스와의 관계를 지정하는 역할을 한다.
- "href" 속성은 연결할 리소스의 URL을 지정한다. URL 외에 디렉토리가 입력될 수 있다.
- "type" 속성은 연결된 리소스의 자료 유형을 지정한다.

<hr>

다음 글 : [title-tag](https://github.com/zzunipark/TIL/blob/main/HTML/tags/title-tag.md)