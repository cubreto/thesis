//min 1 or 9: start plotting at Npart = min
void PhenixComparCarlos(Float_t min = 2.){

  gStyle->SetCanvasColor(10);
  gStyle->SetFrameFillColor(10);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  gStyle->SetPadTopMargin(0.04);
  gStyle->SetPadRightMargin(0.04);
  gStyle->SetPadLeftMargin(0.15); 
  gStyle->SetPadBottomMargin(0.12); 

  // Value of psi/DY x-section ratio in pp collisions at 158 GeV
  // derived from the Glauber normal nuclear absorption curve...
  Double_t scalepp=35.9;

  //**********************************************************************
  //  In points
  //**********************************************************************

  Double_t NPartInRebin[8]={201.99,187.,164,139,114,90,67,53}; 
  Double_t ErrNPartInRebin[8]={0.,0.,0.,0.,0.,0.,0.,0.}; 

  Double_t MeasExpRebin[8]={0.853078,0.883488,0.854681,0.827900,0.838948,0.904797,0.944533,0.988624};
  Double_t ErrMeasExpRebin[8]={0.020996,0.014105,0.013195,0.013198,0.013730,0.015097,0.017021,0.027736};

  Double_t AbsIn[8]={21.364716,21.499950,21.774404,22.179573,22.753491,23.573294,24.731182,25.760172};
  
  Double_t Indium[8], ErrIndium[8];  
  for(int i=0;i<8;i++) {
    Indium[i]=MeasExpRebin[i]*AbsIn[i]/scalepp;
    ErrIndium[i]=ErrMeasExpRebin[i]*AbsIn[i]/scalepp;
  } 
  
  TGraphErrors *g_In = new TGraphErrors(8,NPartInRebin,Indium,ErrNPartInRebin,ErrIndium);
  g_In->SetMarkerColor(2);
  g_In->SetMarkerSize(1.35);
  g_In->SetMarkerStyle(20);

  Double_t ex[8]={5.,5.,5.,5.,5.,5.,5.,5.};
  Double_t ex0[8]={0.,0.,0.,0.,0.,0.,0.,0.};
  Double_t errmeasexpSyst[8]={0.146696,0.035814,0.013358,0.007524,0.006906,0.007190,0.007607,0.007958};
  
  Double_t ErrSystIndium[8];
  for(int i=0;i<8;i++) ErrSystIndium[i]=errmeasexpSyst[i]/MeasExpRebin[i]*Indium[i];
  Double_t TotErrIndium[8];
  for(int i=0;i<8;i++) TotErrIndium[i]=TMath::Sqrt(ErrSystIndium[i]*ErrSystIndium[i]+ErrIndium[i]*ErrIndium[i]);

  TGraphErrors *npartInrebinSyst = new TGraphErrors(8,NPartInRebin,Indium,ex,ErrSystIndium);
  npartInrebinSyst->SetMarkerColor(2);
  npartInrebinSyst->SetMarkerSize(1.35);
  npartInrebinSyst->SetMarkerStyle(20);
  npartInrebinSyst->SetLineColor(2);
  npartInrebinSyst->SetFillStyle(0);
  
  TGraphErrors *npartInrebinTotErr = new TGraphErrors(8,NPartInRebin,Indium,ex0,TotErrIndium);
  npartInrebinTotErr->SetMarkerColor(2);
  npartInrebinTotErr->SetMarkerSize(1.35);
  npartInrebinTotErr->SetMarkerStyle(20);
  npartInrebinTotErr->SetLineColor(1);

  //**********************************************************************
  //  Pb points
  //**********************************************************************
  
  Double_t PsiDYPb00Ezdc[8]={26.3,24.9,20.3,18.2,16.2,13.5,13.6,11.5};
  Double_t ErrPsiDYPb00Ezdc[8]={2.6,2.1,1.4,1.2,1.0,0.7,0.8,1.0};
  
  Double_t NPartPb00EZDC[8]={43.68,75.56,119.44,169.55,222.53,276.39,329.98,364.75};
  Double_t ErrNPartPb00EZDC[8]={0,0,0,0,0,0,0,0};
  
  Double_t Leadzdc[8], ErrLeadzdc[8];
  for(int i=0;i<8;i++){
    Leadzdc[i]=PsiDYPb00Ezdc[i]/scalepp;
    ErrLeadzdc[i]=ErrPsiDYPb00Ezdc[i]/scalepp;
  }
  
  TGraphErrors *g_Pbzdc = new TGraphErrors(8,NPartPb00EZDC,Leadzdc,ErrNPartPb00EZDC,ErrLeadzdc);
  g_Pbzdc->SetMarkerColor(8);
  g_Pbzdc->SetMarkerSize(1.35);
  g_Pbzdc->SetMarkerStyle(23);
  
  //**********************************************************************
  //  Su points
  //**********************************************************************

  // Values scaled from 200 to 158 GeV  
  Double_t NPartSU[6]={31.3,50.0,66.7,83.5,98.8,109.0};  
  Double_t ErrNPartSU[6]={0,0,0,0,0,0};
 
  Double_t PsiDYSU[6]={30.4182,25.6865,24.2349,22.2161,22.0132,21.5396};
  Double_t ErrPsiDYSU[6]={3.48328,2.3298,2.02589,1.66405,1.52635,1.56865};

  Double_t SU[6], ErrSU[6];
  for(int i=0;i<6;i++){
    SU[i]=PsiDYSU[i]/scalepp;
    ErrSU[i]=ErrPsiDYSU[i]/scalepp;
  }
  
  TGraphErrors *g_SU = new TGraphErrors(6,NPartSU,SU,ErrNPartSU,ErrSU);
  g_SU->SetMarkerColor(1);
  g_SU->SetMarkerSize(1.35);
  g_SU->SetMarkerStyle(24);

  //**********************************************************************
  //  Au-Au points central rapidity 
  //**********************************************************************

  const int nAu = 8;
  Double_t RAA_AuAu[nAu]={0.258000, 0.335000, 0.365000, 0.445000, 0.576000, 0.585000, 0.651000, 0.740000};
  Double_t ErrRAAscorr_AuAu[nAu]={0.053200, 0.060300, 0.060900, 0.066800, 0.067500, 0.079300, 0.068500, 0.118000};     
  Double_t ErrRAAcorr_AuAu[nAu]={0.04,0.05,0.05,0.07,0.08,0.08,0.1,0.21};
  
  Double_t NpartRAA_AuAu[nAu]={351.4,  299.0, 253.9, 215.3, 166.6, 114.2, 58.4, 14.5 };
  Double_t ErrNpartRAA_AuAu[nAu]={0.,0.,0.,0.,0.,0.,0.,0.};
//   Double_t ErrNpartRAAdum_AuAu[nAu]={5.,5.,5.,5.,5.,5.,5.,5.};
  Double_t ErrNpartRAAdum_AuAu[nAu]={5.,5.,5.,5.,5.,5.,5.,2.};

  TGraphErrors *g_Auscorr = new TGraphErrors(nAu,NpartRAA_AuAu,RAA_AuAu,ErrNpartRAA_AuAu,ErrRAAscorr_AuAu);
  g_Auscorr->SetMarkerColor(4);
  g_Auscorr->SetMarkerSize(1.2);
  g_Auscorr->SetMarkerStyle(21);

  TGraphErrors *g_Aucorr = new TGraphErrors(nAu,NpartRAA_AuAu,RAA_AuAu,ErrNpartRAAdum_AuAu,ErrRAAcorr_AuAu);
  g_Aucorr->SetMarkerColor(4);
  g_Aucorr->SetMarkerSize(1.2);
  g_Aucorr->SetMarkerStyle(21);
  g_Aucorr->SetLineColor(4);
  g_Aucorr->SetFillStyle(0);
  
  //**********************************************************************
  // Plot
  //**********************************************************************
  TCanvas *c = new TCanvas("c","SU+In+Pb+Au",100,100,800,600);
  c->SetLogx();
  TH2F *h = new TH2F("h","Phenix+NA60+NA50",1000,min,500.,100,0.,1.2);
  h->Draw();
  h->GetXaxis()->SetTitle("N_{part}");
  h->GetYaxis()->SetTitle("(#psi/N_{coll}^{AB})/(#psi/N_{coll}^{pp})");
  h->GetYaxis()->SetTitleOffset(1.35);
  h->GetYaxis()->SetMoreLogLabels();
  TLine *l = new TLine(0.,1.,500.,1.);
  l->SetLineColor(1);
  l->Draw();
  
  g_In->Draw("P");
  g_Pbzdc->Draw("P");
  g_Auscorr->Draw("P");
//  g_Aucorr->Draw("E2P");
  g_SU->Draw("P");
  npartInrebinSyst->Draw("E2P");

  TLegend *leg = new TLegend(.16,.15,.47,.3);
  leg->SetFillColor(0);
  leg->SetTextColor(4);
  leg->SetTextSize(0.03);
  leg->SetTextAlign(22);
  leg->AddEntry(g_SU,"NA38, S-U","P");
  leg->AddEntry(g_In,"NA60, In-In","P");
  leg->AddEntry(g_Pbzdc,"NA50, Pb-Pb (ZDC)","P");
  leg->AddEntry(g_Auscorr,"PHENIX, Au-Au y=0","P");
  leg->SetBorderSize(0);
  leg->Draw();

  Float_t start = 20.;
  if(min > 2) start = 60.;
  TLatex *lat1 = new TLatex(start, 1.12, "NA38/50/60 syst_{global} = #pm 11 %");
  lat1->SetTextSize(0.03);
  lat1->Draw();
  lat1->DrawLatex(start, 1.05, "PHENIX syst_{global} = #pm 12 %");

  if(min > 2.)
    c->Print("jpsi-logx.eps");
  else
    c->Print("jpsi-logx2.eps");
}
