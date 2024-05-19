# DockerFile이란 무엇인가요?

Dockerfile이란 Docker에서 이미지를 생성하기 위한 용도로 작성하는 파일입니다.  
쉽게 내가 만들 이미지에 대한 정보를 적어둔 파일이라고 생각하면 됩니다.

## DockerFile 지시어 종류

#### FROM

Dockerfile에서 FROM은 베이스가 될 이미지를 지정하는 지시어입니다.  
이미지를 만들 때에는 보통 기본적인 요소들이 구성되어있는 상태에서 시작하는데,  
이를 베이스 이미지라고 합니다.

FROM에서 베이스 이미지와 태그를 지정하면 레지스트리에서 해당 이미지를 풀해옵니다.

```dockerfile
FROM ubuntu:latest
```

#### RUN

말 그대로 명령어를 실행하여 이미지에 포함시키는것을 의미합니다.

컨테이너를 제작할 때 꼭 필요한 소프트웨어나 라이브러리가 있거나,  
특정 위치에 파일이나 디렉토리가 존재해야 할 수도 있습니다.

이떄 RUN 지시어를 사용하여 설치 구문이나 파일/디렉토리 생성 구문을 실행시킵니다.

```dockerfile
RUN <COMMAND>

RUN ["<EXECUTABLE>", "<PARAMETER>"]
```

위와 같이 Shell Form 또는 Exec Form으로 실행이 가능합니다.

```DOCKERFILE
RUN /bin/bash -c `echo zzunipark`

RUN ["bin/bash", "-c", "echo zzunipark"]
```
