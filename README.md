Nama  : Fadillah Anzal N Ardiani

NIM   : 1910512003

Email : fadillahaana@upnvj.ac.id


<body>
<h1>Deskripsi Umum</h1>
<p> Project ini merupakan pemenuhan tugas akhir pada mata kuliah Praktikum Struktur Data dan Algoritma.
Project ini membahas Binary Search Tree (BST) dalam bahasa C++, adapun dalam project ini akan memuat pilihsn fitur menu seperti berikut. 
<blockquote>
	
======= MENU BINARY SEARCH TREE =======
  
    Silahkan Pilih Menu dibawah ini
    
 1. Insert Value
  
 2. Search Value

 3. Delete Value

 4. In Order Traversal

 5. Pre Order Traversal

 6. Post Order Traversal

 7. Minimum Value

 8. Maximum Value

 9. Clear BST

10. EXIT

===================================

Pilih Fitur : </blockquote></p>

<h1>Penjelasan Fitur Menu pada Program</h1>
<p>Pada program tersebut dapat dilihat bahwa terdapat 10 macam fitur di dalam "MENU TUGAS UAS PSDA", mulai dari Menu 1 sampai menu 10. 
Fungsi dari setiap fitur dalam menu tersebut sebagai berikut.
  
<b>1. Insert Value</b>

Fitur ini berfungsi untuk memasukkan nilai kedalam BST. Menu akan memunculkan perintah <b>"MASUKKAN NILAI : "</b> , kemudian saat nilai berhasil dimasukkan maka akan muncul pemberitahuan <b>"NILAI DIMASUKKAN"</b>.
  
<b>2. Search Value</b>

Fitur ini berfungsi untuk menampilkan nilai yang ingin dicari. Jika nilai yang dicari sudah dimasukkan sebelumnya maka menu akan menampilkan pemberitahuan <b>"NILAI DITEMUKAN"</b> , namun jika nilai belum dimasukkan sebelumnya maka menu akan menampilkan pemberitahuan <b>"NILAI TIDAK DITEMUKAN"</b>.

<b>3. Delete Value</b>

Fitur ini berfungsi untuk menghapus nilai yang sudah dimasukkan sebelumnya. Jika nilai yang ingin dihapus sudah dimasukkan sebelumnya maka menu akan menampilkan pemberitahuan <b>"NILAI DITEMUKAN"</b> , namun jika nilai belum dimasukkan sebelumnya maka menu akan menampilkan pemberitahuan <b>"NILAI TIDAK DITEMUKAN"</b>.

<b>4. In Order Traversal</b>

Fitur ini berfungsi untuk menampilkan nilai-nilai yang sudah dimasukkan kedalam urutan In Order, atau mengurutkan nilai mulai dari sisi <b>Kiri</b> (nilai yang lebih kecil), <b>Root</b> (nilai induk/pertama), kemudian sisi <b>Kanan</b> (nilai yang lebih besar).

<b>5. Pre Order Transversal</b>

Fitur ini berfungsi untuk menampilkan nilai-nilai yang sudah dimasukkan kedalam urutan Pre Order, atau mengurutkan nilai mulai dari <b>Root</b> (nilai induk/pertama), kemudian sisi <b>Kiri</b> (nilai yang lebih kecil), dan sisi <b>Kanan</b> (nilai yang lebih besar).

<b>6. Post Order Transversal</b>

Fitur ini berfungsi untuk menampilkan nilai-nilai yang sudah dimasukkan kedalam urutan Post Order, atau mengurutkan nilai mulai dari sisi <b>Kiri</b> (nilai yang lebih kecil), sisi <b>Kanan</b> (nilai yang lebih besar), kemudian <b>Root</b> (nilai induk/pertama).

<b>7. Minimum Value</b>

Fitur ini berfungsi untuk menampilkan nilai paling terkecil yang telah berhasil dimasukkan sebelumnya. Menu akan menampilkan pemberitahuan <b>"NILAI TERKECIL : </b> bersamaan dengan nilai terkecil yang muncul.

<b>8. Maximum Value</b>

Fitur ini berfungsi untuk menampilkan nilai paling besar yang telah berhasil dimasukkan sebelumnya. Menu akan menampilkan pemberitahuan <b>"NILAI TERBESAR : </b> bersamaan dengan nilai terbesar yang muncul.

<b>9. Clear BST</b>

Fitur ini berfungsi untuk menghapus BST yang telah berhasil dibentuk sebelumnya. Saat pemilihan fitur ini menu akan menampilkan pemberitahuan <b>"BST BERHASIL DIHAPUS </b>.

<b>10. EXIT</b></p>

<h1>Fungsi Program</h1>

<b><i>* In Order</i></b>

<blockquote>
	
	void BinarySearchTree :: InorderTraversal(BinarySearchTree*root) 
	
{

    if(!root) 
    
	{
	
        return;
	
    }
    
    InorderTraversal(root->left);
    
    cout << root->value <<"->" ;
    
    InorderTraversal(root->right);
}

</blockquote>


<b><i>* Pre Order</i></b>

<blockquote>
	
	void BinarySearchTree :: preorderTraversal(BinarySearchTree*root) 
{

    if(!root) 
    
	{
	
        return;
	
    }
    
    cout << root->value << "->";
    
  	preorderTraversal(root->left);
	
  	preorderTraversal(root->right);
	
}

</blockquote>


<b><i>* Post Order</i></b>

<blockquote>
	
	void BinarySearchTree :: postorderTraversal(BinarySearchTree*root) 

{

    if(!root) 
    
	{
	
        return;
	
    }
    
  	postorderTraversal(root->left);
	
  	postorderTraversal(root->right);
	
  	cout << root->value << "->";
	
}

</blockquote>

<h1>Penalaran Luar</h1>

Untuk bentuk program lebih lengkapnya dapat dilihat pada link berikut. [[BST_Dilla.cpp]](https://github.com/dl0521/UAS_PSDA_Fadillah-Anzal/blob/master/BST_Dilla%20.cpp)
</body>
</html>
