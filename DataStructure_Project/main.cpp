#include<bits/stdc++.h>
using namespace std;

class Array{
    int size;
    int current;
    int *array;
    
        void InsertElemets_MyArray()
        {
            int n;
            cout<<"Enter the size  of Array :> ";
            cin>>n;
            if(n>=size)
            {
                cout<<"Array size exceeds"<<endl;
                i();
                return;
            }
            current=n;
            cout<<"\nEntr the array elements :>"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>array[i];
            }
            cout<<"\nElements inserted in array"<<endl;
            i();
        }
        void Display_MyArray()
        {
            if(current<0)
            {
                cout<<"\nArray is Empty"<<endl;
                i();
                return;
            }
            cout<<"\nElements in array : >";
            for(int i=0;i<current;i++)
                cout<<" "<<array[i]<<" ";
            cout<<endl;
            i();
        }
        void InsertAtPos_MyArray()
        {
            int pos,data;
            if(current<0)
            {
                cout<<"\nArray is empty"<<endl;
                i();
                return;
            }
            cout<<"\nEnter position to insert:> ";
            cin>>pos;
            cout<<"\nEnter data to insert :> ";
            cin>>data;
            
            if(pos>=size || pos<0)
                {
                    cout<<"\n Wrong position can't insert "<<endl;
                    i();
                    return;
                }
            if(pos>=1 and pos<=current+1)
            {
            current++;
            for(int i=current;i>pos-1;i--)
            {
                array[i]=array[i-1];
            }
            array[pos-1]=data;
            cout<<"\nData inserted at given position"<<endl;
            i();
            }
            else{
                cout<<"\nWrong position "<<endl;
                i();
                return;
            }
        }
        void Delete_MyArray()
        {
            int data;
            if(current<0)
            {
                cout<<"\nArray is Empty"<<endl;
                i();
                return;
            }
            cout<<"\nEnter the element to delete :>";
            cin>>data;
            int z;
            for(z=0;z<current;z++)
                if(array[z]==data)
                    break;
                
            if(z<current)
            {
                current--;
                for(int j=z;j<current;j++)
                    array[j]=array[j+1];
                cout<<"\nElement Deleted "<<endl;
                i();
            }
            else
            {
                cout<<"\nElement not found in Array"<<endl;
                i();
            }
        }
        void FindMax_MyArray()
        {
           if(current<0)
           {
               cout<<"\nArray Ampty"<<endl;
               i();
               return;
           }
           cout<<"\nMaximum element in array:> " <<*max_element(array,array+current)<<endl;
           i();
        }
        void FindMin_MyArray()
        {
           if(current<0)
           {
               cout<<"\nArray Empty"<<endl;
               i();
               return;
           }
           cout<<"\nMinimum element in array:> " <<*min_element(array,array+current)<<endl;
           i();
        }
        void Reverse_MyArray()
        {
            if(current<0)
           {
               cout<<"\nArray empty"<<endl;
               i();
               return;
           }
           reverse(array,array+current);
           cout<<"\nArray Reversed "<<endl;
           i();
        }
        void sort_MyArray()
        {
            if(current<0)
           {
               cout<<"\nArray is Empty"<<endl;
               i();
               return;
           }
           sort(array,array+current);
           cout<<"\nArray elements Sorted"<<endl;
           i();
        }
        void i()
        {
            cout<<endl;
            for(int i=0;i<27;i++)
                cout<<"*-*";
            cout<<endl;
        }
    public:
        Array()
        {
            current=-1;
            size=30;
            array=new int[size];
        }
        void MyArray(){
            int choice;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |                       Array                            |"<<endl;
            cout<<"  --------------------------------------------------------"<<endl;
            while(1)
            {
                cout<<endl;
                cout<<"\n    X-------------Various operations on Array-------------X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|       1.Insert elements in Array.           |"<<endl;
                cout<<"\t*       2.Display elements of Array.          *"<<endl;
                cout<<"\t|       3.Insert at position in Array.        |"<<endl;
                cout<<"\t*       4.Delete element from Array.          *"<<endl;
                cout<<"\t|       5.Sort the elements in Arrya.         |"<<endl;
                cout<<"\t*       6.Find maximum element                *"<<endl;
                cout<<"\t|       7.Find minimum element                |"<<endl;
                cout<<"\t*       8.Reverse the Array                   *"<<endl;
                cout<<"\t|       9.Exit                                |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-**-*-*-*-*"<<endl;
                cout<<endl;
                cout<<"Enter your choice :>   ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                        InsertElemets_MyArray();
                        break;
                    case 2:
                        Display_MyArray();
                        break;
                    case 3:
                        InsertAtPos_MyArray();
                        break;
                    case 4:
                        Delete_MyArray();
                        break;
                    case 5:
                       sort_MyArray();
                        break;
                    case 6:
                        FindMax_MyArray();
                        break;
                    case 7: 
                        FindMin_MyArray();
                        break;
                    case 8: 
                        Reverse_MyArray();
                        break;
                    case 9:
                        return;
                    default: 
                            cout<<"\nWrong choice"<<endl;
                            break;
                }
            }
        }    
};
struct LNode{
    int data;
    LNode *next;
    LNode(int x)
    {
        data=x;
        next=nullptr;
    }
};
struct DNode{
    int data;
    DNode *prev,*next;
    DNode(int x)
    {
        data=x;
        prev=next=nullptr;
    }
};
class SinglyLinkedList{
  LNode *head;
  LNode *tail;
       int count(){
           int c=0;
           LNode *temp=head;
           while(temp!=nullptr)
           {
               c++;
               temp=temp->next;
           }
           return c;
       }
       void Insert_at_Beg_MySinglyList(int data)
       {
            LNode *temp= new LNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                cout<<"\nData inserted  at Beginning "<<endl;
                I();
                return;
            }
            temp->next=head;
            head=temp;
            cout<<"\nData inserted  at Beginning "<<endl;
            I();
        }
       void Insert_at_End_MySinglyList(int data)
       {
            LNode *temp=new LNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                cout<<"\nData inserted  at End "<<endl;
                I();
                return;
            }
          
           tail->next=temp;
           tail=tail->next;
           cout<<"\nData inserted  at End "<<endl;
           I();
       }
       void Insert_at_pos_MySinglyList(int pos,int data)
       {
            LNode *temp=new LNode(data);
           
            if(pos==1){
                Insert_at_Beg_MySinglyList(data);
                I();
                return;
            }
            else if(pos==count()+1)
            {
                Insert_at_End_MySinglyList(data);
                return;
            }
            else if(1<pos and pos<=count())
            {
                LNode *ptr=head;
                for(int i=1;i<pos-1;i++)
                {
                    ptr=ptr->next;
                }
                temp->next=ptr->next;
                ptr->next=temp;
                cout<<"\nData inserted at Position"<<endl;
                I();
                return;
            }
            else
            {
                cout<<"\nWrong Position"<<endl;
                I();
            }
       }
        void Deletion_at_Beg_MySinglyList()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            if(head->next==nullptr)
            {
                head=tail=nullptr;
                cout<<"\nData in node Deleted"<<endl;
                I();
                return;
            }
            LNode *ptr=head;
            head=head->next;
            delete ptr;
            cout<<"\nData in node Deleted"<<endl;
            I();
        }
        void Deletion_at_End_MySinglyList()
        {
             if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            if(head==tail)
            {
                tail=head=NULL;
                cout<<"\nData in node Deleted"<<endl;
                I();
                return;
            }
            LNode *ptr=head;
            while(ptr->next!=tail)
            {
                ptr=ptr->next;
            }
            delete tail;
            tail=ptr;
            tail->next=nullptr;
            cout<<"\nData in node Deleted"<<endl;
            I();
        }
        void Deletion_at_pos_MySinglyList(int pos)
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return;
            }
            if(pos==1)
            {
                Deletion_at_Beg_MySinglyList();
                return;
            }
            else if(pos==count())
            {
                Deletion_at_End_MySinglyList();
                return;
            }
            else if(1<pos and pos<count())
            {
                LNode *ptr=head,*temp=nullptr;
                for(int i=1;i<pos-1;i++)
                {
                    ptr=ptr->next;
                }
                temp=ptr->next;
                ptr=ptr->next;
                delete temp;
                cout<<"Data deleted from given Position"<<endl;
                I();
                return;
            }
            else {
                cout<<"\nWrong position"<<endl;
                I();
            }
        }
        void Display_MySinglyList()
        {
            LNode *ptr=head;
             if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            cout<<"\nData in Linked List:> ";
            while(ptr!=nullptr)
            {
                cout<<" "<<ptr->data<<" ";
                ptr=ptr->next;
            }
            cout<<endl;
            I();
            
        }
        void Reverse_MySinglyList()
        {
            LNode *curr=head,*prev=nullptr,*next=nullptr;
            if(head==nullptr)
            {
                cout<<"\n List is Empty"<<endl;
                I();
                return;
            }
            while(curr!=nullptr)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            tail=head;
            head=prev;
            cout<<"\nLinked List Reveresed "<<endl;
            I();
        }
        void I(){
            for(int i=0;i<27;i++)
                cout<<"*-*";
            cout<<endl;
        }
    public:
        SinglyLinkedList()
        {
            head=nullptr;
            tail=nullptr;
        }
        void MyLinkedList()
        {
            int choice,pos,data;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |                Singly Linked List                     |"<<endl;
            cout<<"  -------------------------------------------------------"<<endl<<endl;
            
            while(1)
            {
                cout<<endl;
                cout<<"    X------Various operations on Singly Linked List------X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|                           |"<<endl;
                cout<<"\t*   1.Insert at Beginning   *"<<endl;
                cout<<"\t|   2.Insert at End         |"<<endl;
                cout<<"\t*   3.Insert at Position    *"<<endl;
                cout<<"\t|   4.Delete at Beginning   |"<<endl;
                cout<<"\t*   5.Delete at End         *"<<endl;
                cout<<"\t|   6.Delete at position    |"<<endl;
                cout<<"\t*   7.Display Linked List   *"<<endl;
                cout<<"\t|   8.Reverse Linked List   |"<<endl;
                cout<<"\t*   9.Number of nodes       *"<<endl;
                cout<<"\t|   10.Exit                 |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"Enter your choice :>   ";
                cin>>choice;
            switch(choice)
                {
                    case 1:
                        cout<<"\nEnter data to insert :> "<<endl;
                        cin>>data;
                        Insert_at_Beg_MySinglyList(data);
                        break;
                    case 2:
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_End_MySinglyList(data);
                        break;
                    case 3:
                        cout<<"\nEnter position to insert:> ";
                        cin>>pos;
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_pos_MySinglyList(pos,data);
                        break;
                    case 4:
                        Deletion_at_Beg_MySinglyList();
                        break;
                    case 5:
                        Deletion_at_End_MySinglyList();
                        break;
                    case 6:
                        cout<<"\nEnter position to delete:> ";
                        cin>>pos;
                        Deletion_at_pos_MySinglyList(pos);
                        break;
                    case 7: 
                        Display_MySinglyList();
                        break;
                    case 8:
                        Reverse_MySinglyList();
                        break;
                    case 9:
                        cout<<"Number of nodes => "<<count()<<endl;
                        I();
                        break;
                    case 10:
                        return ;
                    default: 
                            cout<<"\nWrong choice"<<endl;
                            break;
                }
            }
        }
};
class DLL{
    DNode *head;
    DNode *tail;
        int count()
        {
            int c=0;
            DNode *ptr=head;
            while(ptr!=nullptr)
            {
                c++;
                ptr=ptr->next;
            }
            return c;
        }
        void X()
        {
        for(int i=0;i<30;i++)
            cout<<"*-*";
        cout<<endl;
    }
        void Insert_at_Beg_MyDLL(int data)
        {
            DNode *temp=new DNode(data);
            if(head==nullptr)
            {
                head=tail=temp;
                cout<<"\nData inserted at Beginning"<<endl;
                X();
                return;
            }
            temp->next=head;
            head->prev=temp;
            head=temp;
            cout<<"\nData inserted at Beginning"<<endl;
            X();
        }
        void Insert_at_End_MyDLL(int data)
        {
            DNode *temp=new DNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                cout<<"\nData inserted  at End "<<endl;
                X();
                return;
            }
           tail->next=temp;
           temp->prev=tail;
           tail=tail->next;
           cout<<"\nData inserted  at End "<<endl;
           X();
        }
        void Insert_at_Pos_MyDLL(int pos,int data)
        {
            DNode * temp=new DNode(data);
            if(pos==1)
            {
                Insert_at_Beg_MyDLL(data);
            }
            else if(pos==count()+1)
            {
                Insert_at_End_MyDLL(data);
            }
            else if(pos>1 and pos<=count())
            {
                DNode *ptr=head;
                for(int i=1;i<pos-1;i++)
                    ptr=ptr->next;
                temp->next=ptr->next;
                ptr->next->prev=temp;
                temp->prev=ptr;
                cout<<"\nData inserted at given position ";
                X();
            }
            else
            {
                cout<<"\nWrong Position"<<endl;
                X();
            }
        }
        void Deletion_at_Beg_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                X();
                return ;
            }
            if(head->next==nullptr)
            {
                head=tail=nullptr;
                cout<<"\nData in node Deleted"<<endl;
                X();
                return;
            }
            DNode *ptr=head;
            head=head->next;
            head->prev=NULL;
            delete ptr;
            cout<<"\nData in node Deleted"<<endl;
            X();
        }
        void Deletion_at_End_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                X();
                return ;
            }
            if(head==tail)
            {
                tail=head=NULL;
                cout<<"\nData in node Deleted"<<endl;
                X();
                return;
            }
            DNode *ptr=head;
            while(ptr->next!=tail)
            {
                ptr=ptr->next;
            }
            delete tail;
            tail=ptr;
            tail->next=nullptr;
            cout<<"\nData in node Deleted"<<endl;
            X();
        }
        void Deletion_at_pos_MyDLL(int pos)
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                X();
                return;
            }
            if(pos==1)
            {
                Deletion_at_Beg_MyDLL();
                return;
            }
            else if(pos==count())
            {
                Deletion_at_End_MyDLL();
                return;
            }
            else if(1<pos and pos<count())
            {
                DNode *ptr=head;
                for(int i=1;i<pos;i++)
                {
                    ptr=ptr->next;
                }
                ptr->prev->next=ptr->next;
                ptr->next->prev=ptr->prev;
                delete ptr;
                cout<<"Data deleted from given Position"<<endl;
                X();
                return;
            }
        }
        void Display_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty "<<endl;
                X();
                return;
            }
            cout<<"\nData in Doubly Linked List :> ";
            DNode *ptr=head;
            while(ptr!=nullptr)
            {
                cout<<" "<<ptr->data<<" ";
                ptr=ptr->next;
            }
            cout<<endl;
            X();
        }
        void Reverse_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                X();
                return;
            }
            DNode *temp=NULL,*curr=head;
            while(curr!=nullptr)
            {
                temp=curr->prev;
                curr->prev=curr->next;
                curr->next=temp;
                curr=curr->prev;
            }
            if(temp!=nullptr){
                tail=head;
                head=temp->prev;
            }
            cout<<"\nDoubly Linked List Reversed"<<endl;
            X();
        }
    public:
        DLL()
        {
            head=tail=nullptr;
        }
        void MyDLL()
        {
            int choice,pos,data;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |                Doubly Linked List                     |"<<endl;
            cout<<"  -------------------------------------------------------"<<endl<<endl;
            
            while(1)
            {
                cout<<endl;
                cout<<"    X------Various operations on Doubly Linked List------X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|                           |"<<endl;
                cout<<"\t*   1.Insert at Beginning   *"<<endl;
                cout<<"\t|   2.Insert at End         |"<<endl;
                cout<<"\t*   3.Insert at Position    *"<<endl;
                cout<<"\t|   4.Delete at Beginning   |"<<endl;
                cout<<"\t*   5.Delete at End         *"<<endl;
                cout<<"\t|   6.Delete at Position    |"<<endl;
                cout<<"\t*   7.Display DLL           *"<<endl;
                cout<<"\t|   8.Reverse DLL           |"<<endl;
                cout<<"\t*   9.Number of nodes       *"<<endl;
                cout<<"\t|   10.Exit                 |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"Enter your choice :>   ";
                cin>>choice;
            switch(choice)
                {
                    case 1:
                        cout<<"\nEnter data to insert :> "<<endl;
                        cin>>data;
                        Insert_at_Beg_MyDLL(data);
                        break;
                    case 2:
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_End_MyDLL(data);
                        break;
                    case 3:
                        cout<<"\nEnter position to insert:> ";
                        cin>>pos;
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_Pos_MyDLL(pos,data);
                        break;
                    case 4:
                        Deletion_at_Beg_MyDLL();
                        break;
                    case 5:
                        Deletion_at_End_MyDLL();
                        break;
                    case 6:
                        cout<<"\nEnter position to delete:> ";
                        cin>>pos;
                        Deletion_at_pos_MyDLL(pos);
                        break;
                    case 7: 
                        Display_MyDLL();
                        break;
                    case 8:
                        Reverse_MyDLL();
                        break;
                    case 9:
                        cout<<"Number of nodes => "<<count()<<endl;
                        X();
                        break;
                    case 10:
                        return ;
                    default: 
                            cout<<"\nWrong choice"<<endl;
                            break;
                }
            }
        }
};
class CLL{
    LNode *head;
    LNode *tail;
         int count(){
           int c=0;
           if(head==nullptr)
           {
               return c;
           }
           LNode *temp=head;
           do{
               c++;
               temp=temp->next;
           }while(temp!=head);
           return c;
       }
       void Insert_at_Beg_MyCLL(int data)
       {
            LNode *temp= new LNode(data);
            if(head==nullptr)
            {    
                tail=head=temp;
                head->next=head;
                tail->next=tail;
                cout<<"\nData inserted  at Beginning "<<endl;
                I();
                return;
            }
            temp->next=head;
            head=temp;
            tail->next=head;
            cout<<"\nData inserted  at Beginning "<<endl;
            I();
        }
       void Insert_at_End_MyCLL(int data)
       {
            LNode *temp=new LNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                head->next=head;
                tail->next=tail;
                cout<<"\nData inserted  at End "<<endl;
                I();
                return;
            }
          
           tail->next=temp;
           tail=tail->next;
           tail->next=head;
           cout<<"\nData inserted  at End "<<endl;
           I();
       }
       void Insert_at_pos_MyCLL(int pos,int data)
       {
            LNode *temp=new LNode(data);
           
            if(pos==1){
                Insert_at_Beg_MyCLL(data);
                I();
                return;
            }
            else if(pos==count()+1)
            {
                Insert_at_End_MyCLL(data);
                return;
            }
            else if(1<pos and pos<=count())
            {
                LNode *ptr=head;
                for(int i=1;i<pos-1;i++)
                {
                    ptr=ptr->next;
                }
                temp->next=ptr->next;
                ptr->next=temp;
                cout<<"\nData inserted at Position"<<endl;
                I();
                return;
            }
            else
            {
                cout<<"\nWrong Position"<<endl;
                I();
            }
       }
        void Deletion_at_Beg_MyCLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            if(head->next==head)
            {
                head=tail=nullptr;
                cout<<"\nData in node Deleted"<<endl;
                I();
                return;
            }
            LNode *ptr=head;
            head=head->next;
            tail->next=head;
            delete ptr;
            cout<<"\nData in node Deleted"<<endl;
            I();
        }
        void Deletion_at_End_MyCLL()
        {
             if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            if(head==tail)
            {
                tail=head=NULL;
                cout<<"\nData in node Deleted"<<endl;
                I();
                return;
            }
            LNode *ptr=head;
            while(ptr->next!=tail)
            {
                ptr=ptr->next;
            }
            delete tail;
            tail=ptr;
            tail->next=head;
            cout<<"\nData in node Deleted"<<endl;
            I();
        }
        void Deletion_at_pos_MyCLL(int pos)
        {
            if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return;
            }
            if(pos==1)
            {
                Deletion_at_Beg_MyCLL();
                return;
            }
            else if(pos==count())
            {
                Deletion_at_End_MyCLL();
                return;
            }
            else if(1<pos and pos<count())
            {
                LNode *ptr=head,*temp=nullptr;
                for(int i=1;i<pos-1;i++)
                {
                    ptr=ptr->next;
                }
                temp=ptr->next;
                ptr=ptr->next;
                delete temp;
                cout<<"Data deleted from given Position"<<endl;
                I();
                return;
            }
            else {
                cout<<"\nWrong Position"<<endl;
                I();
            }
        }
        void Display_MyCLL()
        {
            LNode *ptr=head;
             if(head==nullptr)
            {
                cout<<"\nList is Empty"<<endl;
                I();
                return ;
            }
            cout<<"\nData in Linked List:> ";
            do{
                cout<<" "<<ptr->data<<" ";
                ptr=ptr->next;
            }while(ptr!=head);
            cout<<endl;
            I();
            
        }
        void Reverse_MyCLL()
        {
            LNode *curr=head,*prev=nullptr,*next=nullptr;
            if(head==nullptr)
            {
                cout<<"\n List is Empty"<<endl;
                I();
                return;
            }
            do
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }while(curr!=head);
            tail=head;
           head->next=prev;
           head=prev;
            cout<<"\nLinked List Reveresed "<<endl;
            I();
        }
        void I(){
            for(int i=0;i<27;i++)
                cout<<"*-*";
            cout<<endl;
        }
    public:
        CLL()
        {
            head=nullptr;
            tail=nullptr;
        }
        void MyCLL()
        {
            int choice,pos,data;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |               Circular Singly Linked List             |"<<endl;
            cout<<"  -------------------------------------------------------"<<endl<<endl;
            
            while(1)
            {
                cout<<endl;
                cout<<"    X--Various operations on Circular Singly Linked List--X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|                           |"<<endl;
                cout<<"\t*   1.Insert at Beginning    *"<<endl;
                cout<<"\t|   2.Insert at End         |"<<endl;
                cout<<"\t*   3.Insert at Position    *"<<endl;
                cout<<"\t|   4.Delete at Beginning   |"<<endl;
                cout<<"\t*   5.Delete at End         *"<<endl;
                cout<<"\t|   6.Delete at position    |"<<endl;
                cout<<"\t*   7.Display Linked List   *"<<endl;
                cout<<"\t|   8.Reverse Linked List   |"<<endl;
                cout<<"\t*   9.Number of nodes       *"<<endl;
                cout<<"\t|   10.Exit                 |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"Enter your choice :>   ";
                cin>>choice;
            switch(choice)
                {
                    case 1:
                        cout<<"\nEnter data to insert :> "<<endl;
                        cin>>data;
                        Insert_at_Beg_MyCLL(data);
                        break;
                    case 2:
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_End_MyCLL(data);
                        break;
                    case 3:
                        cout<<"\nEnter position to insert:> ";
                        cin>>pos;
                        cout<<"\nEnter data to insert :> ";
                        cin>>data;
                        Insert_at_pos_MyCLL(pos,data);
                        break;
                    case 4:
                        Deletion_at_Beg_MyCLL();
                        break;
                    case 5:
                        Deletion_at_End_MyCLL();
                        break;
                    case 6:
                        cout<<"\nEnter position to delete:> ";
                        cin>>pos;
                        Deletion_at_pos_MyCLL(pos);
                        break;
                    case 7: 
                        Display_MyCLL();
                        break;
                    case 8:
                        Reverse_MyCLL();
                        break;
                    case 9:
                        cout<<"Number of nodes => "<<count()<<endl;
                        I();
                        break;
                    case 10:
                        return ;
                    default: 
                            cout<<"\nWrong choice"<<endl;
                            break;
                }
            }
        }

};
class LinkedList :public SinglyLinkedList,public DLL,public CLL
{
    public:
        void CallList()
        { 
            int choice;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |                    LINKED LISTS                        |"<<endl;
            cout<<"  -------------------------------------------------------"<<endl<<endl;
            
            while(1)
            {
                cout<<endl;
                cout<<"    X-----------Various Types of Linked List-------------X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|                                 |"<<endl;
                cout<<"\t*   1.Singly Linked List          *"<<endl;
                cout<<"\t|   2.Doubly Linked List          |"<<endl;
                cout<<"\t*   3.Circular Singly Linked List *"<<endl;
                cout<<"\t|   4.Exit                        |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\nEnter your choice :> ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    {
                        MyLinkedList();
                    }
                        break;
                    case 2:
                    {
                        MyDLL();
                    }
                        break;
                    case 3:
                    {
                        MyCLL();
                    }
                        break;
                    case 4:
                        return;
                    default: 
                        cout<<"\nWrong choice"<<endl;
                }
            }
        }
};
class Stack_array
{
    int *arr;
    int top;
    int size;
  public:
    Stack_array()
    {
        size=100;
        top=-1;
        arr=new int[size];
    }
    void X()
    {
        for(int i=0;i<28;i++)
            cout<<"*-*";
        cout<<endl;
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        return false;
    }
    bool isFull()
    {
        if(top==size)
            return true;
        return false;
    }
    void push(int data)
    {
        if(isFull())
        {
            cout<<"\nStack is Full"<<endl;
            return;
            X();
        }
        top++;
        arr[top]=data;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty"<<endl;
            return -1;
            X(); 
        }
        int val=arr[top];
        top--;
        return val;
    }
    void peek(int i)
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty"<<endl;
            return;
            X(); 
        }
        if(i>=0 and i<=top)
        {
            cout<<"\nElement at index "<<i<<" => "<<arr[i]<<endl;
            X();
        }
        else{
            cout<<"\nWrong Index"<<endl;
            X();
        }
    }
    int stackTop()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty"<<endl;
            return -1;
            X(); 
        }
       return arr[top];
    }
    void Stack_size()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty"<<endl;
            return;
            X(); 
        }
        cout<<"\nSize of Stack => "<<top+1<<endl;
        X();
    }
    void Display_Stack_array()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty"<<endl;
            return;
            X(); 
        }
        cout<<"\nData in stack :> ";
        for(int i=top;i>=0;i--)
        {
            cout<<" "<<arr[i]<<" ";
        }
        cout<<endl;
        X();
    }
    void Reverse_Stack()
    {
        Stack_array temp1,temp2;
        while(!isEmpty())
        {
            temp1.push(stackTop());
            pop();
        }
        while(!temp1.isEmpty())
        {
            temp2.push(temp1.stackTop());
            temp1.pop();
        }
        while(!temp2.isEmpty())
        {
            push(temp2.stackTop());
            temp2.pop();
        }
    }
    void MyStack()
    {
        int choice;
            cout<<"  -------------------------------------------------------"<<endl;
            cout<<" |                  Stack using Array                    |"<<endl;
            cout<<"  -------------------------------------------------------"<<endl<<endl;
            
            while(1)
            {
                int choice,val;
                cout<<endl;
                cout<<"    X---------Various operations on Stack---------X"<<endl<<endl;
                
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\t|                               |"<<endl;
                cout<<"\t*   1.Push in Stack             *"<<endl;
                cout<<"\t|   2.Pop in Stack              |"<<endl;  
                cout<<"\t*   3.Peek at index in stack    *"<<endl;
                cout<<"\t|   4.Display data in Stack     |"<<endl;
                cout<<"\t|   5.Display Stack Top         |"<<endl;
                cout<<"\t*   6.Check if Stack is Empty   *"<<endl;
                cout<<"\t|   7.Check if Stacki is Full   |"<<endl;
                cout<<"\t*   8.Display size of stack     *"<<endl;
                cout<<"\t|   9.Reverse Stack             |"<<endl;
                cout<<"\t|   10.Exit                     |"<<endl;
                cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
                cout<<"\nEnter your choice :> ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                        cout<<"\nEnter data to push :> ";
                        cin>>val;
                        push(val);
                        cout<<"\nData inserted in stack"<<endl;
                        X();
                        break;
                    case 2: 
                        val=pop();
                        cout<<"\n "<<val<<" deleted from Stack"<<endl;
                        X();
                        break;
                    case 3:
                        cout<<"\nEnter index to peek :> ";
                        cin>>val;
                        peek(val);
                        break;
                    case 4:
                        Display_Stack_array();
                        break;
                    case 5: 
                        if(stackTop()!=-1)
                        {
                        cout<<"\nData  at Top of Stack :> "<<stackTop()<<endl;
                        X();
                        }
                        else
                        {
                            cout<<"\nStack is Empty"<<endl;
                            X();
                        }
                        break;
                    case 6:
                        if(isEmpty())
                        {
                            cout<<"\nStack is empty"<<endl;
                            X();
                        }
                        else
                        {
                            cout<<"\nStack is not Empty"<<endl;
                            X();
                        }
                        break;
                    case 7:
                        if(isFull())
                        {
                            cout<<"\nStack is Full"<<endl;
                            X();
                        }
                        else
                        {
                            cout<<"\nStack is not Full"<<endl;
                            X();
                        }
                        break;
                    case 8:
                        Stack_size();
                        break;
                    case 9:
                        Reverse_Stack();
                        break;
                    case 10:
                        return ;
                    default:
                        cout<<"\nWrong choice"<<endl;
                }
            }    
    }
};
class Stack_LL{

};
int main()
{
    int choice;
    while(1)
    {
        cout<<endl;
        cout<<"\t --------------------------------------------------------"<<endl;
        cout<<"\t|       Implementation of various Data structures         |"<<endl;
        cout<<"\t --------------------------------------------------------"<<endl<<endl;
        cout<<"\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<"\t\t|   1.Array                 |"<<endl;
        cout<<"\t\t*   2.Linked List           *"<<endl;
        cout<<"\t\t|   3.Stack using Array     |"<<endl;
        cout<<"\t\t|   4.Exit                  |"<<endl;          
        cout<<"\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<endl;
        cout<<"Enter your choice:-> ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                Array A;
                A.MyArray();
            }
                break;
            case 2:
            {
               LinkedList L;
               L.CallList();
            }
                break;
            case 3:
            {
                Stack_array sa;
                sa.MyStack();
            }
                break;
            case 4:
                exit(0);
            default: 
                cout<<"\nWrong choice "<<endl;
        }
    }
}

