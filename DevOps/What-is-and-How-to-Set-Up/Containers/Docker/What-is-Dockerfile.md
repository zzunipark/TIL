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

#### CMD

CMD는 컨테이너가 시작될 때 실행할 명령어를 지정하는 지시어입니다.  
CMD도 명령어를 Shell Form 또는 Exec Form으로 작성할 수 있습니다.

다만 RUN과의 차이점은

> RUN은 이미지를 빌드할 때 명령어를 실행하는 지시어
> CMD는 이미 만들어진 이미지로 컨테이너를 시작할 때 명령어를 실행하는 지시어

입니다.

주의해야할 점으로는 CMD를 사용할 경우 Shell Form으로 작성해야 환경변수가 불러와집니다.  
Exec Form으로 작성할 경우 환경변수가 불러와지지 않습니다.

```dockerfile
CMD echo $HOME # 환경변수를 인식한다

CMD ["echo", "$HOME"] # 환경변수를 인식하지 않고 $HOME 단어 자체로 출력한다.
```

#### ENTRYPOINT

ENTRYPOINT 역시 컨테이너가 시작 될 때 실행할 명령어를 지정합니다.  
그리고, Shell Form과 Exec Form을 둘 다 사용 가능합니다.

CMD와 거의 동일하지만,

**컨테이너 실행 시 Parameter 값을 대체할 수 없다는 점이 다릅니다.**

#### LABEL

Key-Value 형식으로 작성된 메타데이터를 이미지에 추가한다.

```dockerfile
LABEL <KEY>=<VALUE> <KEY>=<VALUE> ...
```

예시로 아래처럼 작성하고,

```dockerfile
LABEL "name"="zzunipark"
LABEL "version"="1.0"
LABEL "copyright"="zzunipark\
all rights reserved"
```

아래 명령어를 사용하면 Label 데이터를 확인할 수 있다.

```bash
$ docker image inspect --format='' image_name
```

#### ENV

ENV는 환경변수를 설정하는 지시어이다.  
Label과 사용법이 동일하며, (Key-Value 형식) Label은 메타데이터를, ENV는 환경변수를 설정한다.

```dockerfile
ENV NAME="zzunipark"
```

#### EXPOSE

EXPOSE는 컨테이너가 실행될 때 들어오는 트래픽을 특정 포트로 지정하는 지시어이다.

```dockerfile
EXPOSE <PORT>/<PROTOCOL>
```

형식이며, TCP 30000 포트로 지정하고 싶은 경우 아래와 같이 작성하면 된다.

```dockerfile
EXPOSE 30000/tcp
```

#### COPY

Host 내의 파일 또는 디렉터리를 컨테이너의 파일 시스템으로 복사할 때 사용하는 지시어이다.  
아래 형식에 맞게 사용하면 된다.

```dockerfile
COPY [--chown=<USER>:<GROUP>] <source> <destination>
```

```dockerfile
COPY [--chown=zzunipark:zzunipark] test.txt /zzunipark/
```
