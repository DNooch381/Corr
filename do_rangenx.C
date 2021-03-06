#include <iostream>

#include "RanGenX.C"

using namespace std;

int main(int argc, char *argv[])
{

  // --- preamble

  cout << "Processing with arguments ";
  for ( int i = 0; i < argc; ++i )
    {
      cout << argv[i] << " ";
    }
  cout << endl;

  // ---

  int sequence = -1;
  if ( argc > 1 ) sequence = atoi(argv[1]);

  int nevents = 10;
  if ( argc > 2 ) nevents = atoi(argv[2]);

  int get_seed = 0;
  unsigned int seed = 0;
  if ( argc > 3 ) get_seed = atoi(argv[3]);
  if ( get_seed > 0 ) seed = get_seed * 1e6;

  double space = 0.1;
  if ( argc > 4 ) space = atof(argv[4]);

  cout << "Sequence " << sequence << endl;
  cout << "Number of events " << nevents << endl;
  cout << "Random seed " << seed << endl;
  cout << "Tuplet space " << space << endl;

  execute(nevents,700,2,space,sequence,seed);
  execute(nevents,700,4,space,sequence,seed);
  execute(nevents,700,6,space,sequence,seed);
  execute(nevents,700,8,space,sequence,seed);

  return 0;

}
