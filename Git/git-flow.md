# Git Flow

#### Git Flow를 알면 Git을 이용해 팀원과 협업을 할 때 개발을 용이하고 수월하게 할 수 있도록 해준다.

> 아래 내용만 기억하면 된다.

Git Flow에서 사용하는 브랜치는 크게 4가지가 있는데,

- Main(Master)
- Develop
- Feature
- Hotfix

차례대로 즉시 배포해도 문제가 없는 Main(Master) 브랜치, 아직 버그나 기타 오류 등등이 완전하게 고쳐지지 않은 Develop 브랜치, 그리고 새로운 기능이 추가되었을 때 새롭게 생성하여 만드는 Feature 브랜치, 마지막으로 긴급하게 수정할 때 사용하는 Hotfix 브랜치이다.

#### 관리 방법은 다음과 같다.

1. 새로운 기능을 추가해야 한다면 Feature/기능명 브랜치를 하나 생성하고 그 안에서 개발한 후, Develop 브랜치로 PR 생성.
2. 만약 중대한 오류나 긴급하게 고쳐야할 사항이 있다면 Hotfix/기능명 브랜치를 생성 한 후, 개발하고 Main(Master) 또는 Develop 브랜치로 PR 생성.
3. Develop 브랜치 내 기능들이 정상적으로 동작하는지 QA를 통해 확인하고, Main(Master) 브랜치로 PR 생성.
