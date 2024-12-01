g++ -o A "/home/nir/Competitive Programming/Codeforces/QCPC 2024 (Mirror)/K. Help From Friend.cpp"
g++ -o B "/home/nir/Competitive Programming/Codeforces/QCPC 2024 (Mirror)/altK.cpp"
g++ -o gen gen.cpp
for ((i = 1; ; ++i)); do  # if they are same then will loop forever
    echo $i
    ./gen $i > int
    ./A < int > out1
    ./B < int > out2
    #diff -w out1 out2 || break
     diff -w <(./A < int) <(./B < int) || break
done
