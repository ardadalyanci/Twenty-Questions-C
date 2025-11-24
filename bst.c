
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"


struct node* create_game_tree(){

    struct node* root = NULL;
    root = insert(root, 100, "Does it grow underground?", "");
    insert(root, 50, "Is it long in shape?", "");
    insert(root, 25, "Is it orange in color?", "");
    insert(root, 15, "", "It's a carrot!");
    insert(root, 35, "", "It's a parsnip!");
    insert(root, 75, "Is it red in color?", "");
    insert(root, 65, "", "It's a radish!");
    insert(root, 85, "", "It's a potato!");
    insert(root, 150, "Does it grow on a tree?", "");
    insert(root, 125, "Is it red in color?", "");
    insert(root, 115, "", "It's an apple!");
    insert(root, 135, "", "It's a peach!");
    insert(root, 175, "Is it red in color?", "");
    insert(root, 165, "", "It's a tomato!");
    insert(root, 185, "", "It's a pea!");
    return root;

}

void play_game(){

    printf("Welcome! Press 'q' to quit or any other key to continue: ");
    char choice;
    scanf(" %c", &choice);
    if(choice == 'q'){
        return;
    }
    struct node* root = create_game_tree();
    while(1){
char answer ;
struct node* current = root;
    printf("\nYou think of a fruit or vegetable and I will try to guess it!\n\n");
    
    while(current != NULL){
        
        if(strcmp(current->guess, "")!=0){


            while(1){
            printf("%s\n", current->guess);
            
            printf("y/n: ");
            scanf(" %c", &answer);
            if(answer == 'y') printf("\nI win!");
            else if(answer == 'n') printf("\nYou win!");
            else{ printf("Invalid input..."); 
                continue;
            }
            current=NULL;
            break;
                    }
        }

        else{

            while(1){

                printf("%s\n", current->question);
                printf("y/n: ");
                scanf(" %c", &answer);
                if(answer == 'y'){
                    current = current->left;
                }
                else if(answer == 'n'){
                    current = current ->right;
                }
                else{
                    printf("Invalid input try again...\n");
                    continue;
                }
                break;
            }
        }


        }
    printf("\nPress 'q' to quit or any other key to continue: ");
    scanf(" %c", &answer);
    if(answer == 'q') {
        destroy_tree(root);
        break;
    }
    else continue;
        
        
    }




}





struct node* insert(struct node* root, int data, char* question, char* guess){

    if(root == NULL){
        struct node* new_node = malloc(sizeof(struct node));
        new_node -> data = data;
        new_node->question = question;
        new_node->guess = guess;
        new_node->left=NULL;
        new_node->right=NULL;

        return new_node;
    }

    if(data < root->data){
        root->left = insert(root->left, data, question, guess);
    }
    else if(data > root->data){
        root -> right = insert(root->right, data, question, guess);
    }



    return root;





}

void destroy_tree(struct node* root){
    if(root == NULL){
        return;
    }


    destroy_tree(root->left);
    destroy_tree(root->right);



    free(root);
}