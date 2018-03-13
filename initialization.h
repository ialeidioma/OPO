#ifndef INITIALIZATION_H_INCLUDED
#define INITIALIZATION_H_INCLUDED

cout << "Unknown: " << "Welcome Citizen,if you are indeed reading this\n";
cout << "It means you have successfully connected to the Linkernet\n";
cout << "Now you'll be able to live all the experiences\n";
cout << "Your frail human body would not have enabled you to do\n";
cout << "The Democreich of Daymon bids you farwell\n";
cout << "Unknown: " <<"Hello there Citizen, it's Zan here, i'm here to collect some informations\n";
cout << "Zan: " << "I'll also guide you through the first stages of your experience in the net\n";
cout << "Zan: " << "So lets start checking your memory banks, what is your name Citizen?";

getline(cin, player_name);

cout << "Zan: " << "Pleased to make your acquaintance, " << player_name <<"\n";
cout << "Zan: " << "So I'll start talking a bit about how things work in the Linkernet";
cout << "\a";
for(i=0; i<3; i++){
    cout << ". "
    if(i==2)
        cout << "\n";
}
cout << "\a";


#endif // INITIALIZATION_H_INCLUDED
