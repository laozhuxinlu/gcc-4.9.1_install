cp clay_packets/* ./
./contrib/download_prerequisites
mkdir gcc_temp
cd gcc_temp
../configure --enable-checking=release --enable-languages=c,c++ --disable-multilib
make
#sudo make install