//it was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. The teacher asked them to give handshakes when they meet each other. If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.
#include <stdio.h>

int main() {
    // Write C code here
    int students;
    int total;
    printf("Read the n number of students : \n");
    scanf("%d",&students);
    total = (students * (students - 1)) / 2;
    printf("The number of handshakers : %d\n", total);
    
    return 0;
}
