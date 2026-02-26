#include <stdio.h>
int main() 
{
    int n, i;
    float waste[30];
    float total = 0, average;
    float max, min;
    float carbon, energy, compost, sei;
    float threshold;
    
    // Sustainability constants
    float k = 2.5;     // Carbon emission factor
    float eta = 1.2;   // Energy recovery factor
    float delta = 0.6; // Compost conversion factor

    printf("---------------------------------------\n");
    printf("SMART WASTE SUSTAINABILITY ANALYZER\n");
    printf("---------------------------------------\n");

    printf("Enter number of days to analyze (max 30): ");
    scanf("%d", &n);

    if (n <= 0 || n > 30)
    {
        printf("Invalid number of days.\n");
        return 0;
    }

    // Gets waste data input from User
    printf("\nEnter waste generated (kg) for each day:\n");
    for (i = 0; i < n; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%f", &waste[i]);
        total += waste[i];
    }

    // Calculates average
    average = total / n;

    // Calculates max and min
    max = waste[0];
    min = waste[0];

    for (i = 1; i < n; i++)
    {
        if (waste[i] > max)
            max = waste[i];

        if (waste[i] < min)
            min = waste[i];
    }

    // Sustainability calculations
    carbon = total * k;
    energy = total * eta;
    compost = total * delta;

    sei = (energy + compost) / total;

    // Anomaly detection
    threshold = average * 1.2;

    printf("\n----------- WASTE SUMMARY -----------\n");
    printf("Total Waste: %.2f kg\n", total);
    printf("Average Waste: %.2f kg\n", average);
    printf("Highest Waste: %.2f kg\n", max);
    printf("Lowest Waste: %.2f kg\n", min);

    printf("\n-------- SUSTAINABILITY METRICS --------\n");
    printf("Total Carbon Emission: %.2f kg CO2 eq\n", carbon);
    printf("Total Energy Recovery: %.2f kWh\n", energy);
    printf("Total Compost Generation: %.2f kg\n", compost);
    printf("Sustainability Efficiency Index (SEI): %.2f\n", sei);

    printf("\n-------- ANOMALY REPORT --------\n");
    int anomaly_found = 0;
    for (i = 0; i < n; i++)
    {
        if (waste[i] > threshold)
        {
            printf("High Waste Anomaly Detected on Day %d\n", i + 1);
            anomaly_found = 1;
        }
    }

    if (anomaly_found==0)
    {
        printf("No abnormal waste spikes detected.\n");
    }

    printf("\nProgram Completed Successfully.\n");

    return 0;
}
