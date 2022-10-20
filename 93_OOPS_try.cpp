#include<bits/stdc++.h>
using namespace std;


// desiginh online hotel booking system
// 1. user can book room
// 2. user can cancel room
// 3. user can see all rooms
// 4. user can see all booked rooms
// 5. user can see all available rooms
// 6. user can see price of room

enum RoomType {SINGLE, DOUBLE, TRIPLE, SUITE};
enum RoomStatus {AVAILABLE, BOOKED, RESERVED, MAINTENANCE};
enum PaymentStatus { PAID, UNPAID, PARTIALLY_PAID, CANCELLED};
enum BookingStatus {CONFIRMED, PENDING, CANCELLED, CHECKED_IN, CHECKED_OUT};

class Room {
    private:
        int roomNumber;
        RoomType roomType;
        RoomStatus roomStatus;
        float roomPrice;
};

class Hotel {
    private:
        int hotelId;
        string hotelName;
        string hotelAddress;
        vector<Room> rooms;
    


};

class Duration {
    private:
        int startDay;
        int startMonth;
        int startYear;
        int endDay;
        int endMonth;
        int endYear;
};

class User {
    private:
        int userId;
        string userName;
        Room bookedRoom;
        Booking booking;
}

class Booking {
    private:
        int bookingId;
        User userId;
        Room stayRoomId;
        Duration stayDuration;
        PaymentStatus paymentStatus;
        BookingStatus bookingStatus;


};






int main(){

}