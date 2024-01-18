%clear all
clc
pk=xlsread('1.1.xlsx',1); %change file name as per requirement Vertical Accini
pk2=pk(:,2); %Axial Accim
pk3=pk(:,3);
%Vertical Accin2 
pk4=pk (:,4);
%Impact Hammer;
pk1=pk(:,5);
Fs=2200; %sampling frequency change this if it different
L=length(pk1); 
ts=0:1/Fs:(L-1)/Fs;
figure(1)
subplot(4,1,1), plot(ts,pk4,'r'); ylabel('Acceleration (m/s^2)');xlabel('Time (s)');grid on;
subplot(4,1,2), plot(ts,pk2,'b'); ylabel('Acceleration (m/s^2)');xlabel('Time (s)');grid on;
subplot(4,1,3), plot(ts,pk3,'r'); ylabel('Acceleration (m/s^2)');xlabel('Time (s)');grid on;
subplot(4,1,4), plot(ts,pk1,'k'); ylabel('Impact force (N)');xlabel('Time (s)');grid on;

Y1=fft(pk4); Y2=fft(pk2); Y3=fft(pk3);
f=Fs* (0: (L/2))/L;
fsort=sort(f); y2sort=sort(Y2);
P2=abs(Y1/L);
P1=P2(1: (L/2)+1);
P1(2:end-1)=2*P1 (2:end-1);
Q2=abs(Y2/L);
Q1=Q2(1:(L/2)+1);
Q1(2:end-1)=2*Q1 (2:end-1);
R2=abs(Y3/L);
R1=R2(1:(L/2)+1);
R1(2:end-1)=2*R1 (2:end-1);
figure(2) %plot for FFT
subplot(4,1,1), plot (f, P1,'r');ylabel('Acceleration (m/s^2)');xlabel('Frequency (Hz)');grid on;
xlim([0 1100])
subplot(4,1,2), plot (f, Q1,'b');ylabel('Acceleration (m/s^2)');xlabel('Frequency');grid on;
xlim([0 1100])
subplot(4,1,3), plot (f, R1,'k');ylabel('Acceleration (m/s^2)');xlabel('Frequency');grid on;
xlim([0 1100])
figure (3)
plot (f, P1,'r');ylabel('Acceleration (m/s^2)');xlabel('Frequency (Hz)');grid on;
xlim([0 1100])
plot (f, Q1,'b');ylabel('Acceleration (m/s^2)');xlabel('Frequency (Hz)');grid on;
xlim([0 1100])
plot (f, R1,'k');ylabel('Acceleration (m/s^2)');xlabel('Frequency (Hz)');grid on;
xlim([0 1100])