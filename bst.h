#ifndef bst_h
#define bst_h

struct node{
    int data;
    struct node* left;
    struct node* right;
    char* question;
    char* guess;
};


struct node* create_game_tree();
void play_game();
struct node* insert(struct node* root, int data, char* question, char* guess);
void destroy_tree(struct node* root);


#endif 