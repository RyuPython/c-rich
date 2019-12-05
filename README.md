# c-rich

https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5LrsUaDxcDFAXc
위 사이트에 나온 백만장자 프로젝트에 대한 풀이이다.

간단하게 설명하면 우리는 주가가 얼마일지 미리 다 알고있다. 주식을 쭉 사서 최고가일 때 파는 프로그램을 짜야한다.

일반적으로 앞에서부터 생각하게 되는데 이 코드는 뒤에서부터 가는 것이 좋다. 앞에서부터 돌면 최고가를 한번 탐색한 다음, 다시 돌면서 사고팔아야하므로 loop가 2번 쓰인다. 반대로 뒤에서부터 돌면 최고가를 기억해두고 계속 현재가에서 빼면서 매출에 더해주면 되므로 loop가 한번밖에 돌지 않아 훨씬 가벼운 코드를 짤 수 있다.

rich.c는 뒤에서부터 짠 코드이고

rich_forward.c는 앞에서부터 돌 때의 코드를 최대한 가볍게 짜본 것이다.
