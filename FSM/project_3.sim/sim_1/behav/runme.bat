@echo off


rem  PlanAhead(TM)
rem  runme.bat: a PlanAhead-generated ISim simulation Script
rem  Copyright 1986-1999, 2001-2013 Xilinx, Inc. All Rights Reserved.


set PATH=$XILINX/lib/$PLATFORM:$XILINX/bin/$PLATFORM;/opt/Xilinx/14.7/ISE_DS/EDK/bin/lin64:/opt/Xilinx/14.7/ISE_DS/ISE/bin/lin64:/opt/Xilinx/14.7/ISE_DS/common/bin/lin64;/opt/Xilinx/14.7/ISE_DS/EDK/lib/lin64:/opt/Xilinx/14.7/ISE_DS/ISE/lib/lin64:/opt/Xilinx/14.7/ISE_DS/common/lib/lin64;/opt/Xilinx/14.7/ISE_DS/PlanAhead/bin;%PATH%

set XILINX_PLANAHEAD=/opt/Xilinx/14.7/ISE_DS/PlanAhead

fuse -intstyle pa -incremental -L work -o testbench.exe --prj /home/student/Embedded/FSM/project_3.sim/sim_1/behav/testbench.prj -top work.testbench
if errorlevel 1 (
   cmd /c exit /b %errorlevel%
)
