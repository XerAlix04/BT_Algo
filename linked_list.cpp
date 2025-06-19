Cau truc tu tro
struct sv{
	char hoten[20];
	float diem;
	struct sv *tiep;
};

Cau truc nut
typedef struct node{
	int data;
	struct node* next;
}node_t;

Ham tao nut moi
node_t* create_node(int x){
	node_t* new_node = (node_t*)malloc(sizeof(node_t));
	new_node->data = x;
	new_node->next = NULL;
	return new_node;
}

Ham them mot nut vao dau
void add_front(node_t** head, int x){
	node_t* new_node = create_node(x);
	new_node->next = *head; //con tro next tro vao head cu
	*head = new_node; //dat head moi
}

Ham them mot nut vao cuoi
void add_back(node_t** head, int data){
	node_t* new_node = create_node(data);
	node_t* current_node = *head;
	if (*head==NULL){
		*head = new_node;
		return;
	}
	while(current_node->next != NULL){
		current_node = current_node->next;
	} //keo con tro current_node ve cuoi
	current_node->next = new_node;
}

Ham duyet danh sach
void print_list(node_t** head){
	
}

Ham xoa mot nut
void remove_node(node_t** head, int x){
	
}
