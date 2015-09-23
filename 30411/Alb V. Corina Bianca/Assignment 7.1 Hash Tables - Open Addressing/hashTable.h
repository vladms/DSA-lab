
static const float INITIAL_HT_SIZE_FACTOR = .25;
static const float MAX_FILL_FACTOR = .80;

char ** hashTable;
char ** content;
int size;
int N;
int MAX;
int resizeTable;

int *nrOfCollisions;
int totalNrOfCollisions;

int hashFunction(char * content, int i);

void initHashTable();
float getFillFactor();
void resizeHashTable();
int insertElement(char * element,int i);


