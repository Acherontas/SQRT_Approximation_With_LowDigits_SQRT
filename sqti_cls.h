#ifndef SQTI_CLS_H
#define SQTI_CLS_H


class sqti_cls
{
    public:
        sqti_cls();
        virtual ~sqti_cls();
        sqti_cls(const sqti_cls& other);
        sqti_cls& operator=(const sqti_cls& other);
        long double fractpart,intpart;
        long double epi_dio;
        long double dia_dio;
        long double section_temp;
        long double section_h;
        long double section_h_epi_dio;
        long double section_h_dia_dio;
        long double dia_dio_dio;
        long double dia_dio_four;
        long double afair;
        long double rsto[100];int rt=0;
        int sqti(long double mnm,int preci,int one,int two,int log_lvl,int cs,int st_th,long double cdis[1000]);
        int forward_fnl_weirdo(int vl,int auto_v,int st_th);
        int forward_show_lvec(int preci);
        long double get_appro_auto();

    protected:

    private:
};

#endif // SQTI_CLS_H
