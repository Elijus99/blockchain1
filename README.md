# Hash generator

Program takes any input and turns it into 128bit pseudo-random hash. Hash length can be changed anytime by altering `defaultHash` variable length in `hash.cpp` file.  
Hash value is created by performing various actions on default Hash. When this proccess finishes, the hash ends up being composed of various symbols. Only symbols with ASCII values of 0 to 127 are included. Then those symbols are changed to 0-9 and a-f.

# How to install (UNIX terminal)
- `git clone https://github.com/Elijus99/blockchain1.git`
- `cd blockchain1`
- `make`

# How to use
- `make test`
- Choose an option and further input what program asks you to.
![UI](/images/UI.jpg)
- First choice lets you input your text that you want to hash.
![choose1](/images/choose1.jpg)
- Second choice lets you input the name of the file you want to hash.
![choose2](/images/choose2.jpg)
- Third choice lets you make an efficiency test of the chosen file.
![Efficiency](/images/konstitucijaEfficiency.jpg)
- Fourth choice tests hashes collisions, lets you input the count and length of strings.
![Collisions](/images/collisions.jpg)
- Fifth choice tests hashes bits difference, lets you input the count and length of strings.
![Bitwise](/images/bit.jpg)

# Experimental tests
### 1) Two files with single, different symbol.
![OneSymbol](/images/oneSymbolDifference.jpg)

### 2) Two files with 200 000 random symbols.
![DifferentSymbols](/images/differentSymbolsDifference.jpg)

### 3) Two similar files with 2000 symbols each. Files only differs by one symbol.
![AlmostSame](/images/almostSameDifference.jpg)

### 4) Empty file.
![Empty](/images/empty.jpg)

### 5) File konstitucija.txt hashing efficiency.
![Efficiency](/images/konstitucijaEfficiency.jpg)

### 6) 1 000 000 random 5 characters length string pairs collisions.
![Collisions](/images/collisions.jpg)

### 7) 100 000 string pairs bits difference. Each pair has 5 symbols of which only one is different.
![Bitwise](/images/bitwise.jpg)  
As it can be seen in image above, minimal pair difference is 0, which means that similar text hashes sometimes gets the same hash value.
