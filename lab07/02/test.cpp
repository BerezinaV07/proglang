#include <iostream>

int main() {
    int x0=1, y0=2, z0=3;
    {
        int x=x0, y=y0, z=z0;
        (x=x+1), (z=z+2*x+3*y), (y=y+1);
        std::cout << "Method 1: x=" << x << " y=" << y << " z=" << z << "\n";
    }
    {
        int x=x0, y=y0, z=z0;
        (x++), (z=z+2*x+3*y), (y++);
        std::cout << "Method 2: x=" << x << " y=" << y << " z=" << z << "\n";
    }
    {
        int x=x0, y=y0, z=z0;
        (++x), (z=z+2*x+3*y), (++y);
        std::cout << "Method 3: x=" << x << " y=" << y << " z=" << z << "\n";
    }
    {
        int x=x0, y=y0, z=z0;
        x=x+1, z=z+2*x+3*y, y=y+1;
        std::cout << "Method 4: x=" << x << " y=" << y << " z=" << z << "\n";
    }
    {
        int x=x0, y=y0, z=z0;
        x=x+1;
        z=z+2*x+3*y;
        y=y+1;
        std::cout << "Original:   x=" << x << " y=" << y << " z=" << z << "\n";
    }
    return 0;
}