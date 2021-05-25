# OP-3uzd-Vector-klase

### 1. Vector konteinerio funkcionalumo patikrinimas.
Paleidus funkciją vectorTest() atliekamas Vector klasės ir std::vector funkcijų palyginimas.
Gaunami rezultatai:

    std::vector<int> results: 
    5 3 
    5 
    1
    5
    Vector<int> results: 
    5 3 
    5 
    1
    5
    
Testavime naudojamos 5 skirtingos funkcijos, kadangi gaunami vienodi rezultatai, reiškias, kad Vector klasė veikia vienodai kaip std::vector.

### 2. Efektyvumo/spartos analizė tarp std::vector ir Vector klasės.

| Masyvo dydis \ konteinerio tipas | std::vector | Vector klasė |
| :------------------------------- | :---------- | :----------- |
| 10000                            | 0ms         | 0ms          |
| 100000                           | 2ms         | 1ms          |
| 1000000                          | 15ms        | 14ms         |
| 10000000                         | 161ms       | 155ms        |
| 100000000                        | 1596ms      | 1536ms       |

### 3. Palyginkite kiek kartų 2 užduotyje (V2.0) įvyksta konteinerių (Vector ir std::vector) atminties perskirstymai užpildant 100000000 elementų. Perskirstymas įvyksta tada, kai yra patenkinama sąlyga: capacity() == size(), t.y. kai nelieka vietos capacity()`naujiems elementams.`

    Naudojant std::vector: 27
    Naudojant vector klase: 27

Naudojant abu konteinerius atminties perskirstymų skaičius vienodas. Tai reiškia, kad šiuo aspektu jie abu veikia vienodai.

### 4. Atlikite spartos analizę, t.y. naudojant duomenų failą su 100000 studentų įrašų, palyginkite kiek laiko užtrunka programos veikimas naudojant std::vector ir Vector realizacijas.

| Masyvo dydis \ konteinerio tipas | std::vector | Vector klasė |
| 100000                           | 2.26267s     | 2.16349s      |
