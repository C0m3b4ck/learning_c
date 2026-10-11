#include <stdio.h>
#include <string.h>

#define NAME_LEN 30

int main()
{
    int asset_ammount = 0;

    printf("=== Compound interest calculator ===\n");
    printf("Input asset ammount: ");
    scanf("%d", &asset_ammount);

    printf("/// Input assets in the order that they compound ///\n");

    char asset_names[asset_ammount][NAME_LEN] = {};
    double asset_percentages[asset_ammount];

    for (int i = 0; i < asset_ammount; i++)
    {
        char asset_name_tmp[NAME_LEN] = "";
        getchar();
        printf("Input asset name: ");
        fgets(asset_name_tmp, sizeof(asset_name_tmp), stdin);
        asset_name_tmp[strcspn(asset_name_tmp, "\n")] = '\0';
        strcpy(asset_names[i], asset_name_tmp);

        printf("Input interest percentage: ");
        scanf("%le", &asset_percentages[i]);
    }

    // get years, then start simulation
    int increments = 0;
    printf("Input how many increments (such as years): ");
    scanf("%d", &increments);

    float starting_sum = 0;
    printf("Input starting sum: ");
    scanf("%f", &starting_sum);
    float total_sum = starting_sum;

    for (int i = 0; i < increments; i++)
    {
        printf("--- Increment %d ---\n", i);
        for (int j = 0; j < asset_ammount; j++)
        {
            float incremented = ((total_sum / 100) * asset_percentages[j]);
            total_sum += incremented;
            printf("Total sum: %f - incremented %f\n", total_sum, incremented);
        }
    }
    printf("--- Total sum: %f ---\n", total_sum);
    printf("--- Rounded total sum: %.2f ---\n", total_sum);
    float earned_sum = (total_sum - starting_sum);
    printf("--- Earned: %f ---\n", earned_sum);
    printf("--- Rounded earnings: %.2f ---\n", earned_sum);

    return 0;
}
