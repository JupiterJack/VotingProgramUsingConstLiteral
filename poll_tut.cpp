#include <iostream>

using namespace std;

int main()
{
   const int ENDvote = 5; //max. # of votes

    //loop over the voting stations
    int vote;
    int spoiltvotes;
    cout << "1. Candidate A\t 2. Candidate B\t 3. Candidate C" << endl;
    for(vote = 0; vote <= ENDvote; vote++)

   
   {
    //loop over the votes
    cout << "Enter your vote: \t";
    cin >> vote;

        switch(vote)
        {
            case 1:

            break;

            case 2:
            break;

            case 3:
            break;

            default:
            break;
        }

        cout << "# of votes for candidate A:\t" << vote;
        cout << "# of votes for candidate B:\t" << vote;
        cout << "# of votes for candidate C:\t" << vote;
        cout << "# of spoilt votes:\t" << spoiltvotes;
   } 

    return 0;
}