#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int day, month, year;
    char Surname[50], Middlename[50], Lastname[50];
    printf("Enter your Surname: ");
    fgets(Surname, sizeof(Surname), stdin);
    if (Surname[strlen(Surname) - 1] == '\n') {
        Surname[strlen(Surname) - 1] = '\0';
    }
    printf("Enter your Middle name: ");
    fgets(Middlename, sizeof(Lastname), stdin);
    if (Middlename[strlen(Middlename) - 1] == '\n') {
        Middlename[strlen(Middlename) - 1] = '\0';
    }
    printf("Enter your last name: ");
    fgets(Lastname, sizeof(Lastname), stdin);
    if (Lastname[strlen(Lastname) - 1] == '\n') {
        Lastname[strlen(Lastname) - 1] = '\0';
    }

    printf("Enter you birthday (DD/MM/YY) ");
    scanf("%d%d%d", &day, &month, &year);

    printf("\nYour name is: %s %s %s\n", Surname, Middlename, Lastname);
    printf("Your birthday is: %02d/%02d/%04d\n", day, month, year);


    if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    { printf("Your zodiac sign is Capricorn. Luck is on your side with finances. Keep an eye out for opportunities that could boost your wealth. Before diving in, use your sharp analysis to weigh the pros and cons. This will ensure you're making informed decisions. Balance your time between work and relaxation, perhaps by taking a walk to clear your mind. Being outdoors can spark unexpected insights, so stay open to those sudden ideas. They might just lead to exciting possibilities. Trust your instincts and enjoy the momentum of today's energy!\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Your zodiac sign is Aquarius. You're exploring a fresh side of yourself today, and it's exciting! Usually quite reserved, today you're drawn to clothes with bold details and luxurious fabrics. Embrace this moment and indulge a little—after all, you only live once! With romance in the air, any alluring purchases you make are sure to impress. Consider trying on something outside your usual style, maybe a vibrant color or unique accessory. A little splurge can boost your confidence and add a spark to your day. Enjoy this delightful change and let your inner fashionista shine!\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Your zodiac sign is Pisces. Be on guard today, as some financial offers might cross your path. Whether through mail or a sales pitch, they could seem tempting but may not be as beneficial as they appear. Trust your instincts—if something feels off, it probably is. Evaluate these offers critically, looking for any hidden catches. Meanwhile, at home, you're in for something genuine. The sincerity around you is paired with passion, creating a positive and authentic environment. Enjoy this integrity and let it inspire your personal interactions, knowing that the real deal is closer to you than you might think.\n");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Your zodiac sign is Aries. Your heightened sensitivity is a powerful tool right now. Although being needed can feel overwhelming, this is your moment to offer support where it's most required. Trust your instincts—you're uniquely equipped for this task. Embrace the opportunity to give wholeheartedly, knowing that your efforts will not only benefit others but also bring you immense fulfillment. Remember, the goodwill and positive energy you put out will come back to you in unexpected ways. Stay focused on the positive impact you're making; it's both rewarding and deeply satisfying.\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Your zodiac sign is Taurus. Your warmth and good nature draw people to you like a magnet today, Taurus. You're used to this, but today it's even more pronounced. Your interactions will be fulfilling, leaving you feeling enriched. After all, loved ones make life worth living. A perfect day for romantic endeavors. Embrace these moments, let your charm shine, and deepen your connections. Remember, genuine warmth attracts genuine affection. Keep your heart open, and enjoy the moments of joy and connection that come your way.\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Your zodiac sign is Gemini.  Change is in the air, and today marks the beginning of something significant. You've been waiting patiently, and now it's time to see the results. At first, the changes might seem subtle, but trust that they're setting the stage for something major. Stay alert and be ready to grab any opportunity that piques your interest. Even small actions can lead to big results. Reflect on what you truly want and take steps toward those goals. This is your moment to embrace new possibilities and make a meaningful impact. Stay focused and proactive, and you'll find yourself on a rewarding path.\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Your zodiac sign is Cancer. It's time to prioritize self-care in its most genuine form. Focus on nurturing your well-being by paying attention to the small details. This means making an effort with your appearance—choose clothes that make you feel confident and take a little extra time with your grooming routine. Dismiss any negative thoughts that try to bring you down. Remind yourself that you're looking great, and with the care you give yourself today, you'll feel even more amazing. Embrace this day as an opportunity to boost your confidence and well-being.\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Your zodiac sign is Leo. Feeling a bit anxious today? No worries—you're in control. Engage in some physical activity to ease those nerves. A brisk walk or a quick workout can do wonders. As afternoon rolls in, your calmer demeanor will help you tackle favors and requests effortlessly. Remember, it's okay to take some time for yourself. Consider slipping away for a bit—perhaps catch a movie or enjoy a quiet moment. This will recharge your energy. You're more than capable of navigating the day with grace and composure.\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Your zodiac sign is Virgo. Recognize when hobbies turn into avoidance. It's great to have diversions, but if they're becoming an escape from responsibilities, it's time to reassess. Your intuition is strong now, so use it to introspect. Ask yourself why you might be dodging certain tasks. Is it fear, boredom, or maybe overwhelm? Whatever it is, try to understand it. Then, set small, manageable goals to tackle your responsibilities. Prioritize tasks and break them into bite-sized pieces. This way, they'll seem less daunting. Remember, balancing fun and duties leads to fulfillment. Use your insight wisely, and you'll find clarity and motivation to move forward.\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Your zodiac sign is Libra. Change is definitely brewing! It's easy to let disappointment cloud your vision, but remember, this is just a phase. Those goals you're aiming for? They're closer than you think. While patience is tough, it's crucial now. This period is about trust—trusting that your efforts will pay off. Stay focused and keep pushing forward, even if progress feels slow. Celebrate small victories along the way. They build momentum and keep your spirits up. Remember, every step counts, and you'll reach your destination. Keep faith in the process, and soon, you'll see the change you've been waiting for!\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Your zodiac sign is Scorpio. Remember to prioritize yourself today! Your nurturing nature is a gift, but it's important to balance that with self-care. Take some time to recharge and focus on your own needs. Consider setting aside a few moments for activities that bring you joy and relaxation. This break will replenish your energy and enhance your ability to care for others. By nurturing yourself, you'll find that you have even more to give. It's a win-win for everyone involved, especially you. Enjoy some well-deserved me-time!\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Your zodiac sign is Sagittarius. Feeling overwhelmed by social obligations? It might be time to put yourself first. Your calendar doesn't need to dictate your happiness. Take a moment to reassess what truly energizes you. Remember, it's okay to decline invitations. Saying no can create space for activities that genuinely fulfill you. Focus on quality over quantity when it comes to social interactions. Prioritize what aligns with your personal goals and well-being. This way, you'll have more time and energy for the people and events that truly matter. Embrace this opportunity to balance your social life with your personal needs.\n");
    } else {
        printf("Invalid date!\n");
    }
    
    if (strlen(Lastname) == 0) {
        printf("You dont have a last name??\n"); 
    } else {char firstLetter = tolower(Lastname[0]);


    switch (firstLetter)
    {
    case 'a':
        printf("Your personality usually are Dynamic, Creative, Independent, with leadership skills. ");
        printf("\n When in love you loves romance, enthusiasm.");
        printf("\n You are likely suitable for person with the name start with B,C,D");
        break;
    case 'b':
        printf("Your personality usually are Warm, delicate, caring and considerate of others.");
        printf("\n When in love you are a Loyal, gentle, and in need of security.");
        printf("\n You are likely suitable for person with the name start with A, C, D, G, H.");
        break;
    case 'c':
        printf("Your personality usually are Responsible, reliable, a good listener, and empathetic.");
        printf("\n when in love you are Stable, long-term, and family-oriented.");
        printf("\n You are likely suitable for person with the name start with A, B, D,");
        break;
    case 'd':
        printf("Your personality usually are Cheerful, optimistic, adventurous, and explorative.");
        printf("\n when in love you Values freedom, dislikes constraints, and always seeks novelty.");
        printf("\n You are likely suitable for person with the name start with");
        break;
    case 'g':
        printf("Your personality usually are Mysterious, captivating, and intensely magnetic. ");
        printf("\n when in love you are Passionate, intense, and always desiring to possess. ");
        printf("\n You are likely suitable for person with the name start with B, E, H");
        break;
        case 'h':
        printf("Your personality usually are Humorous, cheerful, and brings joy to everyone.");
        printf("\n when in love you prefers simplicity, modesty, and always seeks happiness.");
        printf("\n You are likely suitable for person with the name start with B, E, G");
        break;
        case 'k':
        printf("Your personality usually are Strong, decisive, and capable of protecting loved ones.");
        printf("\n when in love you are Passionate, intense, and always wanting to shield the person they love.");
        printf("\n You are likely suitable for  person with the name start with L, M, O");
        break;
        case 'l':
        printf("Your personality usually are Romantic, dreamy, and always striving for a love as beautiful as in dreams.");
        printf("\n when in love you are Loyal, gentle, and always longing to be loved.");
        printf("\n You are likely suitable for  person with the name start with K, M, N.");
        break;
        case 'm':
        printf("Your personality usually are Resourceful, dynamic, and capable of solving any problem.");
        printf("\n when in love you Values freedom, dislikes constraints, and always seeks novelty.");
        printf("\n You are likely suitable for  person with the name start with K, L, N, O.");
        break;
        case 'n':
        printf("Your personality usually are Gentle, elegant, and always brings peace to everyone.");
        printf("\n when in love you are Stable, long-term, and family-oriented.");
        printf("\n You are likely suitable for  person with the name start with L, M, O, P.");
        break;
        case 'p':
        printf("Your personality usually are Resourceful, dynamic, confident, and values freedom.");
        printf("\n when in love you loves Romantic, passionate, independent, and sometimes stubborn. ");
        printf("\n You are likely suitable for  person with the name start with K, L, M, N.");
        break;
        case 'q':
        printf("Your personality usually are Mysterious, captivating, intelligent, and a natural leader. ");
        printf("\n when in love you Passionate, intense, jealous, and domineering.");
        printf("\n You are likely suitable for  person with the name start with K, L, M, N, O.");
        break;
        case 's':
        printf("Your personality usually are  Sensitive, romantic, and creative. ");
        printf("\n when in love you are Loyal, gentle, and oriented toward long-term commitment. ");
        printf("\n You are likely suitable for  person with the name start with A, C, D, L, M.");
        break;
        case 't':
        printf("Your personality usually are Responsible, reliable, and logical. ");
        printf("\n when in love you are Stable, loyal, and able to reconcile differences.");
        printf("\n You are likely suitable for person with the name start with A, B, C, D.");
        break;
        case 'u':
        printf("Your personality usually are Cheerful, optimistic, and loves freedom.");
        printf("\n when in love you Enjoys adventure, novelty, and can be changeable. ");
        printf("\n You are likely suitable for person with the name start with A, B, C, D.");
        break;
        case 'v':
        printf("Your personality usually are Shy, adorable, and in need of protection.");
        printf("\n when in love you are Loyal, gentle, and in need of security.");
        printf("\n You are likely suitable for person with the name start with B, C, D, G, H.");
        break;
        case 'y':
        printf("Your personality usually Loves freedom, enjoys adventure, and values independence. ");
        printf("\n when in love you Seeks novelty and dislikes constraints. ");
        printf("\n You are likely suitable for person with the name start with A, B, C, D.");
        case 'o':
        printf("Your personality usually are  Mysterious, captivating, and intensely magnetic.");
        printf("\n when in love you are Passionate, intense, and always desiring to possess. ");
        printf("\n You are likely suitable for person with the name start with K, M, N, P, Q.");
        break;
    } 
}

   
    return 0;
}