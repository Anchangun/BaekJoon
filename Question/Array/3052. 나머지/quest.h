#pragma once
/*
	Title :
		3052. 나머지

	Quetion :
		두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
		
		예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.

		수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
		
		그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

	
	Condition :
		Input :
		첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

		Output :
		첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.

	Example :
		Input 1 :
			1
			2
			3
			4
			5
			6
			7
			8
			9
			10
		* 각 수를 42로 나눈 나머지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 10이다.
		Output 1 :
			10

		Input 2 :
			42
			84
			252
			420
			840
			126
			42
			84
			420
			126
		* 모든 수를 42로 나눈 나머지는 0이다.

		Output 2 :
			1

		Input 3 :
			39
			40
			41
			42
			43
			44
			82
			83
			84
			85
		* 각 수를 42로 나눈 나머지는 39, 40, 41, 0, 1, 2, 40, 41, 0, 1이다. 서로 다른 값은 6개가 있다.
		Output 3 :
			6

		Limited - Time 
			1초
		Limited - Space 
			128MB
*/