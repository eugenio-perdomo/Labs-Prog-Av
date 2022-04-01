
    #include "./../headers/Jugador.h"

    Jugador::Jugador(string nick, int edad, string contra)
    {
        this->nickname = nick;
        this->edad = edad;
        this->contrasenia = contra;
    }

    void Jugador::setNickname(string n)
    {
        this->nickname = n;
    }
    void Jugador::setEdad(int e)
    {
        this->edad = e;
    }
    void Jugador::setContrasenia(string contra)
    {
        this->contrasenia = contra;
    }
    string Jugador::getNickname()
    {
        return nickname;
    }
    int Jugador::getEdad()
    {
        return edad;
    }
    string Jugador::getContrasenia()
    {
        return contrasenia;
    }