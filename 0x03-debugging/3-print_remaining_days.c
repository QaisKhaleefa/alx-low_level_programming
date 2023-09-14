void print_remaining_days(int month, int day, int year)
{
    if (year % 4 == 0 )
    {
        if (month > 2 && day > 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("days of the year is = %d",  day - 1);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
