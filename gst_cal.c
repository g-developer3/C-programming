#include <stdio.h>

void gst_call(float gst);

int main(){
    float gst=100.00;

    gst_call(gst);

    return 0;
}

void gst_call(float gst){
     gst = gst + ("%f",0.18*gst);
     printf("%f",gst);
}
