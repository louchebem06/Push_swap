# /bin/bash
echo "	< 12";
ARG="2 1 0"; ../push_swap $ARG | ../checker/checker_Mac $ARG;
python3 pyviz.py 2 1 0;
ARG="1 5 2 4 3"; ../push_swap $ARG | ../checker/checker_Mac $ARG;
python3 pyviz.py 1 5 2 4 3;
ARG=`ruby -e "puts (1..5).to_a.shuffle.join(' ')"`; ../push_swap $ARG | ../checker/checker_Mac $ARG;
python3 pyviz.py `ruby -e "puts (1..5).to_a.shuffle.join(' ')"`;
echo;
echo "	< 1500";
ARG=`ruby -e "puts (-49..50).to_a.shuffle.join(' ')"`; ../push_swap $ARG | ../checker/checker_Mac $ARG;
python3 pyviz.py `ruby -e "puts (-49..50).to_a.shuffle.join(' ')"`;
echo;
echo "	< 11500";
ARG=`ruby -e "puts (-249..250).to_a.shuffle.join(' ')"`; ../push_swap $ARG | ../checker/checker_Mac $ARG;
python3 pyviz.py `ruby -e "puts (-249..250).to_a.shuffle.join(' ')"`;
