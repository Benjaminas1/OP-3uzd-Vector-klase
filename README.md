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

