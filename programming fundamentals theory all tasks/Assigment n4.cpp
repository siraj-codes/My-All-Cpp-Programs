#include <iostream>
using namespace std;

int main()
{
	char op ;
	do 
	{
	
	int num  ;
	
	cout<<" Enter 1 for quiz here  ";
	
	
	cout<<" \n Enter 2 for quiz-with 3 lifelines here  ";
    cout<<endl;
    
    cin>>num;
	
	switch(num)
	{
		case 1:
		{
			char answer;
			int score=0 , lifeline=0;
		 
		 	cout<<"\t\t Simple Quiz Game having 10 Questions";
		 
		 	cout<<endl<<endl;
		 
		 	cout<<"\t\t Answer can only be  Given in only A-B-C";
		 
		 	cout<<endl<<endl;
		 	
		 	cout<<endl<<"Question number One"<<endl;
		 	
		 	cout<<endl<<"Which one of these animals is a bird"<<endl;
		 	
		 	cout<<endl<<"A.Dolphin ";
		 
		    cout<<endl<<"B.Eagle   ";
		    
		    cout<<endl<<"C.Lion    "<<endl;
		    
		    cout<<endl<<"Enter your Answer:  "<<"  ";
		    
		    cin>>answer;
			
			if (answer=='B' ||  lifeline>=3)
			    {
			    	score=score+10;
			    	
			    	
			    		
			    		
			    				cout<<endl<<"Question number Two"<<endl;
		 	
		 	    				cout<<endl<<" Which one of these animals lives under water"<<endl;
		 	
		 						cout<<endl<<"A.Dolphin ";
		 
		    					cout<<endl<<"B.Eagle   ";
		    
		    					cout<<endl<<"C.Lion    ";
		    					
		    					cout<<endl<<"Enter your Answer:  "<<"  ";
		    					
		    					
		    					cin>>answer;
		    					
		    					
		    					
		    					
		    					
		    					
		    						if (answer=='A')
		    						{
		    							score=score+10;
		    							
		    							
										
		    							
		    							cout<<endl<<"Question number Three";
		 	
		 	    				        cout<<endl<<" Which one of these animals lives on the land"<<endl;
		 	
		 						        cout<<endl<<"A.Dolphin ";
		 
		    					        cout<<endl<<"B.Eagle   ";
		    
		                     			cout<<endl<<"C.Lion    ";
		                     			
		                     			cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			
		                     			cin>>answer;
		                     			
		                     			
		                     				if (answer=='C')
		                     				{
		                     					score=score+10;
		                     					
		                     					
		                     					
		                     					cout<<endl<<"Question number Four"<<endl;
		 	
		 	    				                cout<<endl<<" Which one of these things is not good for health"<<endl;
		 	
		 						                cout<<endl<<"A.Drinking ";
		 
		    					                cout<<endl<<"B.Eating   ";
		    
		                     			        cout<<endl<<"C.smoking    ";
		                     			        
		                     			        cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			        
		                     			        cin>>answer;
		                     			        
		                     			        
		                     			        if(answer=='C')
		                     			        	{
		                     			        	 score=score+10;
		                     			        	 
		                     			        	 
													cout<<endl<<"Question number Five"<<endl;
		 	
		 	    				                    cout<<endl<<" Which one of these is the most importat for human to be alive"<<endl;
		 	
		 						                    cout<<endl<<"A.Water ";
		 
		    					                    cout<<endl<<"B.Food   ";
		    
		                     			            cout<<endl<<"C.Home    ";
													 
													cout<<endl<<"Enter your Answer:  "<<"  ";
													 
													 cin>>answer;
													 	
													}
													
														if (answer=='A')
														{
															score=score+10;
															
															
														cout<<endl<<"Question number Six"<<endl;
		 	
		 	    				                        cout<<endl<<" Why we learn computer science"<<endl;
		 	
		 						                        cout<<endl<<"A.For knowledge "  ;
		 
		    					                        cout<<endl<<"B.For Money   " ;
		    
		                     			                cout<<endl<<"C.For kids    ";
		                     			                
		                     			                cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			                
		                     			                cin>>answer;
		                     			                
		                     			                
		                     			                
		                     			                 if (answer=='B')
		                     			                 
		                     			                 	score=score+10;
		                     			                 	
		                     			        			
														   cout<<endl<<"Question number Seven"<<endl;
		 	
		 	    				                           cout<<endl<<" Why are  We Alive ?"<<endl;
		 	
		 						                           cout<<endl<<"A.For Survival "  ;
		 
		    					                           cout<<endl<<"B.For Enjoy   " ;
		    
		                     			                   cout<<endl<<"C.For dieing   ";
		                     			                   
		                     			                   cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			                   
		                     			                   cin>>answer;
		                     			                   
		                     			                   
		                     			                    if (answer=='A')
		                     			                    {
		                     			                     	score=score+10;
		                     			                     	
		                     			        			
														        cout<<endl<<"Question number Eight"<<endl;
		 	
		 	    				                                cout<<endl<<" What is Gravity?"<<endl;
		 	
		 						                                cout<<endl<<"A. a force "  ;
		 
		    					                                cout<<endl<<"B. a food   " ;
		    
		                     			                        cout<<endl<<"C. a flavour   ";
		                     			                        
		                     			                        cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			                        
		                     			                        cin>>answer;
															}
															
																if (answer=='A')
																{
																	score=score+10;
																	
																	
																	cout<<endl<<"Question number Nine"<<endl;
		 	
		 	    				                                    cout<<endl<<" What is a computer?"<<endl;
		 	
		 						                                    cout<<endl<<"A. Electronic dev "  ;
		 
		    					                                    cout<<endl<<"B. Electrical dev   " ;
		    
		                     			                            cout<<endl<<"C. A Toy   ";
		                     			                            
		                     			                            cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			                            
		                     			                            cin>>answer;
		                     			                            
		                     			                            
		                     			                            
		                     			                            
																}
																
																 	if (answer=='A')
															        {
															        	score=score+10;
															        	
																	
																	    cout<<endl<<"Question number Ten"<<endl;
		 	
		 	    				                                        cout<<endl<<" Why a human being become old?"<<endl;
		 	
		 						                                        cout<<endl<<"A. because of age "  ;
		 
		    					                                        cout<<endl<<"B. because of wealth   " ;
		    
		                     			                                cout<<endl<<"C. because of lonelyness   ";
		                     			                                
		                     			                                cout<<endl<<"Enter your Answer:  "<<"  ";
		                     			                                
		                     			                                cin>>answer;
		                     			                                
																	}
																	
																		if (answer=='A')
															         {
															        	 score=score+10;
															        	 
															        	 cout<<"Your Score is "<<score<<" Out of 100 "<<endl;
															        	 
															         }
																	 
																	 
																	
																
															 
		                     			                 
													    }                     					
		                     					
		                     					
											}
									}
						
													
											else
										   {
											cout<<"\n You Lost";
											
											cout<<"\n Your Score is : "<<score;
											
											cout<<"\n Game Over";
										   }
				}
		break;	
	   }
	   
	   case 2 :
		{
		 int score=0 , lifeline=0;
		 char ans;
		 
		 cout<<"\t \t Quiz Game";
		 
		 cout<<endl;
		 
		 cout<<"\tAnswer Can only be given in form of (A,B,C).";
		 
		 cout<<endl;
		 
			 cout<<"Question no:-1"<<endl;
			 cout<<"What is 4*2 ?";
			 cout<<"\nA 1";
			 cout<<"\nB 2";
			 cout<<"\nC 8";
			 cout<<endl;
			 cin>>ans;
			 
			 if(ans=='C')
			 {
			 	score+=10;
			 }
			 
			 				else 
							{
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							}
			 
			 cout<<"Question no:-2"<<endl;
			 cout<<"What is 4*4 ?";
			 cout<<"\nA 1";
			 cout<<"\nB 16";
			 cout<<"\nC 8";
			 cout<<endl;
			 cin>>ans;
		
			if(ans=='B')
			 {
			 	score+=10;
			 }
			 
			 				else 
							{
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							}
			 
			 cout<<"Question no:-3"<<endl;
			 cout<<"What is 3*4 ?";
			 cout<<"\nA 12";
			 cout<<"\nB 16";
			 cout<<"\nC 8";
			 cout<<endl;
			 cin>>ans;
		
			if(ans=='A')
			 {
			 	score+=10;
			 }
			 
			                else 
							{
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							}
			 
			 if(lifeline<3)
			 {
			 	
				 cout<<"Question no:-4"<<endl;
				 cout<<"What is 5*4 ?";
				 cout<<"\nA 12";
				 cout<<"\nB 16";
				 cout<<"\nC 20";
				 cout<<endl;
				 cin>>ans;
				 
				 if(ans=='C')
				 {
				 	score+=10;
				 }
				 
				    		else 
							{
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							} 
				 
				 
				 
					 if(lifeline<3)
					{
					
						  cout<<"Question no:-5"<<endl;
						  cout<<"What is 5*5 ?";
						  cout<<"\nA 25";
						  cout<<"\nB 16";
						  cout<<"\nC 20";
						  cout<<endl;
						  cin>>ans;
						  
						  if(ans=='A')
						 {
						 	score+=10;
						 }
						 
						    else 
							{
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							}
					 
			 			if (lifeline<3)
			 			{
			 				cout<<"Question no:-6"<<endl;
						  	cout<<"What is 5*3?";
						  	cout<<"\nA 25";
						  	cout<<"\nB 15";
						  	cout<<"\nC 20";
						  	cout<<endl;
						  	cin>>ans;
						  	
						  	
				 			 if(ans=='B')
							 {
							 	score+=10;
							 }
							 
							 else 
							 {
							 	lifeline=lifeline+1;
							    cout<<" \n Lifeline "<<lifeline;
							 	cout<<"\n score is : "<<score;
							 	cout<<endl;
							 } 	
								
				 				
					 	
			 
		 	        	}   
				 	}
				 	
			if(lifeline<3)
			{
			
			cout<<"You Won";		 	 	
			cout<<"\nScore is "<<score;	 
			cout<<" \nLife-line consumed"<<" = "<<lifeline;	
			 
			}
			
			else
			{
				
				cout<<"\nYou Lost!";
				cout<<"\nScore is "<<score;
				cout<<"\nLifeline consumed"<<lifeline;
				
			}
			 
			 
		 	
		   }
		   
		   break;
		}
		
		default :
			cout<<"\n Invalid Entry !!";
			
	}
	
	cout<<"Do you want to continue y/n";
	cin>>op;		
	
	} while (op=='y');
		
	
return 0;
}

