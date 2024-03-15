# 원격 Repository를 로컬 Repository에 연결하기

#### Git에는 저장소라는 개념이 있다.
- 우리가 흔히 GitHub에서 소스코드를 보는 바로 그 곳을 원격 저장소라고 부를 수 있다.
- 그리고, 그 원격 저장소와 연결된 내 컴퓨터의 폴더를 로컬 저장소라고 부를 수 있다.

<hr>

### 레포지토리 생성하기

- 먼저, GitHub에서 Repository를 하나 만든다.

### 로컬 폴더 생성하기
<small>사실, `git clone` 명령어를 이용하여 원격 저장소의 모든 파일과 폴더, 설정을 새로운 로컬 폴더에 그대로 복사해오는 방법이 있긴 하지만, 우선 이 방법도 알아둬야 한다.</small>

- 컴퓨터에서 폴더를 하나 만들면 된다.
- 그 후 Git Bash나 터미널을 연 후, 그 폴더의 디렉토리로 이동한다. 대부분 하단의 명령어로 이동하면 된다.

```
$ cd 로컬 폴더 디렉토리
```

<small>또는, Windows의 경우 폴더를 열고 폴더 디렉토리 창에 cmd라고 입력하면 자동으로 그 폴더에서 cmd가 실행된다. MacOS의 경우 터미널 화면에 폴더를 끌어오면 자동으로 그 디렉토리로 이동이 된다.</small>

- 터미널에서 하단의 명령어를 입력한다. `git init` 명령어를 이용하면 main(master) branch가 생성된다.

```
$ git init
```

<hr>

### Remote 등록하기

- `git init` 명령어 실행 후, GitHub에서 아까 생성한 Repository로 이동한 후, 초록색 Code 버튼을 클릭한다. 그럼 https로 시작하고, .git으로 끝나는 링크가 하나 있을텐데, 그대로 복사해온다.
- 그 후 터미널에서 아래의 명령어를 입력한다.

```
$ git remote add origin 링크
```

- 위 명령어를 입력하면 로컬 레포지토리와 원격 레포지토리의 연동?이 완료된다.

<hr>

다음 글 : [스테이징과 커밋 하기](https://github.com/zzunipark/TIL/blob/main/Git/staging-and-commit.md)