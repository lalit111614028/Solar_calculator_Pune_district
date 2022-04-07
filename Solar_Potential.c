#include <stdio.h>

int main()
{
   float temp,Elev, RH, Dust, GHI, HS, Aspct;
   float a, b, c, d, e, f, g, z, m,n;
   int ans, bns;
   char x = 3;
   float y;
   /* These are efficiency parameters Temprature, Elevation,
Realative Humidity, Dust, Global Horizontal Irradiance, Hillshade,
Aspect respectively.
*/
   printf("Welcome to solar potential calculator\n");

   scanf("%c", &a);

   printf("To get the solar potential of your location, input the following data.\n ");

   scanf("%c", &a);

   // Temprature

 do
   {
      printf("Enter the Tempereature in degree celsius.\n");
   scanf("%f", &temp);
      if (14 > temp || temp > 41)
      {
         printf(" Data Entered is Invalid !! \n Please Enter Valid Temprature.\n");
      }

   } while (14 > temp || temp > 41);

  

   // ELEVATION
   do
   {
      printf("Enter the Elevation in meters.\n");
      scanf("%f", &Elev);
      if (10 > Elev || Elev > 1410)
      {
         printf(" Data Entered is Invalid !! \n Please Enter Valid Elivation.\n");
      }

   } while (10 > Elev || Elev > 1410);

   // Relative Humidity

   do
   {
      printf("Enter the Realative Humidity.\n");

      scanf("%f", &RH);
      if (0 > RH || RH > 100)
      {
         printf("Data Entered is Invalid !! \n Please Enter Valid Realative Humidity.\n");
      }

   } while (0 > RH || RH > 100);

// Soil 

  do
   {
      printf("Enter the Soil type.\n Clay Loam = 4\n Loam =3 \n Fine Sandy Loam = 2 \n Sandy Loam = 1 \n ");
   scanf("%f", &Dust);
      if (0 > Dust || Dust > 4)
      {
         printf("Data Entered is Invalid !! \n Please Enter Valid Soil type.\n");
      }

   } while (0 > Dust || Dust > 4);

   // Global Horizontal Irradiance
  
    do
   {
    printf("Enter the Global horizontal Irradiance.\n");
   scanf("%f", &GHI);
      if (1211 > GHI || GHI > 1989)
      {
         printf("Data Entered is Invalid !! \n Please Enter Valid Global Horizontal Irradiance.\n");
      }

   } while (1211 > GHI || GHI > 1989);

  // Hillshade

  do
   {
    printf("Enter the hillshade.\n");
   scanf("%f", &HS);
      if (0 > HS || HS > 255)
      {
         printf("Data Entered is Invalid !! \n Please Enter Valid Hillshade.\n");
      }

   } while (0 > HS || HS > 255);


// Aspect
   
   do
   {
     printf("Enter the Aspect angle.\n");
   scanf("%f", &Aspct);
      if (0 > Aspct || Aspct > 360)
      {
         printf("Data Entered is Invalid !! \n Please Enter Valid Aspect.\n");
      }

   } while (0 > Aspct || Aspct > 360);


   if (0 <= Aspct < 45 || 315 <= Aspct < 360)
   {
      y = 0.25;
   }
   else if (45 <= Aspct < 90 || 270 <= Aspct < 315)
   {
      y = 0.5;
   }
   else if (90 <= Aspct < 135 || 225 <= Aspct < 270)
   {
      y = 0.75;
   }
   else if (135 <= Aspct < 225)
   {
      y = 1;
   }
   else
   {
      y = 1;
   }

   a = (temp - 14.7424) / (40.6063 - 14.7424);

   b = (Elev - 10) / (1410 - 10);

   c = (RH - 52.45) / (63.64 - 52.45);

   d = Dust;

   e = (GHI - 1211.9) / (1988.42 - 1211.9);

   f = (HS / 255);

   z = (-a) * 0.143 + b * 0.096 - c * 0.088 - (d * 0.118) / 4 + e * 0.223 + f * 0.201 + y * 0.132;

   m = ((z + 0.0461564) / (0.508379 + 0.0461564)) * 100;
   
   n = ((m+99)/(177+99))*100;

   printf("The solar potential at your location is %f\n", n);

     scanf("%c", &a);
 scanf("%c", &a);
 scanf("%c", &a);
 scanf("%c", &a);
 scanf("%c", &a);

   return 0;
}
