for i in $(seq 10 30)
do
    for time in $(seq 1 10)
    do 
        ./main.exe $i result2.csv
    done
done
