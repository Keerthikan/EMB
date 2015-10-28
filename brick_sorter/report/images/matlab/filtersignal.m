filtered = importdata('filtered.dat');

figure('position',[100,100,600,250])
plot(filtered(:,1)+abs(min(filtered(:,1))),filtered(:,2))
title('Photo Diode - Filtered Output');
axis([0,2*10^-5,0,2.5])
xlabel('Time [s]')
ylabel('Voltage [v]')

unfiltered = importdata('unfiltered.dat');

figure('position',[100,100,600,250])
plot(unfiltered(:,1)+abs(min(unfiltered(:,1))),unfiltered(:,2))
title('Photo Diode - Unfiltered Output');
axis([0,max(unfiltered(:,1)),0,3.5])
xlabel('Time [s]')
ylabel('Voltage [v]')

settlech1 = importdata('settlech1.dat');
settlech2 = importdata('settlech2.dat');

figure('position',[100,100,600,250])
plot(settlech1(:,1)+abs(min(settlech1(:,1))),settlech1(:,2),settlech1(:,1)+abs(min(settlech1(:,1))), settlech2(:,2))
title('Photo Diode - Settling Time');
axis([0,max(settlech1(:,1))+abs(min(settlech1(:,1))),0,max(settlech1(:,2))+0.1])
xlabel('Time [s]')
ylabel('Voltage [v]')
