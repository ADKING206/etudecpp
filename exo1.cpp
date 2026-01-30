#include <iostream>

struct Etudiant 
{
    char name[25];
    float note;
};
bool noteValide(float n)
{
    if(n<=20 && n>=0)
    {
        return true;
    }
    return false;
}
void saisirEtudiant(Etudiant &etudiant)
{
    std::cout <<"Veuillez saisir votre nom: "<<std::endl;
    std::cin>> etudiant.name;
    do{
        std::cout<<"Veuillez saisir votre note: "<<std::endl;
        std::cin>>etudiant.note;
        if(!noteValide(etudiant.note))
        {
            std::cout<< "La note saisir n'est pas valide veuillez la resaisir"<<std::endl;
        }
    }while(!noteValide(etudiant.note));
}
void afficheEtudiant(Etudiant &etudiant)
{
    std::cout<<"votre nom: "<<etudiant.name<<std::endl;
    std::cout<<"votre note: "<<etudiant.note<<std::endl;
}
void saisirTabEtudiant(Etudiant et[], int N)
{
    for(int i=0; i<N; i++)
    {
        std::cout <<"L'etudiant N "<<i+1<<std::endl;
        saisirEtudiant(et[i]);
    }
}
void afficheTabEtudiant(Etudiant et[], int N)
{
    for(int i=0; i<N; i++)
    {
        std::cout <<"L'etudiant N "<<i+1<<std::endl;
        afficheEtudiant(et[i]);
    } 
}
int main()
{
    const int N=3;
    Etudiant etud[N];
    saisirTabEtudiant(etud,N);
    afficheTabEtudiant(etud,N);
    return 0;
}