class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall):
        self.hall_list.append(hall)


class Hall:
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.rows = rows
        self.cols = cols
        self.__hall_no = hall_no


    def entry_show(self, id, movie_name, time):
        show = (id, movie_name, time)
        self.__show_list.append(show)

        self.__seats[id] = []

        for i in range(self.rows):
            tmp = []
            for j in range(self.cols):
                tmp.append(0)
            self.__seats[id].append(tmp)


    def book_seats(self, id, l):
        if id in self.__seats:
            for i in l:
                print()
                r, c = i
                if not (0 <= r < self.rows and 0 <= c < self.cols):
                    print(f"Invalid seat")
                    continue
                elif self.__seats[id][r][c] == 1:
                    print(f"Seat already booked.")
                else:
                    self.__seats[id][r][c] = 1
                    print(f"Succesfully Booked")
                print()
        else:
            print("Invalid ID.")


    def view_show_list(self):
        print()
        for i in self.__show_list:
            print(f'Name : {i[1]}\nShow ID: {i[0]}\nTime: {i[2]}\n')
        print()


    def view_available_seats(self, id):
        if id in self.__seats:
            for i in range(self.rows):
                for j in range(self.cols):
                    print(f"{self.__seats[id][i][j]} ", end="")
                print()
        else:
            print(f"Invalid ID")


def main():
    h1 = Hall(5, 5, 1)
    star_cinema = Star_Cinema()
    star_cinema.entry_hall(h1)

    h1.entry_show(1, "The Shawshank Redemption", "12:00PM")
    h1.entry_show(2, "Good Will Hunting", "03:00PM")

    while True:
        print("1. View all Show Today")
        print("2. View Available Seats")
        print("3. Book Ticket")
        print("4. Exit")

        opt = int(input("Enter Option : "))

        if opt == 1:
            for i in star_cinema.hall_list:
                i.view_show_list()
        elif opt == 2:
            id = int(input("Enter Show ID : "))
            h1.view_available_seats(id)
        elif opt == 3:
            id = int(input("Enter Show ID : "))
            n = int(input("Enter Number of Tickets : "))

            tmp = []
            for i in range(n):
                r = int(input(f'Enter row for seat no. {i + 1} : '))
                c = int(input(f'Enter column for seat no. {i + 1} : '))
                tmp.append((r,c))
            h1.book_seats(id, tmp)
        elif opt == 4:
            break;
        else:
            print("Invalid Option")
main()
