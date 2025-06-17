#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string Order = "";
    int bill = 0;
       //Generate a table
    printf("LUNCH\t\t\tDESSERTS\t\tDRINKS\n");
    printf("(1)Biryani\t\t(A)Chocolate cake\t(a)Lemonade\n");
    printf("(2)Lobya\t\t(B)Ice-cream\t\t(b)Coffee\n");
    printf("(3)Chicken Karahi\t(C)Brownie\t\t(c)Fresh Lime\n");

       //Prompt the user
    int Lunch = get_int("What would you like in lunch Sir?  ");
    char Dessert = get_char("What would you like in Dessert?  ");
    char Drinks = get_char("What would you like in Drink?  ");
       //Assigning prices of items to variables
    int l_1 = 500;
    int l_2 = 200;
    int l_3 = 800;

    int D_A = 400;
    int D_B = 150;
    int D_C = 200;

    int d_a = 100;
    int d_b = 200;
    int d_c = 80;


    if(Lunch == 1){
        bill = bill+l_1;

        if(Dessert== 'A'){
            bill = bill+D_A;

            if(Drinks=='a'){
                Order = "\nBiryani\nChocolate cake\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nBiryani\nChocolate cake\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                 Order ="\nBiryani\nChocolate cake\nFresh Lime\n";
                 bill = bill+d_c;
            }

        }


        else if(Dessert=='B'){
            bill = bill+D_B;

            if(Drinks=='a'){
                Order = "\nBiryani\nIce-cream\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nBiryani\nIce-cream\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nBiryani\nIce-cream\nFresh Lime\n";
                bill = bill+d_c;
            }
        }

        else if(Dessert=='C'){
            bill = bill+D_C;

            if(Drinks=='a'){
                Order = "\nBiryani\nBrownie\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nBiryani\nBrownie\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nBiryani\nBrownie\nFresh Lime\n";
                bill = bill+d_c;
            }

        }


    }


        if(Lunch == 2){
            bill = bill+l_2;


        if(Dessert== 'A'){
            bill = bill+D_A;

            if(Drinks=='a'){
                Order = "\nLobya\nChocolate cake\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nLobya\nChocolate cake\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                 Order = "\nLobya\nChocolate cake\nFresh Lime\n";
                 bill = bill+d_c;
            }

        }


        else if(Dessert=='B'){
            bill = bill+D_B;

            if(Drinks=='a'){
                Order = "\nLobya\nIce-cream\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nLobya\nIce-cream\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nLobya\nIce-cream\nFresh Lime\n";
                bill = bill+d_c;
            }
        }

        else if(Dessert=='C'){
            bill = bill+D_C;

            if(Drinks=='a'){
                Order = "\nLobya\nBrownie\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nLobya\nBrownie\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nLobya\nBrownie\nFresh Lime\n";
                bill = bill+d_c;
            }

        }


    }

        if(Lunch == 3){
            bill = bill+l_3;


        if(Dessert== 'A'){
            bill = bill+D_A;

            if(Drinks=='a'){
                Order = "\nChicken Karahi\nChocolate cake\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nChicken Karahi\nChocolate cake\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                 Order = "\nChicken Karahi\nChocolate cake\nFresh Lime\n";
                 bill = bill+d_c;
            }

        }


        else if(Dessert=='B'){
            bill = bill+D_B;

            if(Drinks=='a'){
                Order = "\nChicken Karahi\nIce-cream\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nChicken Karahi\nIce-cream\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nChicken Karahi\nIce-cream\nFresh Lime\n";
                bill = bill+d_c;
            }
        }

        else if(Dessert=='C'){
            bill = bill+D_C;

            if(Drinks=='a'){
                Order = "\nChicken Karahi\nBrownie\nLemonade\n";
                bill = bill+d_a;
            }
            else if(Drinks=='b'){
                Order = "\nChicken Karahi\nBrownie\nCoffee\n";
                bill = bill+d_b;
            }
            else if(Drinks=='c'){
                Order = "\nChicken Karahi\nBrownie\nFresh Lime\n";
                bill = bill+d_c;
            }
        }
    }

        //Order
    printf("\nYour order is: %s\n",Order);
    printf("Your bill is: %d\n",bill);

}
