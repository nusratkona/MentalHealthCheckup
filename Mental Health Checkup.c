#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
    int a;
    char ans[100];

    printf("Mental Health Checkup is administration of Psychological Test, \nwhich are designed to be objective and standard method of a sample of behaviour.");
    printf("\nPlease answer the following questions to measure your mental health condition.\n");
    printf("In this website you can check your concentration,stress,depression,bipolar disorder condition and suicidal tendency.");
    printf("\n\n\n\nFor Concentration Test please press 1.");
    printf("\nFor Stress Test please press 2.");
    printf("\nFor Depression Test please press 3.");
    printf("\nFor Bipolar Disorder Test please press 4.");
    printf("\nFor Suicidal Tendency Check please press 5.");
    printf("\nFor all the test please press 6.\n");
    scanf("%d",&a);
    system("cls");

    if(a==1)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n1. My mind tends to drift away when I'm working or something.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[0]);
        fflush(stdin);
        printf("\n2. I find irrelevant information or thoughts popping into my head when I'm trying to focus on a task.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[1]);
        fflush(stdin);
        printf("\n3. When I begin a task I set specific objectives for what I want to accomplish.\na)Never b)Generally not c)A few times d)Always.\n");
        scanf("%c",&ans[2]);
        fflush(stdin);
        printf("\n4. When I need to concentrate I can tune out my environment.\na)Never b)Generally not c)Sometimes d)Always I can.\n");
        scanf("%c",&ans[3]);
        fflush(stdin);
        printf("\n5. I find myself daydreaming.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[4]);
        fflush(stdin);
        printf("\n6. When I start lose focus on my work,I take a short break.\na)Never b)Generally not c)Sometimes d)Always I take.\n");
        scanf("%c",&ans[5]);
        fflush(stdin);
        printf("\n7. When I try to focus intensely,I find my mind wandering to unrelated things.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[6]);
        fflush(stdin);
        printf("\n8. If someone is having a conversation nearby while I'm working on a task,it breaks my concentration.\na)Always b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[7]);
        fflush(stdin);
        printf("\n9. Before beginning a task,I set an approximate time limit as to how long I will work on it.\na)Never b)Generally not c)Sometimes d)Always I can.\n.");
        scanf("%c",&ans[8]);
        fflush(stdin);
        printf("\n10. I get bored easily.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[9]);
        fflush(stdin);

        int  o1,p1,j1,k1,l1,m1,t1=0,u1=0,v1=0,w1=0,c1=0,c12=0,c13=0,c14=0;

        for(j1=0; j1<10; j1++)
        {
            fflush(stdin);
            if(ans[j1]=='a')
            {
                t1=++c1;

            }
        }

        printf("You answered option a is %d",t1);

        fflush(stdin);


        for(k1=0; k1<10; k1++)
        {
            fflush(stdin);
            if(ans[k1]=='b')
            {
                u1=++c12;

            }
        }

        printf("\nYou answered option b is %d",u1);
        fflush(stdin);



        for(l1=0; l1<10; l1++)
        {
            fflush(stdin);
            if(ans[l1]=='c')
            {
                v1=++c13;

            }
        }
        printf("\nYou answered option c is %d",v1);
        fflush(stdin);


        for(m1=0; m1<10; m1++)
        {
            fflush(stdin);
            if(ans[m1]=='d')
            {
                w1=++c14;

            }
        }
        printf("\nYou answered option d is %d\n\n",w1);
        fflush(stdin);

        o1=50-((t1+u1)-(v1+w1))*5;
        p1=50+((v1+w1)-(t1+u1))*5;



        if((t1+u1)>(v1+w1))
        {
            if(((t1+u1)-(v1+w1))<5)
                printf("Your concentration level is %d percent.Your concentration level is at bad condition. Please take support.We are here for you.\n\n",o1);
            else if(((t1+u1)-(v1+w1))>=5)
                printf("Your concentration level is %d percent.Your concentration level is at worst condition. Please take support.We are here for you.\n\n",o1);

        }
        else if((v1+w1)>(t1+u1))
        {

            if(((v1+w1)-(t1+u1))<5)
                printf("Your concentration level is %d percent.Your concentration level is not at very well condition. Please take support.We are here for you.\n\n",p1);

            else if(((v1+w1)-(t1+u1))>=5)
                printf("Your concentration level is %d percent.Your concentration level is at well condition. ;-D You can take support.We are here for you.\n\n",p1);

        }
        else
            printf("Your concentration level is not at good condition. Please take support.We are here for you.\n\n");





fflush(stdin);
    }




    else if(a==2)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n11. I am able to relax.\na)Not at all b)A few times c)Sometimes d)Whenever I need.\n");
        scanf("%c",&ans[10]);
        fflush(stdin);
        printf("\n12. I feel fearful for no reason.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[11]);
        fflush(stdin);
        printf("\n13. I have diarrhea,constipation,or other digestive problem.\na)Frequently happens to me b)When I am under pressure c)Rarely happens d)Generally not.\n");
        scanf("%c",&ans[12]);
        fflush(stdin);
        printf("\n14. When someone snaps at me,I spend the rest of the day thinking about it.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[13]);
        fflush(stdin);
        printf("\n15. I am easily alarmed,frightened,or surprised.\na)Always I am b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[14]);
        fflush(stdin);
        printf("\n16. I experience shortness of breath or choking feeling\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[15]);
        fflush(stdin);
        printf("\n17. I have sweaty or cold,clammy hands.\na)Always I have b)Yes I have C)Just a little d)Not at all.\n");
        scanf("%c",&ans[16]);
        fflush(stdin);
        printf("\n18. I am afraid of crowds,being left alone,the dark,of strangers,or of traffic.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[17]);
        fflush(stdin);
        printf("\n19. I think a lot about why I do the things I do.\na)Always I think b)Yes I think C)Just a little d)Not at all.\n");
        scanf("%c",&ans[18]);
        fflush(stdin);
        printf("\n20. I am easily irritated.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[19]);
        fflush(stdin);

        int o2,p2,j2,k2,l2,m2,t2=0,u2=0,v2=0,w2=0,c2=0,c22=0,c23=0,c24=0;
        for(j2=10; j2<20; j2++)
        {
            fflush(stdin);
            if(ans[j2]=='a')
            {
                t2=++c2;

            }
        }

        printf("You answered option a is %d",t2);
        fflush(stdin);


        for(k2=10; k2<20; k2++)
        {
            fflush(stdin);
            if(ans[k2]=='b')
            {
                u2=++c22;

            }
        }

        printf("\nYou answered option b is %d",u2);

        fflush(stdin);

        for(l2=10; l2<20; l2++)
        {
            fflush(stdin);
            if(ans[l2]=='c')
            {
                v2=++c23;

            }
        }
        printf("\nYou answered option c is %d",v2);

        fflush(stdin);

        for(m2=10; m2<20; m2++)
        {
            fflush(stdin);
            if(ans[m2]=='d')
            {
                w2=++c24;

            }
        }
        printf("\nYou answered option d is %d\n\n",w2);
        fflush(stdin);

          o2=50-((t2+u2)-(v2+w2))*5;
        p2=50+((v2+w2)-(t2+u2))*5;



if((t2+u2)>(v2+w2))
        {
            if(((t2+u2)-(v2+w2))<5)
                printf("Your stress level is %d percent.Your stress level is at bad condition. Please take support.We are here for you.\n\n",o2);
            else if(((t2+u2)-(v2+w2))>=5)
                printf("Your stress level is %d percent.Your stress level is at worst condition. Please take support.We are here for you.\n\n",o2);

        }
        else if((v2+w2)>(t2+u2))
        {

            if(((v2+w2)-(t2+u2))<5)
                printf("Your stress level is %d percent.Your stress level is not at very well condition. Please take support.We are here for you.\n\n",p2);

            else if(((v2+w2)-(t2+u2))>=5)
                printf("Your stress level is %d percent.Your stress level is at well condition. ;-D You can take support.We are here for you.\n\n",p2);

        }
        else
            printf("Your stress level is not at good condition. Please take support.We are here for you.\n\n");





        fflush(stdin);
    }





    else if(a==3)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n21.My future seems hopeless.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[20]);
        fflush(stdin);
        printf("\n22.The pleasure and joy has gone out of my life.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[21]);
        fflush(stdin);
        printf("\n23.I have difficulty making my decisions.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[22]);
        fflush(stdin);
        printf("\n24.I feel fatigued.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[23]);
        fflush(stdin);
        printf("\n25.I feel that I am a guilty person who deserves to be punished.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[24]);
        fflush(stdin);
        printf("\n26.My sleeps has been disturbed\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[25]);
        fflush(stdin);
        printf("\n27.I feel sad,blue and unhappy\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[26]);
        fflush(stdin);
        printf("\n28.I feel trapped or caught.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[27]);
        fflush(stdin);
        printf("\n29.I feel depressed even when good things happen to me.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[28]);
        fflush(stdin);
        printf("\n30.Without trying to diet, I have lost or gained weight.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[29]);

        int o3,p3,j3,k3,l3,m3,t3=0,u3=0,v3=0,w3=0,c3=0,c32=0,c33=0,c34=0;

        for(j3=20; j3<30; j3++)
        {
            fflush(stdin);
            if(ans[j3]=='a')
            {
                t3=++c3;

            }
        }

        printf("You answered option a is %d",t3);

        fflush(stdin);


        for(k3=20; k3<30; k3++)
        {
            fflush(stdin);
            if(ans[k3]=='b')
            {
                u3=++c32;

            }
        }

        printf("\nYou answered option b is %d",u3);



        fflush(stdin);

        for(l3=20; l3<30; l3++)
        {
            fflush(stdin);
            if(ans[l3]=='c')
            {
                v3=++c33;

            }
        }
        printf("\nYou answered option c is %d",v3);

        fflush(stdin);

        for(m3=20; m3<30; m3++)
        {
            fflush(stdin);
            if(ans[m3]=='d')
            {
                w3=++c34;

            }
        }
        printf("\nYou answered option d is %d\n\n",w3);
        fflush(stdin);


     p3=50-((v3+w3)-(t3+u3))*5;
          o3=50+((t3+u3)-(v3+w3))*5;



if((t3+u3)>(v3+w3))
        {
            if(((t3+u3)-(v3+w3))<5)
                printf("Your depression level is %d percent.Your depression level is not at very well condition. Please take support.We are here for you.\n\n",o3);
            else if(((t3+u3)-(v3+w3))>=5)
                printf("Your depression level is %d percent.Your depression level is at well condition. ;-D You can take support.We are here for you.\n\n",o3);

        }
        else if((v3+w3)>(t3+u3))
        {

            if(((v3+w3)-(t3+u3))<5)
                printf("Your depression level is %d percent.Your depression level is at bad condition. Please take support.We are here for you.\n\n",p3);

            else if(((v3+w3)-(t3+u3))>=5)
                printf("Your depression level is %d percent.Your depression level is at worst condition. Please take support.We are here for you.\n\n",p3);

        }
        else
            printf("Your depression level is not at good condition. Please take support.We are here for you.\n\n");





        fflush(stdin);

    }




    else if(a==4)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n31. Do you become unusually talkative or overly gregarious,even in situations that may not warrant it?\na)Anytime it happens b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[30]);
        fflush(stdin);
        printf("\n32. Do you act uncharacteristically active and surprisingly outgoing?\na)Frequently I do b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[31]);
        fflush(stdin);
        printf("\n33. Does your mood swing frequently.\na)Anytime  b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[32]);
        fflush(stdin);
        printf("\n34. Do you feel both high(overly happy) and low(depressed) at the same time?\na)Frequently I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[33]);
        fflush(stdin);
        printf("\n35. Does your self-confidence seem to swing wildly from great self-doubt to great arrogance?\na)Frequently It does b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[34]);
        fflush(stdin);
        printf("\n36. professionally,you have noticed a wide gap in the quantity or quality of your work-where you're dramatically productive at times,but virtually useless at others.Do you feel so?\na)Always I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[35]);
        fflush(stdin);
        printf("\n37. Do you vacillate between desires to be very social and to be left alone?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[36]);
        fflush(stdin);
        printf("\n38. Do you go through periods of great sadness,as well as periods of euphoria where you find almost anything funny.\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[37]);
        fflush(stdin);
        printf("\n39. Do you have a few people in your life with whom you have behaved very roughly and after sometimes you regret too much?\na)Yes it happens b)It happens sometimes c)No naturally not d)Not at all.\n");
        scanf("%c",&ans[38]);
        fflush(stdin);
        printf("\n40. Do your close friends change fast?\na)Always happens b)Generally c)Generally not d)Not at all.\n");
        scanf("%c",&ans[39]);
        fflush(stdin);

        int o4,p4,j4,k4,l4,m4,t4=0,u4=0,v4=0,w4=0,c4=0,c42=0,c43=0,c44=0;
        for(j4=30; j4<40; j4++)
        {
            fflush(stdin);
            if(ans[j4]=='a')
            {
                t4=++c4;

            }
        }

        printf("You answered option a d is %d",t4);

        fflush(stdin);



        for(k4=30; k4<40; k4++)
        {
            fflush(stdin);
            if(ans[k4]=='b')
            {
                u4=++c42;

            }
        }

        printf("\nYou answered option b is %d",u4);

        fflush(stdin);


        for(l4=30; l4<40; l4++)
        {
            fflush(stdin);
            if(ans[l4]=='c')
            {
                v4=++c43;

            }
        }
        printf("\nYou answered option c is %d",v4);

        fflush(stdin);


        for(m4=30; m4<40; m4++)
        {
            fflush(stdin);
            if(ans[m4]=='d')
            {
                w4=++c44;

            }
        }
        printf("\nYou answered option d is %d\n\n",w4);

        fflush(stdin);

         o4=50-((t4+u4)-(v4+w4))*5;
          p4=50+((v4+w4)-(t4+u4))*5;


        if((t4+u4)>(v4+w4))
        {
            if(((t4+u4)-(v4+w4))<5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at bad condition. Please take support.We are here for you.\n\n",o4);
            else if(((t4+u4)-(v4+w4))>=5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at worst condition. Please take support.We are here for you.\n\n",o4);

        }
        else if((v4+w4)>(t4+u4))
        {

            if(((v4+w4)-(t4+u4))<5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is not at very well condition. Please take support.We are here for you.\n\n",p4);

            else if(((v4+w4)-(t4+u4))>=5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at well condition. ;-D You can take support.We are here for you.\n\n",p4);

        }
        else
            printf("Your bipolar disorder level is not at good condition.You can take support.We are here for you.\n\n");



        fflush(stdin);
    }





    else if(a==5)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n41. Are you feeling sadness for a long term?\n a)Yes I am b)Most probably c)probably not d)No.\n");
        scanf("%c",&ans[40]);
        fflush(stdin);
        printf("\n42. Are you feeling totally hopeless?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[41]);
        fflush(stdin);
        printf("\n43. Do you expect that your situation will improve soon?\na)Never b)May be not c)Yes D)Definitely.\n");
        scanf("%c",&ans[42]);
        fflush(stdin);
        printf("\n44. Do you experience regular sleeping problem?\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[43]);
        fflush(stdin);
        printf("\n45. Are you becoming very calm suddenly after depression or moodiness?\na)Yes I am b)I will c)May be not d)Not at all.\n");
        scanf("%c",&ans[44]);
        fflush(stdin);
        printf("\n46. Do you want to withdraw yourself from all responsibilities?\na)Yes I want b)I think so c)I don't think so d)Not at all\n");
        scanf("%c",&ans[45]);
        fflush(stdin);
        printf("\n47. Do you do dangerous or self-harming behavior?\n a)Yes I do b)I want so c)I don't want so. d)Never.\n");
        scanf("%c",&ans[46]);
        fflush(stdin);
        printf("\n48. Are you interested and curious to know how to attempt suicide?\na)Yes I am b)I want so c)No I am not generally d)Never.");
        scanf("%c",&ans[47]);
        fflush(stdin);
        printf("\n49. Do you threat other about you can attempt suicide when you get angry?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[48]);
        fflush(stdin);
        printf("\n50. Have you ever tried to attempt suicide?\na)Yes I tried b)I didn't get such scope c)No I didn't d)Never.\n");
        scanf("%c",&ans[49]);
        fflush(stdin);


        int o5,p5,j5,k5,l5,m5,t5=0,u5=0,v5=0,w5=0,c5=0,c52=0,c53=0,c54=0;
        for(j5=40; j5<50; j5++)
        {
            fflush(stdin);
            if(ans[j5]=='a')
            {
                t5=++c5;

            }
        }

        printf("You answered option a is %d",t5);


        fflush(stdin);

        for(k5=40; k5<50; k5++)
        {
            fflush(stdin);
            if(ans[k5]=='b')
            {
                u5=++c52;

            }
        }

        printf("\nYou answered option b is %d",u5);

        fflush(stdin);


        for(l5=40; l5<50; l5++)
        {
            fflush(stdin);
            if(ans[l5]=='c')
            {
                v5=++c53;

            }
        }
        printf("\nYou answered option c is %d",v5);

        fflush(stdin);

        for(m5=40; m5<50; m5++)
        {
            fflush(stdin);
            if(ans[m5]=='d')
            {
                w5=++c54;

            }
        }
        printf("\nYou answered option d is %d\n\n",w5);

        fflush(stdin);

        o5=50-((t5+u5)-(v5+w5))*5;
          p5=50+((v5+w5)-(t5+u5))*5;


        if((t5+u5)>(v5+w5))
        {
            if(((t5+u5)-(v5+w5))<5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is at bad condition. Please take support.We are here for you.\n\n",o5);
            else if(((t5+u5)-(v5+w5))>=5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is at worst condition. Please take support.We are here for you.\n\n",o5);

        }
        else if((v5+w5)>(t5+u5))
        {

            if(((v5+w5)-(t5+u5))<5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is not at very well condition. Please take support.We are here for you.\n\n",p5);

            else if(((v5+w5)-(t5+u5))>=5)
                printf("Your suicidal tendency level is %d percent.You don't have suicidal tendency. ;-D You can take support.We are here for you.\n\n",p5);

        }
        else
            printf("Your suicidal tendency level is not at good condition. Please take support.We are here for you.\n\n");



        fflush(stdin);
    }

    if(a==6)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n1. My mind tends to drift away when I'm working or something.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[0]);
        fflush(stdin);
        printf("\n2. I find irrelevant information or thoughts popping into my head when I'm trying to focus on a task.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[1]);
        fflush(stdin);
        printf("\n3. When I begin a task I set specific objectives for what I want to accomplish.\na)Never b)Generally not c)A few times d)Always.\n");
        scanf("%c",&ans[2]);
        fflush(stdin);
        printf("\n4. When I need to concentrate I can tune out my environment.\na)Never b)Generally not c)Sometimes d)Always I can.\n");
        scanf("%c",&ans[3]);
        fflush(stdin);
        printf("\n5. I find myself daydreaming.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[4]);
        fflush(stdin);
        printf("\n6. When I start lose focus on my work,I take a short break.\na)Never b)Generally not c)Sometimes d)Always I take.\n");
        scanf("%c",&ans[5]);
        fflush(stdin);
        printf("\n7. When I try to focus intensely,I find my mind wandering to unrelated things.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[6]);
        fflush(stdin);
        printf("\n8. If someone is having a conversation nearby while I'm working on a task,it breaks my concentration.\na)Always b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[7]);
        fflush(stdin);
        printf("\n9. Before beginning a task,I set an approximate time limit as to how long I will work on it.\na)Never b)Generally not c)Sometimes d)Always I can.\n.");
        scanf("%c",&ans[8]);
        fflush(stdin);
        printf("\n10. I get bored easily.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[9]);
        fflush(stdin);

        int  o1,p1,j1,k1,l1,m1,t1=0,u1=0,v1=0,w1=0,c1=0,c12=0,c13=0,c14=0;

        for(j1=0; j1<10; j1++)
        {
            fflush(stdin);
            if(ans[j1]=='a')
            {
                t1=++c1;

            }
        }

        printf("You answered option a is %d",t1);

        fflush(stdin);


        for(k1=0; k1<10; k1++)
        {
            fflush(stdin);
            if(ans[k1]=='b')
            {
                u1=++c12;

            }
        }

        printf("\nYou answered option b is %d",u1);
        fflush(stdin);



        for(l1=0; l1<10; l1++)
        {
            fflush(stdin);
            if(ans[l1]=='c')
            {
                v1=++c13;

            }
        }
        printf("\nYou answered option c is %d",v1);
        fflush(stdin);


        for(m1=0; m1<10; m1++)
        {
            fflush(stdin);
            if(ans[m1]=='d')
            {
                w1=++c14;

            }
        }
        printf("\nYou answered option d is %d\n\n",w1);
        fflush(stdin);

          o1=50-((t1+u1)-(v1+w1))*5;
          p1=50+((v1+w1)-(t1+u1))*5;



 if((t1+u1)>(v1+w1))
        {
            if(((t1+u1)-(v1+w1))<5)
                printf("Your concentration level is %d percent.Your concentration level is at bad condition. Please take support.We are here for you.\n\n",o1);
            else if(((t1+u1)-(v1+w1))>=5)
                printf("Your concentration level is %d percent.Your concentration level is at worst condition. Please take support.We are here for you.\n\n",o1);

        }
        else if((v1+w1)>(t1+u1))
        {

            if(((v1+w1)-(t1+u1))<5)
                printf("Your concentration level is %d percent.Your concentration level is not at very well condition. Please take support.We are here for you.\n\n",p1);

            else if(((v1+w1)-(t1+u1))>=5)
                printf("Your concentration level is %d percent.Your concentration level is at well condition. ;-D You can take support.We are here for you.\n\n",p1);

        }
        else
            printf("Your concentration level is not at good condition. Please take support.We are here for you.\n\n");





fflush(stdin);



        printf("\n\n\n11. I am able to relax.\na)Not at all b)A few times c)Sometimes d)Whenever I need.\n");
        scanf("%c",&ans[10]);
        fflush(stdin);
        printf("\n12. I feel fearful for no reason.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[11]);
        fflush(stdin);
        printf("\n13. I have diarrhea,constipation,or other digestive problem.\na)Frequently happens to me b)When I am under pressure c)Rarely happens d)Generally not.\n");
        scanf("%c",&ans[12]);
        fflush(stdin);
        printf("\n14. When someone snaps at me,I spend the rest of the day thinking about it.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[13]);
        fflush(stdin);
        printf("\n15. I am easily alarmed,frightened,or surprised.\na)Always I am b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[14]);
        fflush(stdin);
        printf("\n16. I experience shortness of breath or choking feeling\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[15]);
        fflush(stdin);
        printf("\n17. I have sweaty or cold,clammy hands.\na)Always I have b)Yes I have C)Just a little d)Not at all.\n");
        scanf("%c",&ans[16]);
        fflush(stdin);
        printf("\n18. I am afraid of crowds,being left alone,the dark,of strangers,or of traffic.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[17]);
        fflush(stdin);
        printf("\n19. I think a lot about why I do the things I do.\na)Always I think b)Yes I think C)Just a little d)Not at all.\n");
        scanf("%c",&ans[18]);
        fflush(stdin);
        printf("\n20. I am easily irritated.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[19]);
        fflush(stdin);

        int o2,p2,j2,k2,l2,m2,t2=0,u2=0,v2=0,w2=0,c2=0,c22=0,c23=0,c24=0;
        for(j2=10; j2<20; j2++)
        {
            fflush(stdin);
            if(ans[j2]=='a')
            {
                t2=++c2;

            }
        }

        printf("You answered option a is %d",t2);
        fflush(stdin);


        for(k2=10; k2<20; k2++)
        {
            fflush(stdin);
            if(ans[k2]=='b')
            {
                u2=++c22;

            }
        }

        printf("\nYou answered option b is %d",u2);

        fflush(stdin);

        for(l2=10; l2<20; l2++)
        {
            fflush(stdin);
            if(ans[l2]=='c')
            {
                v2=++c23;

            }
        }
        printf("\nYou answered option c is %d",v2);

        fflush(stdin);

        for(m2=10; m2<20; m2++)
        {
            fflush(stdin);
            if(ans[m2]=='d')
            {
                w2=++c24;

            }
        }
        printf("\nYou answered option d is %d\n\n",w2);
        fflush(stdin);

         o2=50-((t2+u2)-(v2+w2))*5;
        p2=50+((v2+w2)-(t2+u2))*5;




if((t2+u2)>(v2+w2))
        {
            if(((t2+u2)-(v2+w2))<5)
                printf("Your stress level is %d percent.Your stress level is at bad condition. Please take support.We are here for you.\n\n",o2);
            else if(((t2+u2)-(v2+w2))>=5)
                printf("Your stress level is %d percent.Your stress level is at worst condition. Please take support.We are here for you.\n\n",o2);

        }
        else if((v2+w2)>(t2+u2))
        {

            if(((v2+w2)-(t2+u2))<5)
                printf("Your stress level is %d percent.Your stress level is not at very well condition. Please take support.We are here for you.\n\n",p2);

            else if(((v2+w2)-(t2+u2))>=5)
                printf("Your stress level is %d percent.Your stress level is at well condition. ;-D You can take support.We are here for you.\n\n",p2);

        }
        else
            printf("Your stress level is not at good condition. Please take support.We are here for you.\n\n");




        fflush(stdin);


        printf("\n\n\n21.My future seems hopeless.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[20]);
        fflush(stdin);
        printf("\n22.The pleasure and joy has gone out of my life.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[21]);
        fflush(stdin);
        printf("\n23.I have difficulty making my decisions.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[22]);
        fflush(stdin);
        printf("\n24.I feel fatigued.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[23]);
        fflush(stdin);
        printf("\n25.I feel that I am a guilty person who deserves to be punished.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[24]);
        fflush(stdin);
        printf("\n26.My sleeps has been disturbed\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[25]);
        fflush(stdin);
        printf("\n27.I feel sad,blue and unhappy\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[26]);
        fflush(stdin);
        printf("\n28.I feel trapped or caught.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[27]);
        fflush(stdin);
        printf("\n29.I feel depressed even when good things happen to me.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[28]);
        fflush(stdin);
        printf("\n30.Without trying to diet, I have lost or gained weight.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[29]);

        int o3,p3,j3,k3,l3,m3,t3=0,u3=0,v3=0,w3=0,c3=0,c32=0,c33=0,c34=0;

        for(j3=20; j3<30; j3++)
        {
            fflush(stdin);
            if(ans[j3]=='a')
            {
                t3=++c3;

            }
        }

        printf("You answered option a is %d",t3);

        fflush(stdin);


        for(k3=20; k3<30; k3++)
        {
            fflush(stdin);
            if(ans[k3]=='b')
            {
                u3=++c32;

            }
        }

        printf("\nYou answered option b is %d",u3);



        fflush(stdin);

        for(l3=20; l3<30; l3++)
        {
            fflush(stdin);
            if(ans[l3]=='c')
            {
                v3=++c33;

            }
        }
        printf("\nYou answered option c is %d",v3);

        fflush(stdin);

        for(m3=20; m3<30; m3++)
        {
            fflush(stdin);
            if(ans[m3]=='d')
            {
                w3=++c34;

            }
        }
        printf("\nYou answered option d is %d\n\n",w3);
        fflush(stdin);

         p3=50-((v3+w3)-(t3+u3))*5;
          o3=50+((t3+u3)-(v3+w3))*5;


if((t3+u3)>(v3+w3))
        {
            if(((t3+u3)-(v3+w3))<5)
                printf("Your depression level is %d percent.Your depression level is not at very well condition. Please take support.We are here for you.\n\n",o3);
            else if(((t3+u3)-(v3+w3))>=5)
                printf("Your depression level is %d percent.Your depression level is at well condition. ;-D You can take support.We are here for you.\n\n",o3);

        }
        else if((v3+w3)>(t3+u3))
        {

            if(((v3+w3)-(t3+u3))<5)
                printf("Your depression level is %d percent.Your depression level is at bad condition. Please take support.We are here for you.\n\n",p3);

            else if(((v3+w3)-(t3+u3))>=5)
                printf("Your depression level is %d percent.Your depression level is at worst condition. Please take support.We are here for you.\n\n",p3);

        }
        else
            printf("Your depression level is not at good condition. Please take support.We are here for you.\n\n");






        fflush(stdin);


        printf("\n\n\n31. Do you become unusually talkative or overly gregarious,even in situations that may not warrant it?\na)Anytime it happens b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[30]);
        fflush(stdin);
        printf("\n32. Do you act uncharacteristically active and surprisingly outgoing?\na)Frequently I do b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[31]);
        fflush(stdin);
        printf("\n33. Does your mood swing frequently.\na)Anytime  b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[32]);
        fflush(stdin);
        printf("\n34. Do you feel both high(overly happy) and low(depressed) at the same time?\na)Frequently I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[33]);
        fflush(stdin);
        printf("\n35. Does your self-confidence seem to swing wildly from great self-doubt to great arrogance?\na)Frequently It does b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[34]);
        fflush(stdin);
        printf("\n36. professionally,you have noticed a wide gap in the quantity or quality of your work-where you're dramatically productive at times,but virtually useless at others.Do you feel so?\na)Always I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[35]);
        fflush(stdin);
        printf("\n37. Do you vacillate between desires to be very social and to be left alone?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[36]);
        fflush(stdin);
        printf("\n38. Do you go through periods of great sadness,as well as periods of euphoria where you find almost anything funny.\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[37]);
        fflush(stdin);
        printf("\n39. Do you have a few people in your life with whom you have behaved very roughly and after sometimes you regret too much?\na)Yes it happens b)It happens sometimes c)No naturally not d)Not at all.\n");
        scanf("%c",&ans[38]);
        fflush(stdin);
        printf("\n40. Do your close friends change fast?\na)Always happens b)Generally c)Generally not d)Not at all.\n");
        scanf("%c",&ans[39]);
        fflush(stdin);

        int o4,p4,j4,k4,l4,m4,t4=0,u4=0,v4=0,w4=0,c4=0,c42=0,c43=0,c44=0;
        for(j4=30; j4<40; j4++)
        {
            fflush(stdin);
            if(ans[j4]=='a')
            {
                t4=++c4;

            }
        }

        printf("You answered option a is %d",t4);

        fflush(stdin);



        for(k4=30; k4<40; k4++)
        {
            fflush(stdin);
            if(ans[k4]=='b')
            {
                u4=++c42;

            }
        }

        printf("\nYou answered option b is %d",u4);

        fflush(stdin);


        for(l4=30; l4<40; l4++)
        {
            fflush(stdin);
            if(ans[l4]=='c')
            {
                v4=++c43;

            }
        }
        printf("\nYou answered option c is %d",v4);

        fflush(stdin);


        for(m4=30; m4<40; m4++)
        {
            fflush(stdin);
            if(ans[m4]=='d')
            {
                w4=++c44;

            }
        }
        printf("\nYou answered option d is %d\n\n",w4);

        fflush(stdin);


     o4=50-((t4+u4)-(v4+w4))*5;
          p4=50+((v4+w4)-(t4+u4))*5;


if((t4+u4)>(v4+w4))
        {
            if(((t4+u4)-(v4+w4))<5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at bad condition. Please take support.We are here for you.\n\n",o4);
            else if(((t4+u4)-(v4+w4))>=5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at worst condition. Please take support.We are here for you.\n\n",o4);

        }
        else if((v4+w4)>(t4+u4))
        {

            if(((v4+w4)-(t4+u4))<5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is not at very well condition. Please take support.We are here for you.\n\n",p4);

            else if(((v4+w4)-(t4+u4))>=5)
                printf("Your bipolar disorder level is %d percent.Your bipolar disorder level is at well condition. ;-D You can take support.We are here for you.\n\n",p4);

        }
        else
            printf("Your bipolar disorder level is not at good condition.You can take support.We are here for you.\n\n");


        fflush(stdin);


        printf("\n\n\n41. Are you feeling sadness for a long term?\n a)Yes I am b)Most probably c)probably not d)No.\n");
        scanf("%c",&ans[40]);
        fflush(stdin);
        printf("\n42. Are you feeling totally hopeless?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[41]);
        fflush(stdin);
        printf("\n43. Do you expect that your situation will improve soon?\na)Never b)May be not c)Yes D)Definitely.\n");
        scanf("%c",&ans[42]);
        fflush(stdin);
        printf("\n44. Do you experience regular sleeping problem?\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[43]);
        fflush(stdin);
        printf("\n45. Are you becoming very calm suddenly after depression or moodiness?\na)Yes I am b)I will c)May be not d)Not at all.\n");
        scanf("%c",&ans[44]);
        fflush(stdin);
        printf("\n46. Do you want to withdraw yourself from all responsibilities?\na)Yes I want b)I think so c)I don't think so d)Not at all\n");
        scanf("%c",&ans[45]);
        fflush(stdin);
        printf("\n47. Do you do dangerous or self-harming behavior?\n a)Yes I do b)I want so c)I don't want so. d)Never.\n");
        scanf("%c",&ans[46]);
        fflush(stdin);
        printf("\n48. Are you interested and curious to know how to attempt suicide?\na)Yes I am b)I want so c)No I am not generally d)Never.");
        scanf("%c",&ans[47]);
        fflush(stdin);
        printf("\n49. Do you threat other about you can attempt suicide when you get angry?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[48]);
        fflush(stdin);
        printf("\n50. Have you ever tried to attempt suicide?\na)Yes I tried b)I didn't get such scope c)No I didn't d)Never.\n");
        scanf("%c",&ans[49]);
        fflush(stdin);


        int o5,p5,j5,k5,l5,m5,t5=0,u5=0,v5=0,w5=0,c5=0,c52=0,c53=0,c54=0;
        for(j5=40; j5<50; j5++)
        {
            fflush(stdin);
            if(ans[j5]=='a')
            {
                t5=++c5;

            }
        }

        printf("You answered option a is %d",t5);


        fflush(stdin);

        for(k5=40; k5<50; k5++)
        {
            fflush(stdin);
            if(ans[k5]=='b')
            {
                u5=++c52;

            }
        }

        printf("\nYou answered option b is %d",u5);

        fflush(stdin);


        for(l5=40; l5<50; l5++)
        {
            fflush(stdin);
            if(ans[l5]=='c')
            {
                v5=++c53;

            }
        }
        printf("\nYou answered option c is %d",v5);

        fflush(stdin);

        for(m5=40; m5<50; m5++)
        {
            fflush(stdin);
            if(ans[m5]=='d')
            {
                w5=++c54;

            }
        }
        printf("\nYou answered option d is %d\n\n",w5);

        fflush(stdin);

          o5=50-((t5+u5)-(v5+w5))*5;
          p5=50+((v5+w5)-(t5+u5))*5;

if((t5+u5)>(v5+w5))
        {
            if(((t5+u5)-(v5+w5))<5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is at bad condition. Please take support.We are here for you.\n\n",o5);
            else if(((t5+u5)-(v5+w5))>=5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is at worst condition. Please take support.We are here for you.\n\n",o5);

        }
        else if((v5+w5)>(t5+u5))
        {

            if(((v5+w5)-(t5+u5))<5)
                printf("Your suicidal tendency level is %d percent.Your suicidal tendency level is not at very well condition. Please take support.We are here for you.\n\n",p5);

            else if(((v5+w5)-(t5+u5))>=5)
                printf("Your suicidal tendency level is %d percent.You don't have suicidal tendency. ;-D You can take support.We are here for you.\n\n",p5);

        }
        else
            printf("Your suicidal tendency level is not at good condition. Please take support.We are here for you.\n\n");



        fflush(stdin);

    }


    char i;
    printf("\n\n\nFor Mental Health Support Please Press A.\n");
    scanf("%c",&i);
    if(i=='A')
    {
        printf("\n\nFor Online Help,please visit website:\nhttp://www.mental health support/bd.\nYou can also contact\n01728393833-National Mental Health Institute,Dhaka.\n01974727387-Educational and Clinical Psychology Department,University of Dhaka.\n01724262235-Rehab and Counciling Center,Mymensingh\n01645893345-Mental Support Center,Rangpur\n01713145689-Counciling institute,Chittagong\nFor More Please contact us : 01314577733,01314577734.");
    }

    printf("\n\n\nTo have a better life and stay mentally and physically you can follow the ways:\n\n1.Wake up early in the morning and go to bed at night as soon as possible.\n2.Do some exercise regularly.\n3.Have healthy foods.\n4.Try to do work that you like.\n5.At a time do one task.\n6.Have break.\n6.Spend quality time with family and friends.\n7.Believe that you are the most important and beautiful person in the world as  all.\nThanks For Visiting Our Site.");



}




