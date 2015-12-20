//
//  main.cpp
//  vhdl_switch_case_compute
//
//  Created by Keerthikan Ratnarajah on 02/12/15.
//  Copyright (c) 2015 Keerthikan Ratnarajah. All rights reserved.
//

#include <iostream>
#include <math.h>

typedef std::pair<int,int> coordinate;

template <typename T> int sgn(T val) {
    return (T(0) < val) - (val < T(0));
}

coordinate endpoint(double angle, coordinate start, int lenght)
{
    double radians = (M_PI/180)*angle;
    
    double x2 = start.first + (lenght * cos(radians));
    double y2 = start.second + (lenght * sin(radians));
    
    return std::make_pair(round(x2),round(y2));
}

coordinate st(double angle, coordinate start)
{
    double radians = (M_PI/180)*angle;

    int x2 = 0;
    int y2= 0;
    int length = 0;
    int count = 0;
    
    do {
        x2 = start.first + (length * cos(radians));
        y2 = start.second + (length * sin(radians));
        //std::cout << x2 <<  y2 << std::endl;
        length++;
    } while (x2<20 &&  y2<20 && x2>0 && y2>0);
    
    return std::make_pair(round(x2),round(y2));

}
coordinate endpoints(double angle, coordinate start)
{
    double radians = (M_PI/180)*angle;
    double x2 = 0;
    double y2= 0;
    int lenght = 0;
    int count = 0;
    while (round(x2) != 19 &&  round(y2) != 19)
    {
        count++;
        x2 = start.first + (lenght * cos(radians));
        y2 = start.second + (lenght * sin(radians));
        std::cout << round(x2) << " , "<< round(y2) << std::endl;
        
        
        if (sgn(x2) == -1)
        {
            x2 *= -1;
        }
        if (sgn(y2) == -1)
        {
            y2 *= -1;
        }

        lenght++;
    }
    
       std::cout << "count: " <<count << std::endl;

    return std::make_pair(round(x2),round(y2));
}
void Line(coordinate start, coordinate end )
{
    // Bresenham's line algorithm
    const bool steep = (fabs(end.second - start.second) > fabs(end.first - start.first));
    bool swap = false;
    if(steep)
    {
        std::swap(start.first, start.second);
        std::swap(end.first, end.second);
    }
    
    if(start.first > end.first)
    {
        std::cout << "--swapped" <<std::endl;
        swap = true;
        std::swap(start.first, end.first);
        std::swap(start.second, end.second);
    }
    
    const float dx = end.first - start.first;
    const float dy = fabs(end.second - start.second);
    
    float error = dx / 2.0f;
    const int ystep = (start.second < end.second) ? 1 : -1;
    int y = (int)start.second;
    
    const int maxX = (int)end.first;
    int count = 0;
    int count_inv = 10;
    for(int x=(int)start.first; x<=maxX; x++)
    {
        
        if(steep)
        {
            //std::cout << "lol" << std::endl;
            //Outer LED first set
            //(y,x)
            if (swap)
            {
                   std::cout << "output_led_" << count_inv << " <= " << "output" << "(" << y << ")("<< x << ");" << std::endl;
                   count_inv--;
            }
            else
            {
                std::cout << "--swap_inv: " << count_inv << std::endl;
                std::cout << "output_led_" << count << " <= " << "output" << "(" << y << ")("<< x << ");" << std::endl;
            }
        }
        else
        {   //Inner LED first set
            //(x,y)
            if (swap)
            {
                std::cout << "output_led_" << count_inv << " <= " << "output" << "(" << x << ")("<< y<< ");" << std::endl;
                count_inv--;

            }
            else
            {
                std::cout << "--swap: " << count << std::endl;
                std::cout << "output_led_" << count << " <= " << "output" << "(" << x << ")("<< y<< ");" << std::endl;
                //std::cout << "mark: "<< "(" << x <<","<< y <<")"<< std::endl;
            }
        }
        
        error -= dy;
        if(error < 0)
        {
            y += ystep;
            error += dx;
        }
     
        count++;
     
    }
    
}


int main(int argc, const char * argv[])
{
   
    coordinate start = std::make_pair(10,10);
    for (int i = 0; i < 360; i++)
    {
        coordinate end = st(i,start);
        std::cout << "--    endPos: "<< "(" << end.first <<","  << end.second   <<")"    << " Angle: " << i << "       " <<         std::endl;
        std::cout << "--    startPos: " <<"(" << start.first << "," << start.second << ")" << " Angle: " << i << "       " <<       std::endl;
        std::cout << "when " << i <<" =>"<<  std::endl;
        Line(start, end);
        std::cout << "--------------------------------------------" << std::endl;
    }
    
    return 0;
}
