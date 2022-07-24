//Digital Voting System

#include <iostream>
using namespace std;

bool voterEligibility();
void generalBodyElection();
void localBodyElection(void);
void votingResults(void);

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
int candidatesNA[10]={0,0,0,0,0,0,0,0,0,0};
int candidatesPA[10]={0,0,0,0,0,0,0,0,0,0};
int candidatesMayer[10]={0,0,0,0,0,0,0,0,0,0};
int candidatesCounsler[10]={0,0,0,0,0,0,0,0,0,0};
int candidatesMinority[10]={0,0,0,0,0,0,0,0,0,0};
int candidatesYouth[10]={0,0,0,0,0,0,0,0,0,0};

int main(){
	int isGenralOrLocal;
	bool isEligible;
	isEligible = voterEligibility();
	if (isEligible){
		cout<<"\nFor general Election press 1.\nFor local Election press 2.\n";
		cin>>isGenralOrLocal;
		if (isGenralOrLocal==1)
			generalBodyElection();
		else if (isGenralOrLocal==2)
			localBodyElection();
	}
	else{
		cout<<"You are inelegible or invalid credentials entered!";
	}
	return 0;
}
bool voterEligibility (){
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
void generalBodyElection(){
	int NAVote;
	int ptiNA = candidatesNA[0];
	int pppNA = candidatesNA[1];
	int pmlnNA = candidatesNA[2];
	int anpNA = candidatesNA[3];
	int independentNA = candidatesNA[4];
	int totalVotesNA = candidatesNA[5];
	
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
	
	
	int PAVote;
	int ptiPA = candidatesPA[0];
	int pppPA = candidatesPA[1];
	int pmlnPA = candidatesPA[2];
	int anpPA = candidatesPA[3];
	int independentPA = candidatesPA[4];
	int totalVotesPA = candidatesPA[5];
	
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
}
void localBodyElection(){
	int mayerVote;
	int ptiM = candidatesMayer[0];
	int pppM = candidatesMayer[1];
	int pmlnM = candidatesMayer[2];
	int anpM = candidatesMayer[3];
	int independentM = candidatesMayer[4];
	int totalVotesM = candidatesMayer[5];
	
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
	
	int counselorVote;
	int ptiC = candidatesCounsler[0];
	int pppC = candidatesCounsler[1];
	int pmlnC = candidatesCounsler[2];
	int anpC = candidatesCounsler[3];
	int independentC = candidatesCounsler[4];
	int totalVotesC = candidatesCounsler[5];
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
	
	
	
	int youthVote;
	int ptiY = candidatesYouth[0];
	int pppY = candidatesYouth[1];
	int pmlnY = candidatesYouth[2];
	int anpY = candidatesYouth[3];
	int independentY = candidatesYouth[4];
	int totalVotesY = candidatesYouth[5];
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
	
		
	int minorityVote;
	int ptiMi = candidatesMinority[0];
	int pppMi = candidatesMinority[1];
	int pmlnMi = candidatesMinority[2];
	int anpMi = candidatesMinority[3];
	int independentMi = candidatesMinority[4];
	int totalVotesMi = candidatesMinority[5];
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
