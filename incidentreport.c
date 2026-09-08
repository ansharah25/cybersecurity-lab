#include <stdio.h>

int main() {
    char incident_id[50];
    char analyst[50];
    int affected_systems;
    double recovery_cost;
    double downtime;
    double total_cost;

    printf("Enter Incident ID: ");
    scanf(" %[^\n]", incident_id);

    printf("Enter Analyst Name: ");
    scanf(" %[^\n]", analyst);

    printf("Enter Affected Systems: ");
    scanf("%d", &affected_systems);

    printf("Enter Recovery Cost: ");
    scanf("%lf", &recovery_cost);

    printf("Enter Downtime (in hours): ");
    scanf("%lf", &downtime);
    total_cost = affected_systems * recovery_cost;

    
    printf("\n====================================\n");
    printf("     SECURITY INCIDENT REPORT\n");
    printf("====================================\n");
    printf("Incident ID      : %s\n", incident_id);
    printf("Analyst          : %s\n", analyst);
    printf("Affected Systems : %d\n", affected_systems);
    printf("Recovery Cost    : %.0f\n", recovery_cost);
    printf("Total Cost       : %.0f\n", total_cost);
    printf("Downtime         : %.2f hours\n", downtime);
    printf("====================================\n");

    return 0;
}
