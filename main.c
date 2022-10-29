#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum incheap{rentmovie, fancydin, chocofruit, newrecip, spa, bakeoff, ownpizza, favesnacksmov, bingepiz};
enum inexp{buygame, buybook, onlineshop};
enum outcheap{outdessert, chinabox, picnic, thrifting, danceclass, dicendrinks, coffedate, swim};
enum outexp{dressupdate, movies, windowshop, newrest};
enum infree{dineynight, hpnight, ghibnight, removie, cake, cookies, boardgame, puzzle, portraits, coop, faveshow, yoga, dance, music, replaylist, letters, bucklist, goals, hobbies};
enum outfree{zoo, longwalk, forest, beach, geocach, newplace, sunset, shelter};

int in(){
    int cheapexpfree;
    scanf("%d",&cheapexpfree);

    if (cheapexpfree == 1)
    {
        enum infree i1;
        srand(time(NULL));
        i1 = rand()%20;
        switch (i1) {

            case dineynight:
                printf("date night is:\nHave a Disney movie night!!\n");
                return 0;
                break;
            case hpnight:
                printf("date night is:\nHave a Harry Potter movie night!!\n");
                return 0;
                break;
            case ghibnight:
                printf("date night is:\nHave a Studio Ghibli movie night!!\n");
                return 0;
                break;
            case removie:
                printf("date night is:\nRewatch a special movie!!\n");
                return 0;
                break;
            case cake:
                printf("date night is:\nBake a cake together!!\n");
                return 0;
                break;
            case cookies:
                printf("date night is:\nBake and decorate cookies!!\n");
                return 0;
                break;
            case boardgame:
                printf("date night is:\nPlay a boardgame!!\n");
                return 0;
                break;
            case puzzle:
                printf("date night is:\nDo a puzzle together!!\n");
                return 0;
                break;
            case portraits:
                printf("date night is:\nMake portraits of each other!!\n");
                return 0;
                break;
            case coop:
                printf("date night is:\nPlay a co-op game!!\n");
                return 0;
                break;
            case faveshow:
                printf("date night is:\nWatch your favourite show!!\n");
                return 0;
                break;
            case yoga:
                printf("date night is:\nDo couples' yoga!!\n");
                return 0;
                break;
            case dance:
                printf("date night is:\nLearn/teach some new dance moves!!\n");
                return 0;
                break;
            case music:
                printf("date night is:\nPlay music together!!\n");
                return 0;
                break;
            case replaylist:
                printf("date night is:\nMake/upgrade a shared playlist!!\n");
                return 0;
                break;
            case letters:
                printf("date night is:\nWrite each other love letters!!\n");
                return 0;
                break;
            case bucklist:
                printf("date night is:\nMake a bucket list- no limits!!\n");
                return 0;
                break;
            case goals:
                printf("date night is:\nWrite down your goals for the next year!!\n");
                return 0;
                break;
            case hobbies:
                printf("date night is:\nSwap hobbies for a day\n");
                return 0;
                break;
        }
    }

    if (cheapexpfree == 2) {
        enum incheap i2;
        srand(time(NULL));
        i2 = rand()%10;
        switch (i2) {

            case rentmovie:
                printf("date night is:\nRent a movie that you've wanted to watch for a while!!\n");
                return 0;
                break;
            case fancydin:
                printf("date night is:\nMake a fancy dinner!!\n");
                return 0;
                break;
            case chocofruit:
                printf("date night is:\nMake chocolate covered fruit!!\n");
                return 0;
                break;
            case newrecip:
                printf("date night is:\nTry to make a new recipe!!\n");
                return 0;
                break;
            case spa:
                printf("date night is:\nMake an at-home spa!!\n");
                return 0;
                break;
            case bakeoff:
                printf("date night is:\nHave a bake-off!!\n");
                return 0;
                break;
            case ownpizza:
                printf("date night is:\nMake your own Pizza!!\n");
                return 0;
                break;
            case favesnacksmov:
                printf("date night is:\nBuy eachother their favourite snacks(take a guess) and watch a movie or show!!\n");
                return 0;
                break;
            case bingepiz:
                printf("date night is:\nBinge watch a series with pizza!!\n");
                return 0;
                break;
        }
    }

    if (cheapexpfree == 3) {
        enum inexp i3;
        srand(time(NULL));
        i3 = rand()%4;
        switch (i3) {

            case buygame:
                printf("date night is:\nBuy a new game to play!!\n");
                return 0;
                break;
            case buybook:
                printf("date night is:\nBuy eachother a new book/game!!\n");
                return 0;
                break;
            case onlineshop:
                printf("date night is:\nOnline shopping!!\n");
                return 0;
                break;
        }
    }

}
int out(){
    int cheapexpfree;
    scanf("%d",&cheapexpfree);

    if (cheapexpfree == 1)
    {
        enum outfree o1;
        srand(time(NULL));
        o1 = rand()%9;
        switch (o1) {

            case zoo:
                printf("date night is:\nGo to the zoo!!\n");
                return 0;
                break;
            case longwalk:
                printf("date night is:\nGo for a looong walk around the city!!\n");
                return 0;
                break;
            case forest:
                printf("date night is:\nDrive to the nearest forest and explore!!\n");
                return 0;
                break;
            case beach:
                printf("date night is:\nGo to the beach!!\n");
                return 0;
                break;
            case geocach:
                printf("date night is:\nGo geocaching!!\n");
                return 0;
                break;
            case newplace:
                printf("date night is:\nWander in a new neighbourhood!!\n");
                return 0;
                break;
            case sunset:
                printf("date night is:\nWatch the sunset!!\n");
                return 0;
                break;
            case shelter:
                printf("date night is:\nVisit an animal shelter!!\n");
                return 0;
                break;
        }
    }

    if (cheapexpfree == 2) {
        enum outcheap o2;
        srand(time(NULL));
        o2 = rand()%9;
        switch (o2) {

            case outdessert:
                printf("date night is:\nGo out for dessert!!\n");
                return 0;
                break;
            case chinabox:
                printf("date night is:\nGo get a chinabox!!\n");
                return 0;
                break;
            case picnic:
                printf("date night is:\nHave a picnic!!\n");
                return 0;
                break;
            case thrifting:
                printf("date night is:\nGo thrifting!!\n");
                return 0;
                break;
            case danceclass:
                printf("date night is:\nTake a dance class!!\n");
                return 0;
                break;
            case dicendrinks:
                printf("date night is:\nGo to Dice'n'Drinks!!\n");
                return 0;
                break;
            case coffedate:
                printf("date night is:\nGo on a coffee date!!\n");
                return 0;
                break;
            case swim:
                printf("date night is:\nGo swimming!!\n");
                return 0;
                break;
        }
    }

    if (cheapexpfree == 3) {
        enum outexp o3;
        srand(time(NULL));
        o3 = rand()%5;
        switch (o3) {

            case dressupdate:
                printf("date night is:\nDress up and go out for dinner-date!!\n");
                return 0;
                break;
            case movies:
                printf("date night is:\nGo to the movies!!\n");
                return 0;
                break;
            case windowshop:
                printf("date night is:\nGo windowshopping!!\n");
                return 0;
                break;
            case newrest:
                printf("date night is:\nTry a new restaurant!!\n");
                return 0;
                break;
        }
    }
}




int main() {
    int mussevalg, cheapexpfre;

    printf("hi mouse\ndo you wanna stay in or go out?\n(to stay in type 1 and to go out type 2)\n(if you don't care whether it's in or out type 3)\n");

        scanf("%d", &mussevalg);

        if (mussevalg == 1) {
            printf("okay, let's stay in!\nexpensive, cheap or free?\n(for free type 1, for cheap type 2, for expensive type 3)");

            if(cheapexpfre>3||cheapexpfre<0)
                mussevalg=0;
            else
                in();
        }

        else if (mussevalg == 2) {
            printf("oki, we're going out!\nexpensive, cheap or free?\n(for free type 1, for cheap type 2, for expensive type 3)");
            scanf("%d",&cheapexpfre);
            if(cheapexpfre>3||cheapexpfre<0)
                mussevalg=0;
            else
                out();

        }

        else if (mussevalg == 3){
            printf("oki, you'll get either or\nexpensive, cheap or free?\n(for free type 1, for cheap type 2, for expensive type 3)");
            scanf("%d",&cheapexpfre);
            if(cheapexpfre>3||cheapexpfre<0)
                mussevalg=0;
            else {
                in();
                out();
            }

        }
}
