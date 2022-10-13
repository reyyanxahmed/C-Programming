#include <iostream> 
#include <stdlib.h> 
using namespace std;   
typedef struct Node 
{     
    int data;     
    struct Node *next;     
    struct Node *prev;     
    Node(int d)    
    {         
        data = d;         
        next = NULL;         
        prev = NULL;     

         
          
    }
       
}
Node;   
    
Node *insertfirst(Node *head, int a) 
{   
     Node *newnode = new Node(a);     
     if (!head)     
       {         
            newnode->next = newnode;         
            newnode->prev = newnode;         
            return newnode;     
        }     
        
     Node *last = head->prev;     
            head->prev = newnode;     
            newnode->next = head;     
            newnode->prev = last;     
            last->next = newnode;     
            return newnode; 
}   
            
Node *insertlast(Node *head, int a) 
{     
     Node *newnode = new Node(a);     
     if (!head)     
        {         
                newnode->next = newnode;         
                newnode->prev = newnode;         
                return newnode;     
        }     
    Node *last = head->prev;     
                head->prev = newnode;     
                newnode->next = head;     
                newnode->prev = last;     
                last->next = newnode;     
                return head; 
} 
                

Node *insertafter(Node *head, int afterthis, int a) 
{     
    Node *newnode = new Node(a);     
    if (head->data == afterthis)     
    {         
      Node *temp = head->next;         
      head->next = newnode;         
      newnode->prev = head;         
      newnode->next = temp;         
      temp->prev = newnode;         
      return head;     
    }     
     Node *searcher = head->next;     
                        
     while (searcher != head)     
    {         
       if (searcher->data == afterthis)         
       {             
         Node *temp = searcher->next;             
         searcher->next = newnode;             
         newnode->prev = searcher;             
         newnode->next = temp;             
         temp->prev = newnode;             
         return head;         
        }         
                                
          searcher = searcher->next;     
                                
        }     
                                
cout<<"Cound not find the element\n";     
                                
return head; 
                        
}    



Node *insertBefore(Node *head, int beforethis, int a) 
{     
    Node *newnode = new Node(a);     
        if (head->data == beforethis)    
           {         
                Node *temp = head->prev;         
                head->prev = newnode;         
                newnode->next = head;         
                newnode->prev = temp;         
                temp->next = newnode;         
                return head;     
            }     
                       
					   
				Node *searcher = head->next;     
                        while (searcher != head)     
                        {          
                            if (searcher->data == beforethis)         
                            {             
                            Node *temp = searcher->prev;             
                            cout << "Prev is : " << temp->data << "\n";             
                            searcher->prev = newnode;             
                            newnode->next = searcher;             
                            newnode->prev = temp;             
                            temp->next = newnode;             
                            return head;         
                            }         
                            searcher = searcher->next;     
                        }     
                            cout << "Cound not find the element\n";     
                            return head; 
}   


Node *deleteNode(Node *head, int a) 
{     
    if (!head)     
        {         
            cout << "Emptiness\n";         
            return head;     
        }     
    if (head->data == a)     
        {         
            Node *temp = head->prev;         
            temp->next = head->next;         
            head->next->prev = temp;         
            free(head);         
            return temp->next;     
        }     
                                    
									
	Node *temp = head->next;     
    while (temp->data != a && temp != head)     
        {         temp = temp->next;     
                                    
		}     
		
		if (temp == head)     
            {         
                cout << "Could not find element\n";         
                return head;     
            }     
            temp->prev->next = temp->next;     
            temp->next->prev = temp->prev;     
            free(temp);     
            return head; 
}   




int search(Node *head, int a) 
{     
    if (!head)     
        {         
            cout << "Empty list\n";         
            return -1;     
        }     
        if (head->data == a)    
            {         
                return 0;     
            }     
    
	Node *temp = head->next;     
    int pos = 1;     
    while (temp->data != a && temp != head)     
    {         
        temp = temp->next;         
        pos++;     
    }     
    if (temp == head)         
    return -1;     
    return pos; 
}   



void show(Node *head) 
{     
if (!head)     
    {         
        cout << "Empty list\n";         
        return;     
    }     
if (head->next == head)     
    {         
        cout << head->data << "\n";         
        return;     
    }     
    Node *temp = head->next;     
    cout << head->data << " ";     
    while (temp != head)     
	{         
        cout << temp->data << " ";         
        temp = temp->next;     
        
	}     
    cout << "\n"; 


}  



int main() 
    {     
        Node *head = NULL;     
        int choice = 0;     
        int a;     
        while (choice != 8)     
           {         
                cout << "1.Insert first\n2.Insert last\n3.Insert after\n4.Insert Before\n5.Delete\n6.Search\n7.Show all\n8.Exit\n";         
                cin >> choice;         
                
				switch (choice)         
                    
					{         
                        case 1:             
                        cout << "Enter value: ";             
                        cin >> a;             
                        head = insertfirst(head, a);             
                        break;         
                        case 2:             
                        cout << "Enter value: ";             
                        cin >> a;             
                        head = insertlast(head, a);             
                        break;         
                        case 3:             
                        cout << "Enter value: ";             
                        cin >> a;             
                        cout << "Enter value to whome we have to put after: ";             
                        int after;             
                        cin >> after;             
                        head = insertafter(head, after, a);             
                        break;         
                        case 4:             
                        cout << "Enter value: ";             
                        cin >> a;             
                        cout << "Enter value to whome we have to put before: ";             
                        int before;             
                        cin >> before;             
                        head = insertBefore(head, before, a);             
                        break;         
                        case 5:             
                        cout << "Enter value to delete: ";             
                        cin >> a;             
                        head = deleteNode(head, a);             
                        break;         
                        case 6:             
                        cout << "Enter value to search: ";             
                        cin >> a;             
                        int pos;             
                        pos = search(head, a);             
                        if (pos == -1)                 
                        cout << "Could not find\n";             
                        else cout << "Found at position: " << pos << "\n";             
                        break;         
                        case 7:             
                        show(head);             
                        break;         
                        case 8:             
                        return 0;         
                        default:             
                        break;         
                    }     
                                                                                     
                }                                                                
return 0; 	

}
			
	
	
                                                                                


