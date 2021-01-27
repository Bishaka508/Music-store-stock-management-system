
#include <iostream>
using namespace std;

int rightt=0;
int wrong =0;
void Trans(int a)//the total counting of failed and successful transactions
{
    if(a==0)
        wrong++;
    else
        rightt++;
}
class book
{

private:
    int bookcode;
    string author;
    string booktitle;
    double bookprice;
    string bookpublisher;
    int bookstock;

    void bookpriceUpdate()   //to update the price of the book.
    {
        cout<<"\nEnter the new price>> ";
        cin>>bookprice;
        cout<<endl;
    }
    void bookstockUpdate() //to update the book  stock.
    {
        cout<<"\nEnter the new stock>> ";
        cin>>bookstock;
        cout<<endl;
    }
public:


    book(int u,string x,string y,string z, double w, int v)//to initialize the data members.
    {
        bookcode=u;
        booktitle=x;
        author=y;
        bookpublisher=z;
        bookprice=w;
        bookstock=v;

    }
    book(string x,string y)   //for initializing data members.
    {
        author=x;
        bookpublisher=y;
    }
    int search(book x)   //for searching the book
    {
        if(author==x.author&&bookpublisher==x.bookpublisher)
            return 1;
        else
            return 0;
    }
         void noOfcopiesB()  //checking number of copies
    {
        int n;
        cout<<"\nBook Information>> "<<endl;
        showdetailB();
        cout<<"How many copies do you want>> ";
        cin>>n;
        if(n>bookstock)
        {
            cout<<"Required copies is not in stock"<<endl;
            Trans(0);
        }
        else
        {

            cout<<" The total price of the books>> "<<n*bookprice<<endl;  //to find out total price
            bookstock=bookstock-n;
            cout<<"\nRemaining stock: "<<bookstock<<endl;
            Trans(1);
        }
    }



   void showdetailB() //To show book contents
    {
        cout<<"Book code: "<<bookcode<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Book Publisher: "<<bookpublisher<<endl;
        cout<<"Book Title: "<<booktitle<<endl;
        cout<<"Book Price: "<<bookprice<<endl;
        cout<<"The available stocks>> "<<bookstock<<endl;
        cout<<endl;
    }
    void bookupdate() //for updating the price and stock of book
    {
        int x;
        cout<<"Select what to update\n1.Price\n2.Stock"<<endl;
        cin>>x;
        if(x==1)
            bookpriceUpdate();
        else
            bookstockUpdate();
    }
};




class CD
{
private:

    int CDcode;
    string artist;
    string CDtitle;
    double CDprice;
    string CDpublisher;
    int CDstock;

    void CDpriceUpdate()//to update price
    {
        cout<<"\nEnter the new price: ";
        cin>>CDprice;
        cout<<endl;
    }
    void CDstockUpdate() //to update stock
    {
        cout<<"\nEnter the new stock: ";
        cin>>CDstock;
        cout<<endl;
    }
public:
    CD(int c,string d,string e,string f, double g, int h) //to initialize the data members.
    {
        CDcode=c;
        CDtitle=d;
        artist=e;
        CDpublisher=f;
        CDprice=g;
        CDstock=h;
    }
    CD(string e,string f) //constructor
    {
        artist=e;
        CDpublisher=f;
    }
    int search(CD e)  //to search the CD in the list
    {
        if(artist==e.artist&&CDpublisher==e.CDpublisher)
            return 1;
        else
            return 0;
    }
         void noOfcopiesC() //checking the number of copies of CD.
    {
        int m;
        cout<<"\nCD Information>> "<<endl;
        showdetailC();
        cout<<"Enter required number of copies>> ";
        cin>>m;
        if(m>CDstock)
        {
            cout<<"Required copies is not in stock"<<endl;
            Trans(0);
        }
        else
        {
            cout<<"The total price of the CDS>> "<<m*CDprice<<endl;  //to calculate the total price of CD.
            CDstock=CDstock-m;
            cout<<"\nRemaining stock>> "<<CDstock<<endl;
            Trans(1);
        }
    }
   void showdetailC()      //To show CD contents
    {
        cout<<"CD code: "<<CDcode<<endl;
        cout<<"Artist: "<<artist<<endl;
        cout<<"CD Publisher: "<<CDpublisher<<endl;
        cout<<"CD Title: "<<CDtitle<<endl;
        cout<<"CD Price: "<<CDprice<<endl;
        cout<<"The stocks available: "<<CDstock<<endl;
        cout<<endl;
    }
    void CDupdate() //updates the price and stock of cd.
    {
        int e;
        cout<<"Select what to update\n1.Price\n2.Stock"<<endl;
        cin>>e;
        if(e==1)
            CDpriceUpdate();
        else
            CDstockUpdate();
    }
};






class Magazine
{
private:

    int Magazinecode;
    string writer;
    string Magazinetitle;
    double Magazineprice;
    string Magazinepublisher;
    int Magazinestock;

    void MagazinepriceUpdate()  //for  updating the price of magazine.
    {
        cout<<"\nEnter the new price>> ";
        cin>>Magazineprice;
        cout<<endl;
    }
    void MagazinestockUpdate()  //for updating the stock of magazine.
    {
        cout<<"\nEnter the new stock>> ";
        cin>>Magazinestock;
        cout<<endl;
    }
public:
    Magazine(int uu,string xx,string yy,string zz, double ww, int vv )      //to initialize the data members
    {
        Magazinecode=uu;
        Magazinetitle=xx;
        writer=yy;
        Magazinepublisher=zz;
        Magazineprice=ww;
        Magazinestock=vv;
    }
    Magazine(string xx,string yy)          //constructor
    {
        writer=xx;
        Magazinepublisher=yy;
    }
    int search(Magazine xx)   //to search the magazine in the list
    {
        if(writer==xx.writer&&Magazinepublisher==xx.Magazinepublisher)
            return 1;
        else
            return 0;
    }
         void noOfcopiesM()     //checking the number  of copies of magazines
    {
        int nn;
        cout<<"\nMagazine Details>> "<<endl;
        showdetailM();
        cout<<"Enter required number of copies>> ";
        cin>>nn;
        if(nn>Magazinestock)
        {
            cout<<"Required copies is not in stock"<<endl;
            Trans(0);
        }
        else
        {
            cout<<"Total cost of the CDS>> "<<nn*Magazineprice<<endl;//to find the total price charged for cds.
            Magazinestock=Magazinestock-nn;
            cout<<"\nRemaining stock>> "<<Magazinestock<<endl;
            Trans(1);
        }
    }
   void showdetailM()         //to show cd contents
    {
        cout<<"Magazine code: "<<Magazinecode<<endl;
        cout<<"Writer: "<<writer<<endl;
        cout<<"Magazine Publisher: "<<Magazinepublisher<<endl;
        cout<<"Magazine Title: "<<Magazinetitle<<endl;
        cout<<"Magazine Price: "<<Magazineprice<<endl;
        cout<<"The stocks available: "<<Magazinestock<<endl;
        cout<<endl;
    }
    void Magazineupdate()  //it updates the price and stock of magazine.
    {
        int xx;
        cout<<"Select what to update\n1.Price\n2.Stock"<<endl;
        cin>>xx;
        if(xx==1)
            MagazinepriceUpdate();
        else
            MagazinestockUpdate();
    }
};


class DVD
{
private:

    int DVDcode;
    string band;
    string DVDtitle;
    double DVDprice;
    string DVDpublisher;
    int DVDstock;

    void DVDpriceUpdate() {     //for updating the price of DVD.
        cout<<"\nEnter the new price>> ";
        cin>>DVDprice;
        cout<<endl;
    }
    void DVDstockUpdate()     //for updating the  stock of stock.
    {
        cout<<"\nEnter the new stock>> ";
        cin>>DVDstock;
        cout<<endl;
    }
public:
    DVD(int cc,string dd,string ee,string ff, double gg, int hh)  //to initialize the data members.
    {
        DVDcode=cc;
        DVDtitle=dd;
        band=ee;
        DVDpublisher=ff;
        DVDprice=gg;
        DVDstock=hh;
    }
    DVD(string ee,string ff)      //constructor
    {
        band=ee;
        DVDpublisher=ff;
    }
    int search(DVD ee)     //to search the DVDS in the list
    {
        if(band==ee.band&&DVDpublisher==ee.DVDpublisher)
            return 1;
        else
            return 0;
    }
         void noOfcopiesD() //checking the number  of copies of dvd.
    {
        int r;
        cout<<"\nDVD Information>> "<<endl;
        showdetailD();
        cout<<"Enter required number of copies>> ";
        cin>>r;
        if(r>DVDstock)
        {
            cout<<"Required copies is not in stock"<<endl;
            Trans(0);
        }
        else
        {
            cout<<"Total cost of the DVDS>> "<<r*DVDprice<<endl;// to calculate total price of the dvd.
            DVDstock=DVDstock-r;
            cout<<"\nRemaining stock>> "<<DVDstock<<endl;
            Trans(1);
        }
    }
   void showdetailD()     // to show dvd contents
    {
        cout<<"DVD code: "<<DVDcode<<endl;
        cout<<"BAND: "<<band<<endl;
        cout<<"DVD Publisher: "<<DVDpublisher<<endl;
        cout<<"DVD Title: "<<DVDtitle<<endl;
        cout<<"DVD Price: "<<DVDprice<<endl;
        cout<<"The stocks available: "<<DVDstock<<endl;
        cout<<endl;
    }
    void DVDupdate()      //to update the price and stock of dvds.
    {
        int ee;
        cout<<"Select what to update\n1.Price\n2.Stock"<<endl;
        cin>>ee;
        if(ee==1)
            DVDpriceUpdate();
        else
            DVDstockUpdate();
    }
};








    Magazine pp1(333,"MUSIC","namjoon","RM_ltd",80,25);
    Magazine pp2(334,"GRAMMY","Jungkook","kooki_ltd",70,20);
    Magazine pp3(335,"BBMA","Yoongi","meow_ltd",75,37);
    Magazine pp4(336,"MAMA","Jin","worldwide_ltd",82,30);
    Magazine pp5(337, "Golden","hoesok","hobi_ltd",65,22);



    book p1(111,"Demian","Herman_Hesse","Fisher_Verlag",211.5,10);
    book p2(112,"The_Rest_Is_Noise","Alex_Rox","Farrer",250,14);
    book p3(113,"Chronicles,","Bob_Dylan","Simon_Schuster",312.5,14);
    book p4(114,"Piano_Exam_Pieces","ABRSM","the_royals",156,7);
    book p5(115,"Revolution_in_the_Head","Ian_MacDo","penguin_house",235,4);



    CD q1(222,"Wings","BTS","Bighit",45,8);
    CD q2(223,"Minisode","TXT","JinHit",35,11);
    CD q3(224,"Border1","Enhypen","Belift",35,15);
    CD q4(225,"Resonance","NCT","SM",30,9);
    CD q5(226,"Panaroma","Izone","CJ_enm",20,17);


    DVD qq1(222,"Dynamite","BTS","Bighit",45,8);
    DVD qq2(223,"puma","TXT","JinHit",35,11);
    DVD qq3(224,"Given_Taken","Enhypen","Belift",35,15);
    DVD qq4(225,"Boss","NCT","SM",30,9);
    DVD qq5(226,"Violeta","Izone","CJ_enm",20,17);







void seller()
{

    int a,n,m,o,r;
    while(1){
    cout<<"\n>>>>>>>>>>>> WELCOME TO DYNAMITE MUSIC STORE <<<<<<<<<<<<<<<<<<"<<endl;
    cout<<"\n"<<endl;
    cout<<"\n>>>>>>>>>>>> MAKE YOUR ORDERS <<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
    cout<<"\n"<<endl;
    cout<<"-----Enter your choice----- \n1.Show books\n2.Show CDs\n3.Show Magazines \n4.Show DVDs \n5.Book Update \n6.CDS Update\n7.Magazine Update\n8.DVD Update \n9.Transactions\n10.Exit"<<endl;
     cout<<"\n"<<endl;
    cin>>a;
    cout<<endl;
    switch(a)
    {
        case 1: cout<<"\nBook Information>> "<<endl;
                p1.showdetailB();
                p2.showdetailB();
                p3.showdetailB();
                p4.showdetailB();
                p5.showdetailB();
                break;
       case 2:cout<<"\nCD Information>> "<<endl;
                q1.showdetailC();
                q2.showdetailC();
                q3.showdetailC();
                q4.showdetailC();
                q5.showdetailC();
                break;

       case 3:cout<<"\nMagazine Information>>  "<<endl;

                pp1.showdetailM();
                pp2.showdetailM();
                pp3.showdetailM();
                pp4.showdetailM();
                pp5.showdetailM();
                break;


      case 4:cout<<"\nDVDs Information>> "<<endl;

                         qq1.showdetailD();
                         qq2.showdetailD();
                         qq3.showdetailD();
                         qq4.showdetailD();
                         qq5.showdetailD();
                         break;

        case 5: cout<<"Book Update"<<endl;
                cout<<"Enter the book code which has to be updated>> ";
                cin>>n;
                if(n==111)
                    p1.bookupdate();
                else if(n==112)
                    p2.bookupdate();
                else if(n==113)
                    p3.bookupdate();
                else if(n==114)
                    p4.bookupdate();
                else if(n==115)
                    p5.bookupdate();
                else
                    cout<<"Invalid"<<endl;
                    break;



        case 6: cout<<"CD Update"<<endl;
                cout<<"Enter the cd code which has to be updated>> ";
                cin>>m;
                if(m==222)
                    q1.CDupdate();
                else if(m==223)
                    q2.CDupdate();
                else if(m==224)
                    q3.CDupdate();
                else if(m==225)
                    q4.CDupdate();
                else if(m==226)
                    q5.CDupdate();
                else
                    cout<<"Invalid"<<endl;
                    break;

       case 7:cout<<"Magazine Update"<<endl;
               cout<<"Enter the Magazine code which has to be updated>> ";
               cin>>o;
               if(o==333)
                   pp1.Magazineupdate();
               else if(o==334)
                   pp2.Magazineupdate();
               else if(o==335)
                   pp3.Magazineupdate();
               else if(o==336)
                   pp4.Magazineupdate();
               else if(o==337)
                   pp5.Magazineupdate();
               else
                   cout<<"Invalid"<<endl;
                   break;


            case 8:cout<<"DVD Update"<<endl;
                 cout<<"Enter the DVD code which has to be updated>> ";
                 cin>>r;
                 if(r==333)
                 qq1.DVDupdate();
                else if(r==334)
                 qq2.DVDupdate();
                 else if(r==335)
                  qq3.DVDupdate();
                 else if(r==336)
                 qq4.DVDupdate();
                 else if(r==337)
                   qq5.DVDupdate();
                else
                cout<<"Invalid"<<endl;
                break;



        case 9: cout<<"Total failed transaction>> "<<wrong<<endl;
                cout<<"The total successful transaction  is >> "<<rightt<<"."<<endl;

                cout<<endl;
                break;
        case 10:
                return;
    }
   }
}
void customer()
{
    int x;
    while(1)
    {
        cout<<"\nEnter a option \n1.Show Books \n2.Show CD's  \n3.Show Magazine \n4.Show DVD \n5.Purchase a book \n6.Purchase a CD \n7.Purchase a Magazine\n8.Purchase a DVD \n9.Exit"<<endl;
        cin>>x;
        if(x==1)
        {
            cout<<"\nBook Information>> "<<endl;
            p1.showdetailB();
            p2.showdetailB();
            p3.showdetailB();
            p4.showdetailB();
            p5.showdetailB();
        }
        else if(x==2){
           cout<<"\nCD Information>> "<<endl;
                 q1.showdetailC();
                 q2.showdetailC();
                 q3.showdetailC();
                 q4.showdetailC();
                 q5.showdetailC();

               }

                else if(x==3){
                  cout<<"\nMagazine Information>> "<<endl;
                        pp1.showdetailM();
                        pp2.showdetailM();
                        pp3.showdetailM();
                        pp4.showdetailM();
                        pp5.showdetailM();

                      }

          else if(x==4){
            cout<<"\nDVD Information>> "<<endl;
              qq1.showdetailD();
              qq2.showdetailD();
              qq3.showdetailD();
              qq4.showdetailD();
              qq5.showdetailD();
              }

        else if(x==5)
        {
            string a;
            string b;
            cout<<"Enter author name>> ";
            cin>>a;
            cout<<"Enter publisher name>> ";
            cin>>b;
            book p6(a,b);
            if(p6.search(p1)==1)
                p1.noOfcopiesB();
            else if(p6.search(p2)==1)
                p2.noOfcopiesB();
            else if(p6.search(p3)==1)
                p3.noOfcopiesB();
            else if(p6.search(p4)==1)
                p4.noOfcopiesB();
            else if(p6.search(p5)==1)
                p5.noOfcopiesB();
            else
            {
                cout<<"This book is not available"<<endl;
                Trans(0);
            }
        }
        else if(x==6)
        {
          string c;
          string d;
          cout<<"Enter artist name>> ";
          cin>>c;
          cout<<"Enter publisher name>> ";
          cin>>d;
          CD q6(c,d);
          if(q6.search(q1)==1)
              q1.noOfcopiesC();
          else if(q6.search(q2)==1)
              q2.noOfcopiesC();
          else if(q6.search(q3)==1)
              q3.noOfcopiesC();
          else if(q6.search(q4)==1)
              q4.noOfcopiesC();
          else if(q6.search(q5)==1)
              q5.noOfcopiesC();
          else
          {
              cout<<"This CD is not available"<<endl;
              Trans(0);
          }
        }
        else if(x==7)
        {
          string e;
          string f;
          cout<<"Enter writer name>> ";
          cin>>e;
          cout<<"Enter publisher name>> ";
          cin>>f;
          Magazine pp6(e,f);
          if(pp6.search(pp1)==1)
              pp1.noOfcopiesM();
          else if(pp6.search(pp2)==1)
              pp2.noOfcopiesM();
          else if(pp6.search(pp3)==1)
              pp3.noOfcopiesM();
          else if(pp6.search(pp4)==1)
              pp4.noOfcopiesM();
          else if(pp6.search(pp5)==1)
              pp5.noOfcopiesM();
          else
          {
              cout<<"This Magazine is not available"<<endl;
              Trans(0);
          }
        }

        else if(x==8)
        {
          string g;
          string h;
          cout<<"Enter writer name>> ";
          cin>>g;
          cout<<"Enter publisher name>> ";
          cin>>h;
          DVD qq6(g,h);
          if(qq6.search(qq1)==1)
              qq1.noOfcopiesD();
          else if(qq6.search(qq2)==1)
              qq2.noOfcopiesD();
          else if(qq6.search(qq3)==1)
              qq3.noOfcopiesD();
          else if(qq6.search(qq4)==1)
              qq4.noOfcopiesD();
          else if(qq6.search(qq5)==1)
              qq5.noOfcopiesD();
          else
          {
              cout<<"This DVD is not available"<<endl;
              Trans(0);
          }
        }

        else
            return;
    }
}

int main()
{
    int a;
    while(1)
    {
        cout<<"\n ~~~~~~~~~~~                      ~~~~~~~~~~~~ "<<endl;
        cout<<"\n ~~~~~~~~~~~                      ~~~~~~~~~~~~ "<<endl;
        cout<<"\n ~~~~~~~~~~~  CST2550 COURSEWORK1 ~~~~~~~~~~~~ "<<endl;
        cout<<"\n ~~~~~~~~~~~                       ~~~~~~~~~~~~ "<<endl;
        cout<<"\n ~~~~~~~~~~~                        ~~~~~~~~~~~~ "<<endl;
        cout<<"\n "<<endl;
        cout<<"\n ~~~~~~~~ CHOOSE ANY OF THE FOLLOWING ~~~~~~~~~~~"<<endl;
        cout<<"\n1.>>>>  Customer Menu  <<<<\n2.>>>>  Seller Menu  <<<<\n3.>>>>  Quit  <<<<"<<endl;
        cin>>a;
        cout<<endl;
        if(a==1)
            customer();
        else if(a==2)
                seller();
        else
            return 0;
    }
}
