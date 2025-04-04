# AMI ( Amazon Machine Image )

AMI는 인스턴스 실행에 필요한 정보를 모은 단위를 뜻한다.  
AMI에는 OS, 아키텍쳐 타입, 저장공간 용량 등이 포함된다.

## AMI의 특징

- AMI를 사용해 EC2를 복제하거나 다른 리전 또는 계정으로 전달이 가능함.
- 스냅샷을 기반으로 AMI 구성 또한 가능

## AMI의 구성

- 1개 이상의 EBS 스냅샷
- 인스턴스 저장 기반의 경우 루트 불륨에 대한 템플릿
- 사용 권한
- 블록 디바이스 맵핑
- 두가지 타입이 존재항
    - <strong>EBS 기반 (네트워크스토리지), 스냅샷을 기반으로 루트 스토리지 생성</strong>
    - <strong>인스턴스 저장 기반 (로컬스토리지), S3에 저장된 템플릿을 기반으로 생성</strong>