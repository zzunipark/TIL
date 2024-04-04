# 프로세스란 무엇입니까?

#### 프로세스란 간단히 말해 현재 실행중인 프로그램을 의미합니다.

이는 메모리에 적재되어, Process Control Block이라는 형태로 OS에 의해 관리되는 상태를 의미합니다.

<small>\* Process Control Block은 특정한 프로세스의 정보를 포함하는 운영체제 커널의 자료구조입니다. 즉, 운영체제가 프로세스 스케줄링을 위한 정보를 가지고 있는 데이터베이스 입니다.</small>

#### 프로세스는 다양한 상태 변화를 겪습니다.

사용자 모드에서 실행이 된 후, 시스템 호출 및 입출력 시 커널 모드로 전환되는 등, 프로세스는 운영체제에 의해서 다양한 상태 변화를 겪게 됩니다.

#### 프로세스에도 구조가 있습니다.

메모리에 프로세스가 올라간 후에 구조는 다음과 같습니다.

1. 텍스트 영역 : 실행 코드를 저장하며, 텍스트 영역은 프로세스가 실행 중에 크기가 변하지 않는 고정 영역입니다.
2. 데이터 영역 : 프로그램 내에서 지정한 전역 변수를 포함하고 있습니다.
3. 힙 : 프로그램 실행중에 동적으로 메모리를 요청한 경우에 할당되는 공간입니다. 메모리가 할당되고, 비할당되며 가변적으로 변하는 공간입니다.
4. 스택 : 프로그램에서 정의한 전역 변수를 포함합니다.
5. 빈 공간 : 가변적인 메모리 할당을 위해 비어있는 메모리 공간입니다.

#### 프로세스에는 정말 다양한 정보들이 있습니다.

| 출력 항목 | 설명                                         |
| --------- | -------------------------------------------- |
| PID       | 프로세스의 식별 번호                         |
| PPID      | 부모 프로세스의 PID                          |
| %CPU      | CPU 사용 비율의 추정치                       |
| %MEM      | 메모리 사용 비율의 추정치                    |
| VSZ       | K 단위 또는 페이지 단위의 가상 메모리 사용량 |
| RSS       | 실제 메모리 사용량                           |
| TTY       | 프로세스와 연결된 터미널                     |
| S         | 현재 프로세스의 상태 코드                    |
| STAT      | 현재 프로세스의 상태 코드                    |

위 말고도 더욱 많은 정보들이 프로세스에 있습니다.  
프로세스 모니터링 명령어마다 제공하는 정보는 다릅니다.