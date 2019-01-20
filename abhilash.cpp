 //Object of the class
    LinkedList l1;
    //Enter values
    for(int i=1;i<6;i++)
    {
        l1.insert(i);
    }
    //showing output
    cout<<"Normal Display::"<<endl;
    l1.display();
    cout<<"The number of items before deletion="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after deletion of last element::"<<endl;
    l1.del();//use of delete
    l1.display();
    cout<<"The number of items after deletion="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after insertion at particular position(valid ex-1)::"<<endl;
    l1.InsertAt(2,26);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    cout<<"Display after insertion at particular position(invalid ex-1)::"<<endl;
    l1.InsertAt(5,26);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-2)::"<<endl;
    l1.InsertAt(15,15);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(valid ex-2)::"<<endl;
    l1.InsertAt(5,15);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after deletion at particular position(valid ex-1)::"<<endl;
    l1.deleteAt(1);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-1)::"<<endl;
    l1.deleteAt(66);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after insertion at particular position(invalid ex-2)::"<<endl;
    l1.deleteAt(696);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    
    cout<<"Display after deletion at particular position(valid ex-2)::"<<endl;
    l1.deleteAt(51);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.counting()<<endl;
    cout<<endl;
    
    return 0;
}

