# 스테이징과 커밋 하기

#### Git에는 Area라는 개념이 있다.
- Working Area, Staging Area, Repository Area 이렇게 세가지가 있다.
- Working Area는 내가 작업 중인 공간, 즉 스테이지에 올라가지 않은 파일들이 있는 곳이다.
- Staging Area는 `git add`가 된 파일들이 `git commit`을 기다리는 공간이고,
- Repository Area는 `git commit`된 파일 또는 `git push`된 파일들이 있는 공간이다.

<hr>

### Working Area에 있는 파일들을 Staging Area로 옮기기

- 먼저, `git add .` 명령어를 통해 로컬 저장소의 모든 수정사항을 스테이지에 올린다.
- 여기서 수정사항은 로컬 저장소에서의 변경사항을 말하는데, 새로 파일이 생성되었거나, 내용이 수정되었거나, 삭제되었거나, 이름이 변경되는 등을 말한다.
- 만약 특정 파일만 스테이지에 올리고 싶다면, `git add 파일명` 명령어를 이용하면 된다.

<hr>

### 스테이지에 올라온 파일들을 커밋하고, 푸시하기

- 먼저, 정상적으로 스테이지에 파일들이 올라왔는지 확인해 보자. `git status` 명령어를 사용하면 확인할 수 있다.
- 만약 아래처럼 뜨면, 스테이지에 파일들이 올라간것이다.

```
$ git status
On branch <브랜치명>
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        상태: 디렉토리/파일명
```

- 만약 이렇게 뜨지 않고 아래처럼 뜬다면, 스테이징이 되지 않은것이니 다시 `git add .` 명령어를 사용하자.

```
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        상태: 디렉토리/파일이름

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        디렉토리.파일이름

no changes added to commit (use "git add" and/or "git commit -a")
```

- 이제 스테이징이 된것까지 확인했으니, 커밋과 푸시를 해보겠다.
- `git commit -m "커밋 메시지"` 명령어를 실행하고, `git push` 명령어를 실행하면 된다. 커밋 메시지는 변경사항을 간략하게 요약하여 적으면 된다.

<small>~~만약 오류가 난다면 오류 메시지를 가지고 폭풍 구글링을 해보도록 하자.~~</small>

명령어가 성공적으로 실행되었다면, Commit과 Push가 완료된 것이다.

<hr>

다음 글 : [Branch란?](https://github.com/zzunipark/TIL/blob/main/Git/what-is-branch.md)