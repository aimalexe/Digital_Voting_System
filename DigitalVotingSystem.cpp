//Digital Voting System

#include <iostream>
using namespace std;

class election{
	public:
		bool voterEligibility();
		void generalBodyElection(void);
		void localBodyElection(void);
		void generalBodyVotingResults(void);
		void localBodyVotingResults(void);
	
		struct criteria{
			int age;
			int balletNo;
			struct nadra;
		};
		struct nadra {
			char name[30];
			char fatherName[30];
			char gender;
			char dateOfBirth;
			int CNIC;
			string presentAddress;
			string permanentAddress;
		};
		int candidatesNA[6] = {0, 0, 0, 0, 0, 0}, candidatesPA[6] = {0, 0, 0, 0, 0, 0},
		candidatesMayer[6] = {0, 0, 0, 0, 0, 0}, candidatesCounsler[6] = {0, 0, 0, 0, 0, 0},
		candidatesMinority[6] = {0, 0, 0, 0, 0, 0},candidatesYouth[6] = {0, 0, 0, 0, 0, 0};
};

int main(){
	election elc;
	int isGenralOrLocal;
	bool isEligible;
	char ask;
	isEligible = elc.voterEligibility();
	if (isEligible){
		tryAgain:
		cout<<"\nFor general Election press 1.\nFor local Election press 2.\n";
		cin>>isGenralOrLocal;
		if (isGenralOrLocal==1)
			elc.generalBodyElection();
		else if (isGenralOrLocal==2)
			elc.localBodyElection();
		else{
			cout<<"Invalid Entry! Try again";
			goto tryAgain;
		}
		cout<<"\n\nTo see the results of general body election. Type 'G'\nOr to see the results of local body election. Type 'L':  ";
		cin>>ask;
		if(ask == 'G' || ask == 'g')
			elc.generalBodyVotingResults();
		else if(ask == 'L' || ask== 'l')
			elc.localBodyElection();
		else
			cout<<"Invalid Entry!";
	}
	else{
		cout<<"You are inelegible or invalid credentials entered!";
	}
	return 0;
}
bool election::voterEligibility (){
	criteria person;
	cout<<"Enter Your age? =";
	cin>>person.age;
	cout<<"Type your ballet no.=";
	cin>>person.balletNo;
	
	if(person.age>=18 && person.balletNo == 0000)
		return true;
	else
		return false;
}
void election::generalBodyElection(){
	int NAVote, ptiNA = candidatesNA[0], pppNA = candidatesNA[1], pmlnNA = candidatesNA[2],
	anpNA = candidatesNA[3], independentNA = candidatesNA[4], totalVotesNA = candidatesNA[5];
	
	int PAVote, ptiPA = candidatesPA[0], pppPA = candidatesPA[1], pmlnPA = candidatesPA[2],
	anpPA = candidatesPA[3], independentPA = candidatesPA[4], totalVotesPA = candidatesPA[5];
	char ask;
	do{
		cout<<"\n\n\n\t\t~~~Vote for National Assembly Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";	
		cin>>NAVote;
		switch(NAVote){
			case 1:
				cout<<"You have voted to PTI";
				ptiNA++;
				totalVotesNA++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				pppNA++;
				totalVotesNA++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				pmlnNA++;
				totalVotesNA++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				anpNA++;
				totalVotesNA++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				independentNA++;
				totalVotesNA++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		
		cout<<"\n\n\n\t\t~~~Vote for Provincial  Assembly Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";	
		cin>>PAVote;
		switch(PAVote){
			case 1:
				cout<<"You have voted to PTI";
				ptiPA++;
				totalVotesPA++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				pppPA++;
				totalVotesPA++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				pmlnPA++;
				totalVotesPA++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				anpPA++;
				totalVotesPA++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				independentPA++;
				totalVotesPA++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		cout<<"\n\nDo you want to poll again? Press 'y': ";
		cin>>ask;
	}while(ask=='y' || ask == 'Y');	
}
void election::localBodyElection(){
	//for mayer votes
	int mayerVote, ptiM = candidatesMayer[0], pppM = candidatesMayer[1], pmlnM = candidatesMayer[2],
	anpM = candidatesMayer[3], independentM = candidatesMayer[4], totalVotesM = candidatesMayer[5];
	//for counslor votes
	int counselorVote, ptiC = candidatesCounsler[0], pppC = candidatesCounsler[1], pmlnC = candidatesCounsler[2],
	anpC = candidatesCounsler[3], independentC = candidatesCounsler[4], totalVotesC = candidatesCounsler[5];
	//for youth votes
	int youthVote, ptiY = candidatesYouth[0], pppY = candidatesYouth[1], pmlnY = candidatesYouth[2],
	anpY = candidatesYouth[3], independentY = candidatesYouth[4], totalVotesY = candidatesYouth[5];
	//for minority votes	
	int minorityVote, ptiMi = candidatesMinority[0], pppMi = candidatesMinority[1], pmlnMi = candidatesMinority[2],
	anpMi = candidatesMinority[3], independentMi = candidatesMinority[4], totalVotesMi = candidatesMinority[5];
	
	
	cout<<"\n\n\t\t~~~Vote for Mayer Seat~~~\n";
	cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
	cin>>mayerVote;
	switch(mayerVote){
		case 1:
			cout<<"You have voted to PTI";
			ptiM++;
			totalVotesM++;
			break;
		case 2:
			cout<<"You have voted to PPP";
			pppM++;
			totalVotesM++;
			break;
		case 3:
			cout<<"You have voted to PMLN";
			pmlnM++;
			totalVotesM++;
			break;
		case 4:
			cout<<"You have voted to  ANP";
			anpM++;
			totalVotesM++;
			break;
		case 5:
			cout<<"You have voted to Independent Candidate";
			independentM++;
			totalVotesM++;
			break;
		default:
			cout<<"Invalid Entry"; 
	}
	

	cout<<"\n\n\n\t\t~~~Vote for Village Counsler Seat~~~\n";
	cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
	cin>>counselorVote;
	switch(counselorVote){
		case 1:
			cout<<"You have voted to PTI";
			ptiC++;
			totalVotesC++;
			break;
		case 2:
			cout<<"You have voted to PPP";
			pppC++;
			totalVotesC++;
			break;
		case 3:
			cout<<"You have voted to PMLN";
			pmlnC++;
			totalVotesC++;
			break;
		case 4:
			cout<<"You have voted to  ANP";
			anpC++;
			totalVotesC++;
			break;
		case 5:
			cout<<"You have voted to Independent Candidate";
			independentC++;
			totalVotesC++;
			break;
		default:
			cout<<"Invalid Entry"; 
	}
	
	

	cout<<"\n\n\n\t\t~~~Vote for Youth Counsler Seat~~~";
	cout<<"\nTo Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
	cin>>youthVote;
	switch(youthVote){
		case 1:
			cout<<"You have voted to PTI";
			ptiY++;
			totalVotesY++;
			break;
		case 2:
			cout<<"You have voted to PPP";
			pppY++;
			totalVotesY++;
			break;
		case 3:
			cout<<"You have voted to PMLN";
			pmlnY++;
			totalVotesY++;
			break;
		case 4:
			cout<<"You have voted to  ANP";
			anpY++;
			totalVotesY++;
			break;
		case 5:
			cout<<"You have voted to Independent Candidate";
			independentY++;
			totalVotesY++;
			break;
		default:
			cout<<"Invalid Entry"; 
	}
	

	cout<<"\n\n\n\t\t~~~Vote for Minority Counsler Seat~~~";
	cout<<"\nTo Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
	cin>>minorityVote;
	switch(minorityVote){
		case 1:
			cout<<"You have voted to PTI";
			ptiMi++;
			totalVotesMi++;
			break;
		case 2:
			cout<<"You have voted to PPP";
			pppMi++;
			totalVotesMi++;
			break;
		case 3:
			cout<<"You have voted to PMLN";
			pmlnMi++;
			totalVotesMi++;
			break;
		case 4:
			cout<<"You have voted to  ANP";
			anpMi++;
			totalVotesMi++;
			break;
		case 5:
			cout<<"You have voted to Independent Candidate";
			independentMi++;
			totalVotesMi++;
			break;
		default:
			cout<<"Invalid Entry"; 
	}
}
void election::generalBodyVotingResults(){
	cout<<"\n\n\n\t\tTotal National Assembly Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesNA[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesNA[0]<<"\nPPPP\t\t\t\t\t"<<candidatesNA[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesNA[2]<<
	"\nANP\t\t\t\t\t"<<candidatesNA[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesNA[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
	cout<<"\n\n\t\tTotal Provincial Assembly Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesNA[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesNA[0]<<"\nPPPP\t\t\t\t\t"<<candidatesNA[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesNA[2]<<
	"\nANP\t\t\t\t\t"<<candidatesNA[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesNA[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
}
void election::localBodyVotingResults(){
	
}
