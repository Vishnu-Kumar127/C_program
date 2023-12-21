#include <stdio.h>

int main() 
{
    int totalHoursNeeded, numDays, numWorkers;

    printf("Enter the total number of hours needed: ");
    scanf("%d", &totalHoursNeeded);
    printf("Enter the number of days: ");
    scanf("%d", &numDays);
    printf("Enter the number of workers: ");
    scanf("%d", &numWorkers);

    int normalHoursPerDay = 8;
    int overtimeHoursPerDay = 2;
    int trainingDays = numDays * 10 / 100;
    int availableDays = numDays - trainingDays;
    int totalAvailableHours = availableDays * numWorkers * (normalHoursPerDay + overtimeHoursPerDay);

    if (totalAvailableHours >= totalHoursNeeded) 
    {
        int hoursLeft = totalAvailableHours - totalHoursNeeded;
        printf("Yes! %d hours left.\n", hoursLeft);
    } 
    else 
    {
        int additionalHoursNeeded = totalHoursNeeded - totalAvailableHours;
        printf("Not enough time! %d hours needed.\n", additionalHoursNeeded);
    }

    return 0;
}
