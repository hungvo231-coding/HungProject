# Week 5
//  Constructor&Destructor.cpp Readme
//    iostream used for cout and console output of the program.
//    string to make the program able to store items in a string type.
//    std namespace to make the code cleaner by just typing cout instead of std::cout.
//    Private attribute: int id, string name, double price for storing the product info, and only class methods can access them.
//    Constructor of product used to initialize these attributes and run automatically when the object is created to print a message "Product has been created!" whenever the object is created.
//    Destruction runs automatically when the main end, which prints "Destructor called: Product got deleted"
//    printDetail() method is used to print all three attributes of the product, which are ID, name, and price.
//    main() function used to create a  product and print its attributes.
//  Constructor&Destructor.cpp Readme END

//  String&Class.cpp Read me
//     Include iostream to use cout
//     Include fstream for writing and reading files
//     Include string to use string type
//     Include std to make print easier
//     There are two items of data whose names and quantity, name stored in string type and quantity stored in int type.
//     saveToFile() method is used to create an output file stream, check if it opens correctly or not, before inserting the data in a format name, quantity, before closing the file.
//     loadToFile() method use to open the file through ifstream, then check if it opens correctly or not. Then read each line by using getline to print the content to the screen before closing the file.
//     main() Function:
//     Create an Item object Item myItem
//     Set its name and quantity by myItem.name = _____ and myItem.quantity = ______ in this case it is "Wrench" and 5
//     myItem.saveToFile("item.txt"); save item to the txt file name item.txt (This will create a file containing: Wrench,5)
//     myItem.loadFromFile("item.txt"; this will load and print the file content: File content: Wrench,5.
