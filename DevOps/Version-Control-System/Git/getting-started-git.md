# Git 시작하기

#### Git은 시작할 때 두가지 방법 중 하나를 선택하여 시작할 수 있다.

- Visual Studio Code, Git Bash GUI와 같은 GUI 환경을 이용하여 Git을 다루는 방법
- Git Bash, CMD, Terminal과 같은 CLI 환경에서 Git 명령어를 입력하여 사용하는 방법

<small> 혹시라도 누가 이 TIL을 보고 있다면, 본인은 GUI, CLI를 둘 다 사용해본 사람으로써 처음엔 GUI를 쓰다 개념이 박히면, CLI를 쓰는걸 추천하고 싶다.</small>

<hr>

### 사용자 계정 설정하기

```
$ git config --global user.name "GitHub 이름"
$ git config --global user.email "GitHub 계정 이메일"
```

- 위 명령어를 실행하면, Git에 자신의 GitHub 이름과 GitHub 계정 이메일을 등록하게 된다.
- 이런 과정을 거쳐야 Git의 대부분의 명령어가 정상적으로 작동한다.

### 만약 사용자 계정을 변경하고 싶다면?

- 위와 똑같은 과정을 거치면 된다. 만약, 지금 자신이 등록한 이름과 계정 이메일이 궁금하다면 하단의 명령어를 실행해보면 된다.

```
$ git config user.name
$ git config user.email
```
