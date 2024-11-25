# What is `get_package_share_directory`, How is it used and What does it do for us?

With this package, you can return the location of any package in `ROS2` using `C++` as a `string`. For example, let's create a package named `get_package_share_directory` and print the location of this package in the terminal.

![terminal_output](https://github.com/user-attachments/assets/5ccf3104-1599-49f3-b711-90aa178ab50c)

So let's come to the question of what this package does for us. With this package, you don't need to give a statically named file name in your codes. For example, let's say we have a file named `get_package_share_director.yaml` which is in the `get_package_share_directory_ws/install/get_package_share_directory/share/get_package_share_director/config` directory, and we want to give this file as a parameter in our code.

Instead of defining a variable like;

`const std::string filename = "/home/zeobora/get_package_share_directory_ws/install/get_package_share_directory/share/get_package_share_director/config/get_package_share_director.yaml"`

We can define it like;

`const std::string filename = ament_index_cpp::get_package_share_directory("get_package_share_directory") + "/config/get_package_share_director.yaml";`

We can make this package work on every computer without making any changes to its codes by defining it dynamically.

However, it should not be forgotten that in order to use a file in this way, the directories to be used must be added to the package's `CMakeLists.txt` file.

Example: `install( DIRECTORY config DESTINATION share/${PROJECT_NAME}/ )`

In this way, the `config` directory becomes available with the `get_package_share_directory` command.

---------------------------------------------------------

# `get_package_share_directory` Nedir, Nasıl Kullanılır ve Ne İşimize Yarar?

Bu paket ile `C++` kullanarak `ROS2`'de herhangi bir paketin konumunu `string` şeklinde döndürebilirsiniz. Örneğin `get_package_share_directory` isimli bir paket oluşturalım ve bu paketin konumunu terminalde yazdıralım.

![terminal_output](https://github.com/user-attachments/assets/6e545971-db2e-45dd-a63e-4f3f3e834098)

Peki bu paket ne işimize yarar sorusuna gelelim. Bu paket ile kodlarınızda statik bir şekilde dosya adı vermenize gerek kalmaz. Örneğin diyelim ki `/home/zeobora/get_package_share_directory_ws/install/get_package_share_directory/share/get_package_share_director/config` dizininde `get_package_share_director.yaml` isimli bir dosyamız var bu dosyayı kodumuzda parametre olarak vermek istiyoruz. 

`const std::string filename = "/home/zeobora/get_package_share_directory_ws/install/get_package_share_directory/share/get_package_share_director/config/get_package_share_director.yaml"`

şeklinde statik tanımlamak yerine;

`const std::string filename = ament_index_cpp::get_package_share_directory("get_package_share_directory") + "/config/get_package_share_director.yaml";`

şeklinde dinamik tanımlayarak bu paketin kodlarında herhangi bir düzenleme yapmadan her bilgisayarda çalışmasını sağlayabiliriz.

Ancak unutulmamalıdır ki bir dosyayı bu şekilde kullanabilmek için paketin `CMakeLists.txt` dosyasına kullanılacak olan dizinler eklenmelidir.

Ör: `install( DIRECTORY config DESTINATION share/${PROJECT_NAME}/ )`

Bu sayede `config` dizini `get_package_share_directory` komutu ile kullanılabilir hale gelmektedir.
