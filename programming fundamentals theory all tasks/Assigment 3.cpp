#include <iostream>
using namespace std;

int main()
{
	int input;
	cout<<"Press 1 for vowel consonant program (&& and ||) ";
	cout<<endl;
	cout<<"Press 2 for vowel consonant program (nested if else)";
	cout<<endl;
	cin>>input;
	
	switch(input)
	{
		case 1:
		{
			
		char alpha;
		cout<<"Enter any alphabet ";
		cin>>alpha;
		cout<<endl;
		
		if( alpha=='a' ||  alpha=='e' ||  alpha=='i' ||  alpha=='o' ||  alpha=='u' ||  alpha=='A' ||  alpha=='E' ||  alpha=='I' ||  alpha=='O' ||  alpha=='U'  )
		{
		cout<<alpha<<" is a vowel ";	
		} 
		
		else if ( alpha=='b' ||  alpha=='c' ||  alpha=='d' ||  alpha=='f' ||  alpha=='g' ||  alpha=='h' ||  alpha=='j' ||  alpha=='k' ||  alpha=='l' ||  alpha=='m' ||  alpha=='n' ||  alpha=='p' ||  alpha=='q' ||  alpha=='r' ||  alpha=='s' ||  alpha=='t' ||  alpha=='v' ||  alpha=='w' ||  alpha=='x' ||  alpha=='y' ||  alpha=='z' ||  alpha=='B' ||  alpha=='C' ||  alpha=='D' ||  alpha=='E' ||  alpha=='F' ||  alpha=='G' ||  alpha=='H' ||  alpha=='J' ||  alpha=='K' ||  alpha=='L' ||  alpha=='M' ||  alpha=='N' ||  alpha=='P' ||  alpha=='Q' ||  alpha=='R' ||  alpha=='S' ||  alpha=='T' ||  alpha=='U' ||  alpha=='V' ||  alpha=='W' ||  alpha=='X' ||  alpha=='Y' ||  alpha=='Z'  )
		
		{
		cout<<alpha<<" is a consonant ";
		}
		
		else
		{
			cout<<"Invalid Entry!!";
		}
		
		 break;		
		}	
		
		case 2:
		{
	 	char input;
	 
	 	cout<<"\nEnter the Alphabet";
	 	cin>>input;
	 	
	 	if(input=='a')
	 	{
	 		cout<<endl<<input<<"    is a vowel";
		}
		else
		{
			if(input=='b')
			{
		  		cout<<endl<<input<<"    is not a vowel";	 	
			}
			
			else
			{
				if(input=='c')
				{
					cout<<endl<<input<<"    is not a vowel";
				}
				
				else
				{
					if(input=='d')
					{
						cout<<endl<<input<<"    is not a vowel";
					}
					
					else
					{
						if(input=='e')
						{
							cout<<endl<<input<<"    is  a vowel";
						}
						
						else
						{
							if(input=='f')
							{
								cout<<endl<<input<<"    is not a vowel";
							}
							
							else
							{
								if(input=='g')
								{
									cout<<endl<<input<<"    is not a vowel";
								}
								
								else
								{
									if(input=='h')
									{
										cout<<endl<<input<<"    is not a vowel";
									}
									
									else
									{
										if(input=='i')
										{
											cout<<endl<<input<<"    is  a vowel";
										}
										
										else
										{
											if(input=='j')
											{
												cout<<endl<<input<<"    is not a vowel";
											}
											
											else
											{
												if(input=='k')
												{
													cout<<endl<<input<<"    is not a vowel";
												}
												
												else
												{
													if(input=='l')
													{
														cout<<endl<<input<<"    is not a vowel";
													}
													
													else
													{
														if(input=='m')
														{
															cout<<endl<<input<<"    is not a vowel";
														}
														
														else
														{
															if(input=='n')
															{
																cout<<endl<<input<<"    is not a vowel";
															}
															
															else
															{
																if(input=='o')
																{
																	cout<<endl<<input<<"    is  a vowel";
																}
																else
																{
																	if(input=='p')
																	{
																		cout<<endl<<input<<"    is not a vowel";
																	}
																	
																	else
																	{
																		if(input=='q')
																		{
																			cout<<endl<<input<<"    is not a vowel";
																		}
																		
																		else
																		{
																			if(input=='r')
																			{
																				cout<<endl<<input<<"    is not a vowel";
																			}
																			
																			else
																			{
																				if(input=='s')
																				{
																					cout<<endl<<input<<"    is not a vowel";
																				}
																				
																				else
																				{
																					if(input=='t')
																					{
																						cout<<endl<<input<<"    is not a vowel";
																					}
																					
																					else
																					{
																						if(input=='u')
																						{
																							cout<<endl<<input<<"    is  a vowel";
																						}
																						
																						else
																						{
																							if(input=='v')
																							{
																								cout<<endl<<input<<"    is not a vowel";
																							}
																							
																							else
																							{
																								if(input=='w')
																								{
																									cout<<endl<<input<<"    is not a vowel";
																								}
																								
																								else
																								{
																									if(input=='x')
																									{
																										cout<<endl<<input<<"    is not a vowel";
																									}
																									
																									else
																									{
																										if(input=='y')
																										{
																											cout<<endl<<input<<"    is not a vowel";
																										}
																										else
																										{
																											if(input=='z')
																											{
																												cout<<endl<<input<<"  is not a vowel";
																											}
																											else
																											{
																												if(input=='A')
																												{
																													cout<<endl<<input<<"  is  a vowel";
																												}
																												else
																												{
																													if(input=='B')
																													{
																														cout<<endl<<input<<"  is not a vowel";
																													}
																													else
																													{
																														if(input=='C')
																														{
																															cout<<endl<<input<<"  is not a vowel";
																														}
																														
																														else
																														{
																															if(input=='D')
																															{
																																cout<<endl<<input<<"  is not a vowel";
																															}
																															
																															else
																															{
																																if(input=='E')
																																{
																																	cout<<endl<<input<<"  is  a vowel";
																																}
																																
																																else
																																{
																																	if(input=='F')
																																	{
																																		cout<<endl<<input<<"  is not a vowel";
																																	}
																																	
																																	else
																																	{
																																		if(input=='G')
																																		{
																																			cout<<endl<<input<<"  is not a vowel";
																																		}
																																		
																																		else
																																		{
																																			if(input=='H')
																																			{
																																				cout<<endl<<input<<"  is not a vowel";
																																			}
																																			
																																			else
																																			{
																																				if(input=='I')
																																				{
																																					cout<<endl<<input<<"  is  a vowel";
																																				}
																																				
																																				else
																																				{
																																					if(input=='J')
																																					{
																																						cout<<endl<<input<<"  is not a vowel";
																																					}
																																					
																																					else
																																					{
																																						if(input=='K')
																																						{
																																							cout<<endl<<input<<"  is not a vowel";
																																						}
																																						
																																						else
																																						{
																																							if(input=='L')
																																							{
																																								cout<<endl<<input<<"  is not a vowel";
																																							}
																																							
																																							else
																																							{
																																								if(input=='M')
																																								{
																																									cout<<endl<<input<<"  is not a vowel";
																																								}
																																								
																																								else
																																								{
																																									if(input=='N')
																																									{
																																										cout<<endl<<input<<"  is not a vowel";
																																									}
																																									
																																									else
																																									{
																																										if(input=='O')
																																										{
																																											cout<<endl<<input<<"  is  a vowel";
																																										}
																																										
																																										else
																																										{
																																											if(input=='P')
																																											{
																																												cout<<endl<<input<<"  is not a vowel";
																																											}
																																											
																																											else 
																																											{
																																												if(input=='Q')
																																												{
																																													cout<<endl<<input<<"  is not a vowel";
																																												}
																																												
																																												else
																																												{
																																													if(input=='R')
																																													{
																																														cout<<endl<<input<<"  is not a vowel";
																																													}
																																													
																																													else
																																													{
																																														if(input=='S')
																																														{
																																															cout<<endl<<input<<"  is not a vowel";
																																														}
																																														
																																														else
																																														{
																																															if(input=='T')
																																															{
																																																cout<<endl<<input<<"  is not a vowel";
																																															}
																																															
																																															else
																																															{
																																																if(input=='U')
																																																{
																																																	cout<<endl<<input<<"  is  a vowel";
																																																}
																																																
																																																else
																																																{
																																																	if(input=='V')
																																																	{
																																																		cout<<endl<<input<<"  is not a vowel";
																																																	}
																																																	
																																																	else
																																																	{
																																																		if(input=='W')
																																																		{
																																																			cout<<endl<<input<<"  is not a vowel";
																																																		}
																																																		
																																																		else
																																																		{
																																																			if(input=='X')
																																																			{
																																																				cout<<endl<<input<<"  is not a vowel";
																																																			}
																																																			
																																																			else
																																																			{
																																																				if(input=='Y')
																																																				{
																																																					cout<<endl<<input<<"  is not a vowel";
																																																				}
																																																				
																																																				else
																																																				{
																																																					if(input=='Z')
																																																					{
																																																						cout<<endl<<input<<"  is not a vowel";
																																																					}
																																																					
																																																					else
																																																					{
																																																						cout<<"\n INVALID ENTERY!!!!!!!!";
																																																					}
																																																				}
																																																			}
																																																		}
																																																		
																																																		
																																																	}
																																																}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																										
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
															
															
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	break;    
	}
	default :
		{
			cout<<"Wrong number entered";
			break;
		}
		
			
	}
	
	
	    
	    
	
return 0;
}

