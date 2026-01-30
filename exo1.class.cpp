#include <iostream>
#include <cstring>

class Etudiant
{
private:
    char name[25];
    float note;

public:
    Etudiant(const char no[25], float n)
    {
        strncpy(name, no, sizeof(name));
        name[sizeof(name) - 1] = '\0'; // sécurité
        note = n;
    }

    const char* getName()
    {
        return name;
    }

    void setName(const char no[25])
    {
        strncpy(name, no, sizeof(name));
        name[sizeof(name) - 1] = '\0';
    }

    float getNote()
    {
        return note;
    }

    void setNote(float newnote)
    {
        if (newnote >= 0 && newnote <= 20)
            note = newnote;
        else
            std::cout << "Note invalide" << std::endl;
    }
};

int main()
{
    Etudiant e1("ADKING", 12);

    std::cout << "Nom : " << e1.getName() << std::endl;
    std::cout << "Note : " << e1.getNote() << std::endl;

    return 0;
}
