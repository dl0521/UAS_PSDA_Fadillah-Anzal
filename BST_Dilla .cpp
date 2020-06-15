#include <iostream>
using namespace std;

class BinarySearchTree
{
    int value;
    BinarySearchTree *right, *left;
    
	public:
	BinarySearchTree();
    BinarySearchTree(int);
    
    // Insert function.
    BinarySearchTree*Insert(BinarySearchTree *, int);
    
    // Inorder traversal.
    void InorderTraversal(BinarySearchTree *);
    
    // preorderTraversal traversal.
	void preorderTraversal(BinarySearchTree *);
	
	// postorderTraversal traversal.
	void postorderTraversal(BinarySearchTree *);
	
    // clear Tree.
	BinarySearchTree* delete_tree(BinarySearchTree *);
	
	// find Leaves.
	BinarySearchTree* find_Leaves(BinarySearchTree *, int);
	
	// Delete Leaves.
	BinarySearchTree* deleteLeaves(BinarySearchTree *, int);
	BinarySearchTree* minValueLeaves(BinarySearchTree *);
	
	// Class untuk Menampilkan Angka Terkecil.
	int minLeaves(BinarySearchTree *);
	
	// Class untuk Menampilkan Angka Terbesar.
	int maxLeaves(BinarySearchTree *);
};

BinarySearchTree :: BinarySearchTree() : value(0), left(NULL), right(NULL){}

BinarySearchTree* BinarySearchTree::delete_tree(BinarySearchTree*root)
{
    if(root!=NULL)
	{
        delete_tree(root->left);
        delete_tree(root->right);
        root=NULL;
    }
    return root;
}

BinarySearchTree* BinarySearchTree::find_Leaves(BinarySearchTree *root, int value)
{
    if(!root)
        return NULL;
    if(root->value == value)
        return root;
    if(root->value > value)
        return find_Leaves(root->left, value);
    return find_Leaves(root->right, value);
}

// Lanjutan  Delete
BinarySearchTree*BinarySearchTree::minValueLeaves(BinarySearchTree* node)
{
    BinarySearchTree* current = node;

	//  pencarian dari node paling kiri
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

int BinarySearchTree::minLeaves(BinarySearchTree* node)
{
    BinarySearchTree* current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current->value;
}

int BinarySearchTree::maxLeaves(BinarySearchTree* node)
{
    BinarySearchTree* current = node;
    while (current && current->right != NULL)
        current = current->right;

    return current->value;
}

BinarySearchTree :: BinarySearchTree(int data) 
{
    value = data;
    left = right = NULL;
}

BinarySearchTree*BinarySearchTree::deleteLeaves(BinarySearchTree* root, int key)
{
    if (root == NULL) return root;
    if (key < root->value)
        root->left = deleteLeaves(root->left, key);

    else if (key > root->value)
        root->right = deleteLeaves(root->right, key);
        
    else
	{

        if (root->left == NULL)
		{
            BinarySearchTree *temp = root->right;
            return temp;
        }
        
        else if (root->right == NULL)
		{
            BinarySearchTree *temp = root->left;
            return temp;
        }

        BinarySearchTree *temp = minValueLeaves(root->right);
        root->value = temp->value;
        root->right = deleteLeaves(root->right, temp->value);
    }
    return root;
}

BinarySearchTree*BinarySearchTree :: Insert(BinarySearchTree *root, int value) 
{
    if(!root) 
	{
        return new BinarySearchTree(value);
    }

    if(value > root->value) 
	{
        root->right = Insert(root->right, value);
    }
    
    else
	{
        root->left = Insert(root->left, value);
    }
    return root;
}

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

int main() {
    BinarySearchTree d, *root = NULL, *temp;
    bool kondisi;
    int x, menu;
    kondisi = true;
	while (kondisi) {
    cout<<"======== MENU TUGAS UAS PSDA ========\n";
    cout<<"    Silahkan Pilih Menu dibawah ini    ";
    cout<<endl				   		   ;
    cout<<"1. Insert BST     			     	\n";
    cout<<"2. Search BST     			      	\n";
    cout<<"3. Delete BST        		 	\n";
    cout<<"4. In Order Traversal		   	\n";
    cout<<"5. Pre Order Traversal  			\n";
    cout<<"6. Post Order Traversal			\n";
    cout<<"7. Manimum Value BST   	                \n";
    cout<<"8. Maksimum Value BST			\n";
    cout<<"9. Clear BST  				\n";
    cout<<"0. EXIT  		                   	\n";
    cout<<"=====================================\n";
    cout<<"\n";
    cout<<"Fitur yang ingin dipakai=            \n";
    cin >> menu;
    
    	switch (menu) {
        	case 1: cout<<"Masukkan DATA = ";
					cin>> x;
    				root= d.Insert(root, x);
    				cout<<"DATA DIMASUKAN\n";
            		break ;

       		case 2: cout<<"Masukkan DATA = ";
					cin>> x;
    				if(d.find_Leaves(root, x))
                        cout<<"DATA DITEMUKAN\n";
                    else
                        cout<<"DATA TIDAK DITEMUKAN\n";
            		break ;

        	case 3: cout<<"Masukkan DATA = ";
					cin>> x;
					temp= d.deleteLeaves(root, x);
    				if(temp)
					{
                        root = temp;
                        cout<<"NODE TERHAPUS\n";
    				}
                    else
                        cout<<"DATA TIDAK DITEMUKAN\n";
            		break ;

        	case 4: cout<<"In Order Traversal= \n";
					d.InorderTraversal(root);
					cout<<endl;
            		break ;

        	case 5: cout<<"Pre Order Traversal= \n";
					d.preorderTraversal(root);
					cout<<endl;
            		break ;

		case 6: cout<<"Post Order Traversal= \n";
					d.postorderTraversal(root);
					cout<<endl;
            		break ;

		case 7: cout<<"DATA TERKECIL = \n"; 
					cout<< d.minLeaves(root);
					cout<<endl;
                    break;

		case 8: cout<<"DATA TERBESAR = \n"; 
					cout<< d.maxLeaves(root);
					cout<<endl;
                    break;
                    
                case 9: root = d.delete_tree(root);
                    cout<<"Clearing Tree, Done"<<endl;
                    break;

        	case 0: kondisi = false;
        			return 0;
					break;
					
        	default:cout<< "Silahkan Coba Lagi.\n\n";
					break;
			}
		}
	}
