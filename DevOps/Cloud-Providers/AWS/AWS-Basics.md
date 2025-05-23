# AWS 기본 개념

## AWS Region 개념

AWS는 2024년 6월 기준 33개의 리전을 보유하고 있으며, 105개의 가용 영역을 보유하고 있습니다.  
여기서, 리전과 가용 영역의 개념에 대해 설명해 보겠습니다.

> 리전

리전은 AWS 서비스가 제공되는 데이터 서버의 물리적 위치입니다.  
리전은 아시아 태평양, 유럽, 아프리카, 북아메리카 등 전 세계에 분포되어 있습니다.

우리나라 서울에도 한개의 데이터센터가 있으며, 일본에는 오사카, 도쿄 두곳에 데이터센터가 있습니다.
각 리전에는 고유 코드가 존재하는데, 서울 리전은 ap-northeast-2, 미국 동부는 us-east-1과 같습니다.

각 리전별로 사용할 수 있는 서비스 및 인스턴스 유형이 다르기 때문에, 신중히 선택해야합니다.

> 가용 영역

가용 영역은 리전의 하부 단위로, 하나의 리전에는 반드시 두개 이상의 가용 영역이 존재하며 하나의 가용 영역에는 하나 이상의 데이터센터로 구성되어 있습니다.  
이 모든 가용 영역 사이에는 매우 빠른 전용 네트워크로 연결되어 있으며, 서로 100km 거리 내에 존재합니다.  
이를 통해 빠른 네트워크 속도를 보장함과 동시에 자연재해와 같은 상황에서 HA를 보장할 수 있습니다.

> 엣지 로케이션

엣지 로케이션은 AWS CloudFront (CDN) 등의 여러 서비스를 가장 빠른 속도로 제공하기 위한 POP 거점을 의미합니다.  
CDN은 Content Delivery Network의 줄임말로, 전 세계에 엣지를 두어 사용자가 어떠한 리소스를 요청했을때  
가장 가까운 엣지로 라우팅하여 낮은 지연시간을 제공하는 역할을 합니다.

만약, 샌프란시스코에 거주하는 A씨가 유럽 가용 영역에 구동중인 S3의 에셋에 접근하려면 최소 200ms의 지연시간이 발생하겠지만,  
자동으로 샌프란시스코에서 가장 가까운 엣지에서 에셋에 접근할 수 있게 하여 빠른 속도를 보장해 줍니다.
