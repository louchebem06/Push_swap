# /bin/bash
make && clear;
echo "	< 12";
ARG="2 1 0"; ./push_swap $ARG | ./checker_linux $ARG;
ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_linux $ARG;
ARG=`ruby -e "puts (1..5).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_linux $ARG;
echo;
echo "	< 1500";
ARG=`ruby -e "puts (-49..50).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_linux $ARG;
echo;
echo "	< 11500";
ARG=`ruby -e "puts (-249..250).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_linux $ARG;