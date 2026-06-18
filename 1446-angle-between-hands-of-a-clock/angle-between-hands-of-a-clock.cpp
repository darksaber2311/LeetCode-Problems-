class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle_hour = hour*30+minutes*0.5;
        double angle_minute = minutes*6;
        double res =  abs(angle_hour-angle_minute);
        if(res>180)
        {
            return 360-res;
        }
        return res;

    }
};