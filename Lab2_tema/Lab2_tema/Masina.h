class Masina {
private:
    const char* firma;
    int nr_litri_combustibili;
    int consum;
    int kilometraj;
public:
    void Set_firma(const char* f);
    const char* Get_firma();

    void Set_nr_litri_combustibili(int nlc);
    int Get_nr_litri_combustibili();

    void Set_consum(float c);
    float Get_consum();

    void Set_kilometraj(int k);
    int Get_kilometraj();

    int bisnitar();
    void cursa(int distanta);

};
