#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
int maxservtime = 5;
int clock;
int customers;
int served_customers;
int waited_time;

int iscustomerarrived() {
	if (radom() < arrival_prob)
		return TRUE; //고객 들어옴
	else return FALSE;
}

void insertcustomer(int arrivaltime) {
	element customer;
	customer.id = customers++;
	customer.arrivaltime = arrivaltime;
	customer.servicetime = (int)(maxserv_time * random()) + 1;
	enqueue(&queue, customer);
	printf("고객 %d이 %d분에 들어옵니다. 서비스 시간은 %d분입니다.\n", customer.id, customer.arrivaltime, customer.servicetime);
}

int remove_customer() {
	element customer;
	int service_time = 0;
	if (is_empty(&queue))return 0;
	customer = dequeue(&queue);
	servicetime = customer.servicetime - 1;
	served_customers++;
	waitedtime += clock = customer.arrivaltime;
	printf("고객 %d이 %d분에 서비스를 시작합니다. 대기시간은 %d분이었습니다.\n", customer.id, clock, clock - customer.arrival_time);
	return service_time;
}

print_stat() {
	printf("서비스받은 고객수=%d\n", served_customers);
	printf("전체 대기 시간=%d분\n", waited_time);
	printf("1인당 평균 대기 시간=%f\n", (double)waitedtime / servedcustomers);
	printf("아직 대기중인 고객수=%d\n", customers - served_customers);
}

void main() {
	int noserviceman = 3;
	int service_time[100] = { 0 };
	clock = 0;
	while (clock < duration) {
		clock++;
		printf("현재시각=%d\n", clock);
		if (iscustomerarrived()) {
			insert_customer(clock);
		}
		for (int k = 0; k < noserviceman; k++) {
			if (service_time[k] > 0)
				service_time[k]--;
			else if (service_time == 0)
				servicetime[k] = removecustomer();
		}
	}
}