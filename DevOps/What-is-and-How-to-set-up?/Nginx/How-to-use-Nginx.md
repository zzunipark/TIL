# Nginx를 어떻게 설치하고 사용하나요?

```
$ sudo apt update -y && sudo apt upgrade -y && sudo apt install nginx
```

명령어를 실행하면 패키지 목록 업데이트와 업그레이드가 진행되며, 동시에 Nginx를 설치합니다.  
Nginx의 디렉토리는 `/etc/nginx` 입니다.

#### 웹 서버 파일 업로드하기

Nginx를 웹 서버로써 사용하려면, `/var/www/html` 디렉토리 내부에 파일을 업로드하면 됩니다.
