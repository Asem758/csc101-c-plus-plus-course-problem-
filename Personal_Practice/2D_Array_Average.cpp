double dAvg(double array[], size_t length){
    size_t c;
    double sum = 0;

    // Calculate sum first
    for (c = 0; c < length; c++){
        sum += array[c];
    }

    // Find average by dividing the sum by the number of numbers in a row
    return sum / (double) length;
}

int main(void){
    int i;
    //Initiallize array
    double array[3][5] = {{3.0,5.0,2.0,1.0,0.0}, {4.0,8.0,6.0,3.0,3.0}, {7.0,6.0,2.0,3.0,5.0}};

    //Computes the average value per row of array
    for(i = 0; i < 3; i++){
        printf("The average of row %d is %f\n", i, dAvg(array[i], 5));
    }

    return 0;
}
