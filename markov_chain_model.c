/*
1. The probabilities of weather conditions ( modeled as either rainy or
sunny), given the weather on the preceding day, can be represented by a
transition matrix:
0.9 0.1
0.5 0.5
The weather on day 0 is known to be sunny. This is represented by a
vector in which the "sunny" entry is 100%, and the "rainy" entry is 0%:
(1 0) .
Write a C program to find the weather of the next day by using Markov
Chain Method.
*/