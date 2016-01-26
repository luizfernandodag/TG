echo off
cls
jpeg2ps -p a4 %1.jpg > %1.eps
echo on