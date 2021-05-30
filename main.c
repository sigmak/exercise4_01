#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 100

typedef struct {
	int id;
	int arrival_time;
	int service_time;
}element;

typedef struct {
	element queue[MAX_SIZE];
	int front, rear;
}QueueType;

QueueType queue;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(QueueType* q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType* q) {
	return (q->front == q->rear);
}

int is_full(QueueType* q) {
	return ((q->rear + 1) % MAX_SIZE == q->front);
}

void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("큐가 포화상태입니다.");
		q->rear = (q->rear + 1) % MAX_SIZE;
		q->queue[q->rear] = item;
	}
}

element dequeue(QueueType* q) {
	if (is_empty(q))
		error("큐가 공백상태 입니다.");
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

element peek(QueueType* q) {
	if (is_empty(q))
		error("큐가 공백상태 입니다.");
	return q->queue[(q->front + 1) % MAX_SIZE];
}

double random() {
	return rand() / (double)RAND_MAX;
}

int duration = 10;
double arrival_prob = 0.7;
int maxserv_time = 5;
int clock_c;
int customers;
int served_customers;
int waited_time;
int iscustomerarrived() {
	srand(time(NULL)); // 난수 초기화
	if (rand() < arrival_prob)
		return TRUE; //고객 들어옴
	else return FALSE;
}

void insert_customer(int arrival_time) {
	element customer;
	customer.id = customers++;
	customer.arrival_time = arrival_time;
	customer.service_time = (int)(maxserv_time * random()) + 1;
	enqueue(&queue, customer);
	printf("고객 %d이 %d분에 들어옵니다. 서비스 시간은 %d분입니다.\n", customer.id, customer.arrival_time, customer.service_time);
}

int remove_customer() {
	element customer;
	int service_time = 0;
	if (is_empty(&queue))return 0;
	customer = dequeue(&queue);
	service_time = customer.service_time - 1;
	served_customers++;
	waited_time += clock_c = customer.arrival_time;
	printf("고객 %d이 %d분에 서비스를 시작합니다. 대기시간은 %d분이었습니다.\n", customer.id, clock_c, clock_c - customer.arrival_time);
	return service_time;
}

print_stat() {
	printf("서비스받은 고객수=%d\n", served_customers);
	printf("전체 대기 시간=%d분\n", waited_time);
	printf("1인당 평균 대기 시간=%f\n", (double)waited_time / served_customers);
	printf("아직 대기중인 고객수=%d\n", customers - served_customers);
}

int main() {
	int noserviceman = 3;
	int service_time[100] = { 0 };
	clock_c = 0;
	while (clock_c < duration) {
		clock_c++;
		printf("현재시각=%d\n", clock_c);
		if (iscustomerarrived()) {
			insert_customer(clock_c);
		}
		for (int k = 0; k < noserviceman; k++) {
			if (service_time[k] > 0)
				service_time[k]--;
			else if (service_time == 0)
				service_time[k] = remove_customer();
		}
	}
	system("pause");
	return 0;
}