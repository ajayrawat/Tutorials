#include <petsc.h>

int main(int argc, char **argv)
{
    Mat A;
    Vec b;
    PetscInitialize(&argc, &argv, NULL, "Create vector AND matrix\n");
    return PetscFinalize();
}