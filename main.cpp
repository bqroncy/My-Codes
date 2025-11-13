#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int elemanSayisi;
    do
    {
        cout<<"Eleman sayisini giriniz (0-20):";
        cin>>elemanSayisi;
        if(elemanSayisi<=0||elemanSayisi>=20)
            cout<<"Aralikta bir sayi giriniz (0-20) !!!\n\n";
    }while(elemanSayisi<=0||elemanSayisi>=20);

    srand(time(0));
    int sayilar[20];

    for(int i=0; i<elemanSayisi; i++)
        sayilar[i]=rand()%90+10;
    int secim;
          cout<<endl;
          cin.ignore();
          system("cls");

    do
    {
        int tabloGenislik=elemanSayisi*5+1;
        int baslikUzunluk=22;
        int baslikKarakteriSayisi=(tabloGenislik-baslikUzunluk)/2;

        for(int i=0; i<baslikKarakteriSayisi; i++)
            cout<<"-";
        cout<<"Sayilar Dizisi Icerigi";
        for(int i=0; i<baslikKarakteriSayisi; i++)
            cout<<"-";
        cout<<endl;

        for(int i=0; i<tabloGenislik; i++)
            cout<<"*";
        cout<<endl;

        cout<<"| ";
        for(int i=0; i<elemanSayisi; i++)
            cout<<sayilar[i]<<" | ";
        cout<<endl;

        for(int i=1; i<=tabloGenislik; i++)
            cout<<"*";
        cout<<endl;


        cout<<"\n1 -  Tek Sayilari Goster!\n";
        cout<<"\n\n2 -  En Buyuk ve En Kucuk Sayilari Goster!\n";
        cout<<"\n\n3 -  Cikis!\n";
        cout<<"\n\n\n\n\t\t\tSeciminiz:";
        cin>>secim;

        if(secim==1)
        {

            for(int i=0; i<baslikKarakteriSayisi; i++)
                cout<<"-";
            cout<<"Sayilar Dizisi Icerigi";
            for(int i=0; i<baslikKarakteriSayisi; i++)
                cout<<"-";
            cout<<endl;

            for(int i=0; i<tabloGenislik; i++)
                cout<<"*";
            cout<<endl;

            cout<<"| ";
            for(int i=0; i<elemanSayisi; i++)
                cout<<sayilar[i]<<" | ";
            cout<<endl;

            for(int i=1; i<=tabloGenislik; i++)
                cout<<"*";
            cout<<endl;

            cout<<" ";

            for(int i=0; i<elemanSayisi; i++)
            {
                if(sayilar[i]%2!=0)
                    cout<<" ^^  ";
                else
                    cout<<"     ";
            }

            cout<<endl;
            cin.ignore();
            cin.get();
            system("cls");
        }


        else if(secim==2)
        {

            int enKucuk=sayilar[0];
            int enBuyuk=sayilar[0];


            for(int i=1; i<elemanSayisi; i++)
            {
                if(sayilar[i]<enKucuk)
                    enKucuk=sayilar[i];
                if(sayilar[i]>enBuyuk)
                    enBuyuk=sayilar[i];
            }
            cout<<endl;

            for(int i=0; i<baslikKarakteriSayisi; i++)
                cout<<"-";
            cout<<"Sayilar Dizisi Icerigi";
                for(int i=0; i<baslikKarakteriSayisi; i++)
                    cout<<"-";
            cout<<endl;

            for(int i=0; i<tabloGenislik; i++)
                cout<<"*";
            cout<<endl;

            cout<<"| ";
            for(int i=0; i<elemanSayisi; i++)
                cout<<sayilar[i]<<" | ";
            cout<<endl;

            for(int i=1; i<=tabloGenislik; i++)
                cout<<"*";
            cout<<endl;
            cout<<" ";

            for(int i=0; i<elemanSayisi; i++)
            {
                if(sayilar[i]==enKucuk||sayilar[i]==enBuyuk)
                    cout<<" ^^  ";
                else
                    cout<<"     ";
            }
            cout<<endl;
            cin.ignore();
            cin.get();
            system("cls");

        }

        else if(secim==3)
        {
            break;
        }
        else
            cout<<"\nGECERSIZ ISLEM !!!\n\n\n\n\n\n";
    }while(secim!=3);
        return 0;
}
