#include <stdio.h>

// ---- ������ ----
// ������ ������ �ּҸ� �������ִ� ����
// ������ ���� ���� ���: ������ ������ �ڷ��� *(�ֽ�Ÿ����ũ) ������;
// ������ ���� �ȿ� ����� �ּҷ� �����ؼ� �ּ� ���� ���� Ȯ���� ����
// *������ ���� �������� Ȯ���� �� �ִ�. �̸� ��������� �Ѵ�.
// ������ ������ �Ϲ� ������ �ּҸ� ������ �� �ְ�,
// ���� ������ ������ ������ ������ �ּҸ� ������ �� �ְ�,
// ���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
// ���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
// ...;

int main()
{
	int num = 5;  // int - ����
	int* ptr;     // int* - int �ڷ����� ���� ������ �ּ�
	int** dptr;
	int*** tptr;

	ptr = &num;
	dptr = &ptr;
	tptr = &dptr;

	printf("num�� �ּ�: %p\n", &num);
	printf("ptr�� ��: %p\n", ptr);

	printf("\nnum�� ��: %d\n", &num);
	printf("ptr�� �̿��� num�� ��: %d\n", *ptr);
	printf("dptr�� �̿��� num�� ��: %d\n", **dptr);
	printf("tptr�� �̿��� num�� ��: %d\n", ***tptr);

	printf("\nptr�� �ּ� %p\n", &ptr);
	printf("dptr�� ��: %p\n", dptr);

	printf("\ndptr�� �ּ�: %p\n", &dptr);
	printf("tptr�� ��: %p\n", tptr);

	int num;
	int* ptr;

	ptr = &num;

	printf("�Է�: ");
	scanf("%d", ptr);

	printf("���: %d\n", num);

	return 0;
}