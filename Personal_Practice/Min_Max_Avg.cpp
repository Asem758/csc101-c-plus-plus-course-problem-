void normalizeMinMaxAvg(double data[], int size,double& min, double&
    max, double& avg)
{
    if(size<=0)
        return;
    min= max = data[0];

    int count = 0;
    double sum = 0;
    int i;
    avg = 0;

    for (i=1; i < size; i++)
    {
        count++;
        sum += data[i];

        if ( data[i] > max)
        {
            max=data[i];
        }

        else if (data[i] < min)
        {
            min=data[i];
        }
    }
    avg = sum/(double)count;
}

int main ()
{
    double data[]={10.0,0.0,20.0,30.0};
    double min,max,avg;

    normalizeMinMaxAvg (data, 4, min, max, avg);
    cout <<"Minimum number: " << min <<"Maximum number : " << max <<"Average number: " << avg <<endl;
    return 0;
}
