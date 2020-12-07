#include "Classes.h"
#include <math.h>

Medicines::Medicines()
{
    this->med = gcnew String("");
    this->price = 0;
    this->availability = false;
}

Medicines::Medicines(Medicines^ m)
{
    this->med = gcnew String(m->med);
    this->price = m->price;
    this->availability = m->availability;
}

int Medicines::CompareTo(Medicines^ m)
{
    if (this->med->CompareTo(m->med) > 0)
        return 1;
    else
        return -1;
}

void Medicines::changeAvailability(void)
{
    this->availability = !this->availability;
}

void Medicines::makeSale(double s)
{
    this->price *= 1 - s / 100 ;
    this->price = round(this->price * 100) / 100;
}

Medicines::Medicines(String^ m, double p, bool a)
{
    this->med = gcnew String(m);
    this->price = p;
    this->availability = a;
}

Orders::Orders()
{
    this->name = gcnew String("");
    this->medicine = gcnew Medicines();
}

Orders::Orders(String^ n, Medicines^m, String^ tn, int nn)
{
    this->number = nn;
    this->telnumber = gcnew String(tn);
    this->name = gcnew String(n);
    this->medicine = gcnew Medicines(m);
}

Orders::Orders(Orders^ o, int n)
{
    this->number = n;
    this->telnumber = gcnew String(o->telnumber);
    this->name = gcnew String(o->name);
    this->medicine = gcnew Medicines(o->medicine);
}

int Orders::CompareTo(Orders^ O)
{
    if (this->number > O->number)
        return 1;
    else
        return -1;
}

myPredicate::myPredicate(int w)
{
    this->what = w;
}

myPredicate::myPredicate(String^ w)
{
    wh = gcnew String(w);
}

bool myPredicate::isMyOrder(Orders^ o)
{
    if (this->what == o->number)
        return true;
    else
        return false;
}

bool myPredicate::isMedicine(Medicines^ m)
{
    if (this->wh->CompareTo(m->med) == 0)
        return true;
    else
        return false;
}

void Look(System::Collections::Generic::List <Orders^>^ LIST, System::Collections::Generic::List <Medicines^>^ LIST2, System::Windows::Forms::DataGridView^ DGV)
{
    DGV->RowCount = 1;
    LIST->Sort();
    for each (Orders ^ el in LIST)
    {
        for each (Medicines ^ el2 in LIST2)
            if (el->medicine->med->CompareTo(el2->med) == 0)
                el->medicine->availability = el2->availability;
        DGV->Rows->Add(System::Convert::ToString(el->number),
            el->name, System::Convert::ToString(el->telnumber),
            el->medicine->med, System::Convert::ToString(el->medicine->price));
    }
}

void Look(System::Collections::Generic::List <Medicines^>^ LIST, System::Windows::Forms::DataGridView^ DGV)
{
    DGV->RowCount = 1;
    LIST->Sort();
    for each (Medicines ^ el in LIST) {
        String^ av;
        el->availability ? av = "В наличии" : av = "Нет в наличии";
        DGV->Rows->Add(el->med, System::Convert::ToString(el->price), av);
    }
}

void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <Orders^>^ LIST,
    System::Collections::Generic::Queue <Orders^>^ QUEUE)
{
    String^ line;
    int numbers = Convert::ToInt32(SR->ReadLine());
    for (int i = 0; i < numbers; i++) {
        line = SR->ReadLine();
        int n = Convert::ToInt16(line->Substring(0, line->IndexOf("#")));
        String^ name = gcnew String(line->Substring(line->IndexOf("#") + 1, 
            line->IndexOf("@") - line->IndexOf("#") - 1));
        String^ nt = line->Substring(line->IndexOf("@") + 1, line->IndexOf("$") - line->IndexOf("@") - 1);
        String ^ m = gcnew String(line->Substring(line->IndexOf("$") + 1, 
            line->IndexOf("&") - line->IndexOf("$") - 1));
        double p = Convert::ToDouble(line->Substring(line->IndexOf("&") + 1));
        Medicines^ med = gcnew Medicines(m,p,true);
        Orders^ O = gcnew Orders(name, med, nt,n);
        LIST->Add(O);
    }
    LIST->Sort();
    for each (Orders ^ O in LIST) {
        QUEUE->Enqueue(O);
    }
    QUEUE->TrimExcess();
    LIST->TrimExcess();
}

void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <Medicines^>^ LIST)
{
    String^ line;
    int numbers = Convert::ToInt16(SR->ReadLine());
    for (int i = 0; i < numbers; i++) {
        line = SR->ReadLine();
        String^ m = line->Substring(0, line->IndexOf("#"));
        double p = Convert::ToDouble(line->Substring(line->IndexOf("#") + 1, 
            line->IndexOf("@") - line->IndexOf("#") - 1));
        String^ a = line->Substring(line->IndexOf("@") + 1);
        bool aa;
        if (a->CompareTo("В наличии") == 0)
            aa = true;
        else
            aa = false;
        Medicines^ med = gcnew Medicines(m, p, aa);
        LIST->Add(med);
    }
    LIST->Sort();
    LIST->TrimExcess();
}
void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <Orders^>^ LIST)
{
    SW->WriteLine(LIST->Count);
    for each (Orders ^ O in LIST)
    {
        SW->WriteLine(O->number + "#" + O->name + "@" + 
            O->telnumber + "$" + O->medicine->med + "&" + O->medicine->price);
    }
}

void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <Medicines^>^ LIST) 
{
    SW->WriteLine(LIST->Count);
    for each (Medicines ^ M in LIST)
    {
        String^ av;
        if (M->availability)
            av = gcnew String("В наличии");
        else
            av = gcnew String("Нет в наличии");
        SW->WriteLine(M->med + "#" + M->price + "@" + av);
    }
}