# FTP를 어떻게 연결하나요?

### Windows

Windows 운영체제의 경우 [Filezilla Client](https://filezilla-project.org/)를 사용하면 쉽고 간편하게 파일을 전송할 수 있다.  
호스트에 IP 또는 FQDN을 입력하고, 사용자 계정 정보를 입력하면 간단하게 접속할 수 있다.  
당연하게도 SFTP와 FTPS로도 접속이 가능하다.

### Linux / UNIX

ftp 기본 명령어를 사용하면 된다. 대표적으로 사용되는 명령어로는

> FTP 접속하기

```
$ ftp [ip] [port]
```

> 원격 서버의 디렉토리 변경하기

```
$ cd [디렉토리]
```

> 로컬 컴퓨터의 대상 디렉토리 변경하기

```
$ lcd [디렉토리]
```

> 원격 서버에서 파일 다운로드하기

```
$ get [파일명]
```

> 로컬 컴퓨터에서 원격 컴퓨터로 파일 업로드하기

```
$ put [파일명]
```

> 접속 종료하기

```
$ bye
```

정도가 있다.
