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
                cout<<"\nArray is empty"<<endl;
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
            cout<<"\nData inserted at position"<<endl;
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
                cout<<"\nArray is empty"<<endl;
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
                cout<<"\nElement deleted "<<endl;
                i();
            }
            else
            {
                cout<<"\nElement not found in array"<<endl;
                i();
            }
        }
        void FindMax_MyArray()
        {
           if(current<0)
           {
               cout<<"\nArray empty"<<endl;
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
               cout<<"\nArray empty"<<endl;
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
           cout<<"\nArray reversed "<<endl;
           i();
        }
        void sort_MyArray()
        {
            if(current<0)
           {
               cout<<"\nArray empty"<<endl;
               i();
               return;
           }
           sort(array,array+current);
           cout<<"\nArray elements sorted"<<endl;
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
                cout<<"\t*       2.Display elements in Array.          *"<<endl;
                cout<<"\t|       3.Insert at position in Array.        |"<<endl;
                cout<<"\t*       4.Delete element in Arrya.            *"<<endl;
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
                cout<<"\nData inserted  at Begning "<<endl;
                I();
                return;
            }
            temp->next=head;
            head=temp;
            cout<<"\nData inserted  at Begning "<<endl;
            I();
        }
       void Insert_at_End_MySinglyList(int data)
       {
            LNode *temp=new LNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                cout<<"\nData inserted  at end "<<endl;
                I();
                return;
            }
          
           tail->next=temp;
           tail=tail->next;
           cout<<"\nData inserted  at end "<<endl;
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
                cout<<"\nData inserted at position"<<endl;
                I();
                return;
            }
            else
            {
                cout<<"\nWrong position"<<endl;
                I();
            }
       }
        void Deletion_at_Beg_MySinglyList()
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
                I();
                return ;
            }
            if(head->next==nullptr)
            {
                head=tail=nullptr;
                cout<<"\nData in node deleted"<<endl;
                I();
                return;
            }
            LNode *ptr=head;
            head=head->next;
            delete ptr;
            cout<<"\nData in node deleted"<<endl;
            I();
        }
        void Deletion_at_End_MySinglyList()
        {
             if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
                I();
                return ;
            }
            if(head==tail)
            {
                tail=head=NULL;
                cout<<"\nData in node deleted"<<endl;
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
            cout<<"\nData in node deleted"<<endl;
            I();
        }
        void Deletion_at_pos_MySinglyList(int pos)
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
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
                cout<<"Data deleted at position"<<endl;
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
                cout<<"\nList is empty"<<endl;
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
                cout<<"\n List is empty"<<endl;
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
                cout<<"\t*   1.Insert at Begning     *"<<endl;
                cout<<"\t|   2.Insert at end         |"<<endl;
                cout<<"\t*   3.Insert at position    *"<<endl;
                cout<<"\t|   4.Delete Begning        |"<<endl;
                cout<<"\t*   5.Delete End            *"<<endl;
                cout<<"\t|   6.Delete at position    |"<<endl;
                cout<<"\t*   7.Display LinkedList    *"<<endl;
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
                cout<<"\nData inserted at Begning"<<endl;
                X();
                return;
            }
            temp->next=head;
            head->prev=temp;
            head=temp;
            cout<<"\nData inserted at Begning"<<endl;
            X();
        }
        void Insert_at_End_MyDLL(int data)
        {
            DNode *temp=new DNode(data);
            if(head==nullptr)
            {    
                head=tail=temp;
                cout<<"\nData inserted  at end "<<endl;
                X();
                return;
            }
           tail->next=temp;
           temp->prev=tail;
           tail=tail->next;
           cout<<"\nData inserted  at end "<<endl;
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
                cout<<"\nData inserted at position ";
                X();
            }
            else
            {
                cout<<"\nWrong position"<<endl;
                X();
            }
        }
        void Deletion_at_Beg_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
                X();
                return ;
            }
            if(head->next==nullptr)
            {
                head=tail=nullptr;
                cout<<"\nData in node deleted"<<endl;
                X();
                return;
            }
            DNode *ptr=head;
            head=head->next;
            head->prev=NULL;
            delete ptr;
            cout<<"\nData in node deleted"<<endl;
            X();
        }
        void Deletion_at_End_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
                X();
                return ;
            }
            if(head==tail)
            {
                tail=head=NULL;
                cout<<"\nData in node deleted"<<endl;
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
            cout<<"\nData in node deleted"<<endl;
            X();
        }
        void Deletion_at_pos_MyDLL(int pos)
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty"<<endl;
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
                cout<<"Data deleted at position"<<endl;
                X();
                return;
            }
        }
        void Display_MyDLL()
        {
            if(head==nullptr)
            {
                cout<<"\nList is empty "<<endl;
                X();
                return;
            }
            cout<<"\nData in DLL :> ";
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
                cout<<"\nList is empty"<<endl;
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
            cout<<"\nDLL Reversed"<<endl;
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
                cout<<"\t*   1.Insert at Begning     *"<<endl;
                cout<<"\t|   2.Insert at end         |"<<endl;
                cout<<"\t*   3.Insert at position    *"<<endl;
                cout<<"\t|   4.Delete at Begning     |"<<endl;
                cout<<"\t*   5.Delete at End         *"<<endl;
                cout<<"\t|   6.Delete at position    |"<<endl;
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
        cout<<"\t\t|     1.Array               |"<<endl;
        cout<<"\t\t*     2.LinkedList          *"<<endl;
        cout<<"\t\t|     3.Doubly linked List  |"<<endl;
        cout<<"\t\t|     4.Exit                |"<<endl;          
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
                SinglyLinkedList SL;
                SL.MyLinkedList();
            }
                break;
            case 3:
            {
                DLL dll;
                dll.MyDLL();
                break;
            }
            case 4:
                exit(0);
            default: 
                cout<<"\nWrong choice "<<endl;
        }
    }
}
