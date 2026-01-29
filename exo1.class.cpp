#include <iostream>
#include <cstring>
class Etudiant
{
    private:
        char name[25];
        float note;
    public:
        Etudiant(char no[25], float n)
        {
            strncpy(no,this->name,sizeof(no));
            this->note = n;
        }
        *char getName()
        {
            return name;
        }
        void setName(char no[25])
        {
            strncpy(no,name,sizeof(no));
        }
        void getNote()
        {
            return note;
        }
        void setNote(float newnote)
        {
            if(newnote>=0 && newnote<=20)
                note = newnote;
            else{
                std::cout<<"Note invalide"<<std::endl;
            }
        }
}
int main()
{
    Etudiant e1("ADKING",12)
}