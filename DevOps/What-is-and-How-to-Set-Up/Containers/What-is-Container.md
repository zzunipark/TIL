# 컨테이너란 무엇인가요?

컨테이너는 가상화 기술 중 하나이며, 대표적으로 리눅스 컨테이너(LXC)가 있습니다.  
기존에는 OS를 가상화 시켰지만, 지금은 OS레벨의 가상화로 프로세스를 격리하여 실행하는 방식입니다.

#### Hypervisor vs Container

기존에 VM은 Host OS를 가상화 시키기 위해 하이퍼바이저 위에 Guest OS를 올려 사용합니다.
이를 통해 기존의 VM은 Host와 VM 사이를 거의 완벽하게 분리시킬 수 있다는 장점이 있었습니다.  
다만 OS 위에 OS를 올리는 개념이기 때문에 무겁고, 많은 리소스가 요구됩니다.  
다만 컨테이너는 커널을 공유하고, 어플리케이션 실행에 필요한 바이너리만 올라가기 떄문에 가볍고 io 처리가 빠릅니다.
