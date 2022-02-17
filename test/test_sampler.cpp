#include "mcmc.h"

int main(int argc, char **argv)

{
    std::cout << "\n\nTesting non threaded Metropolis-Hastings algorithm...\n\n"
              << std::endl;

    std::string store_path_assigned = "./data_folder/collected_draws";
    std::string hashed_tables_path_assigned = "./data_folder/hashed_21j";
    int dspin_assigned = 3;
    int length_assigned = 10000;
    double sigma_assigned = 0.40;
    double burnin_assigned = 100;
    int verbosity = 0;
  
 
    Chain test_chain(store_path_assigned, hashed_tables_path_assigned, dspin_assigned, length_assigned, sigma_assigned, burnin_assigned, verbosity);

    Metropolis_Hastings_run(test_chain);

    return EXIT_SUCCESS;
}
