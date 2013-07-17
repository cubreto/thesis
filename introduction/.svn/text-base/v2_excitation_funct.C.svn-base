//

void plot_v2_epsilonNpart_vs_dNdeta()
{

   TCanvas *c1 = new TCanvas("c1", "c1",143,57,902,728);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->ToggleEventStatus();
   c1->Range(-1.00496,-0.0446404,35.5234,0.339606);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetRightMargin(0.0211581);
   c1->SetTopMargin(0.025);
   c1->SetBottomMargin(0.116176);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   c1->SetLogy();

   // S.Manly-QM'05: http://arxiv.org/abs/nucl-ex/0510031
   //
   // STAR-Au-130
   // 22.734375  0.179944490132  0.0
   // 21.40625  0.17067571272  0.0
   // -----------
   // PHOBOS-Au-200
   // 21.640625  0.174633360746  0.0
   // 23.28125  0.186547423246  0.0
   // 26.27642685  0.19720512147  0.0
   // 25.1833746417  0.194525601636  0.0
   // -----------
   // NA49-17
   // 11.40625  0.108395010965  0.0
   // 9.53125  0.0977864583333  0.0
   // -----------
   // E877-11.8
   // 5.93750000001  0.0686814692983  0.0
   // 7.42187500001  0.0858518366228  0.0
   // -----------
   // PHOBOS-200-Cu
   // 14.140625  0.170357044957  0.0
   // 15.546875  0.182260827851  0.0
   // -----------
   // PHOBOS-62-Cu
   // 8.59375  0.109587445175  0.0
   // 10.234375  0.122817297149  0.0
   
   // S.A.Voloshin: http://arxiv.org/abs/nucl-ex/0610038
   // 
   // STAR-200-Au
   // 26.5207970993  0.21302171725  0.0
   // 23.1780797689  0.189358252513  0.0
   // -----------
   // STAR-200-Cu
   // 15.1254311234  0.15366312784  0.0
   // 13.1574448015  0.143045173734  0.0
   // -----------
   // STAR-62-Au
   // 17.6504141733  0.192821768627  0.0
   // 15.496123574  0.17059348693  0.0
   // -----------
   // STAR-62-Cu
   // 10.7717477817  0.111142671849  0.0
   // 9.35235680805  0.101484875411  0.0
    // -----------
   // E877-11.8
   // 7.56492645109  0.0836063606232  0.0
   // 6.09984376382  0.0739491958681  0.0
   // -----------
   // NA49-40
   // 7.65704684139  0.0860244419083  0.0
   // 6.42057011467  0.0768479876694  0.0
   // -----------
   // NA49-158
   // 11.5909559885  0.1004861851  0.0
   // 9.67043009166  0.0956740264716  0.0
   
   double err = 0.1;

   // Manly's
  
  double dNdeta_star_auau130[2]= { 22.73, 21.41};
  double v2eps_star_auau130[2]= { 0.18, 0.1707 };
  double edNdeta_star_auau130[2]= { 0., 0. };
  double ev2eps_star_auau130[2]= {  err*0.18,  err*0.1707 };
  TGraphErrors *star_auau130 = new TGraphErrors(2,dNdeta_star_auau130,v2eps_star_auau130,edNdeta_star_auau130,ev2eps_star_auau130);

  double dNdeta_phobos_auau200[2]= { 26.276, 25.183 };
  double v2eps_phobos_auau200[2]= { 0.197, 0.1945};
  double edNdeta_phobos_auau200[2]= { 0., 0.};
  double ev2eps_phobos_auau200[2]= {  err*0.197,  err*0.1945 };
  TGraphErrors *phobos_auau200 = new TGraphErrors(2,dNdeta_phobos_auau200,v2eps_phobos_auau200,edNdeta_phobos_auau200,ev2eps_phobos_auau200);

  double dNdeta_phobos_cucu200[2]= { 14.14, 15.54  };
  double v2eps_phobos_cucu200[2]= { 0.170, 0.182 };
  double edNdeta_phobos_cucu200[2]= { 0., 0.};
  double ev2eps_phobos_cucu200[2]= {  err*0.170,  err*0.182 };
  TGraphErrors *phobos_cucu200 = new TGraphErrors(2,dNdeta_phobos_cucu200,v2eps_phobos_cucu200,edNdeta_phobos_cucu200,ev2eps_phobos_cucu200);

  double dNdeta_phobos_cucu62[2]= { 8.59, 10.23 };
  double v2eps_phobos_cucu62[2]= { 0.109, 0.123 };
  double edNdeta_phobos_cucu62[2]= { 0., 0.};
  double ev2eps_phobos_cucu62[2]= {  err*0.109,  err*0.123 };
  TGraphErrors *phobos_cucu62 = new TGraphErrors(2,dNdeta_phobos_cucu62,v2eps_phobos_cucu62,edNdeta_phobos_cucu62,ev2eps_phobos_cucu62);

  double dNdeta_e877_auau12lab[2]={ 7.56 , 6.10 };
  double v2eps_e877_auau12lab[2]={ 0.0836, 0.074};
  double edNdeta_e877_auau12lab[2]={ 0. , 0. };
  double ev2eps_e877_auau12lab[2]={ err*0.0836,  err*0.074};
  TGraphErrors *e877_auau12lab = new TGraphErrors(2,dNdeta_e877_auau12lab,v2eps_e877_auau12lab,edNdeta_e877_auau12lab,ev2eps_e877_auau12lab);
  
  double dNdeta_na49_auau40lab[2]={ 7.657, 6.420   };
  double v2eps_na49_auau40lab[2]=  { 0.086, 0.0768 };
  double edNdeta_na49_auau40lab[2]={ 0. ,0. };
  double ev2eps_na49_auau40lab[2]={  err*0.086, err*0.0768 };
  TGraphErrors *na49_auau40lab = new TGraphErrors(2,dNdeta_na49_auau40lab,v2eps_na49_auau40lab,edNdeta_na49_auau40lab,ev2eps_na49_auau40lab);
  
  double dNdeta_na49_auau158lab[2]={ 11.59,9.67 };
  double v2eps_na49_auau158lab[2]={ 0.100, 0.0957 };
  double edNdeta_na49_auau158lab[2]={ 0., 0. };
  double ev2eps_na49_auau158lab[2]={  err*0.100,  err*0.0957};
  TGraphErrors *na49_auau158lab = new TGraphErrors(2,dNdeta_na49_auau158lab,v2eps_na49_auau158lab,edNdeta_na49_auau158lab,ev2eps_na49_auau158lab);
  
  // Voloshin's
  
  double dNdeta_star_auau200[2]= { 26.52, 23.178 };
  double v2eps_star_auau200[2]= { 0.213, 0.1893};
  double edNdeta_star_auau200[2]= { 0., 0.0};
  double ev2eps_star_auau200[2]= {  err*0.213,  err*0.19};
  TGraphErrors *star_auau200 = new TGraphErrors(2,dNdeta_star_auau200,v2eps_star_auau200,edNdeta_star_auau200,ev2eps_star_auau200);
  
  double dNdeta_star_cucu200[2]= { 15.125, 13.157 };
  double v2eps_star_cucu200[2]= {  0.154, 0.143 };
  double edNdeta_star_cucu200[2]= { 0., 0. };
  double ev2eps_star_cucu200[2]= { err*0.154, err*0.143 };
  TGraphErrors *star_cucu200 = new TGraphErrors(2,dNdeta_star_cucu200,v2eps_star_cucu200,edNdeta_star_cucu200,ev2eps_star_cucu200);
  
  double dNdeta_star_auau62[2]= { 17.65, 15.496 };
  double v2eps_star_auau62[2]= { 0.193, 0.171 };
  double edNdeta_star_auau62[2]= { 0., 0.};
  double ev2eps_star_auau62[2]= {  err*0.193,  err*0.171};
  TGraphErrors *star_auau62 = new TGraphErrors(2,dNdeta_star_auau62,v2eps_star_auau62,edNdeta_star_auau62,ev2eps_star_auau62);
  
  double dNdeta_star_cucu62[2]= {10.772, 9.35 };
  double v2eps_star_cucu62[2]= { 0.111, 0.101 };
  double edNdeta_star_cucu62[2]= { 0., 0.};
  double ev2eps_star_cucu62[2]= {   err*0.111, err*0.101 };
  TGraphErrors *star_cucu62 = new TGraphErrors(2,dNdeta_star_cucu62,v2eps_star_cucu62,edNdeta_star_cucu62,ev2eps_star_cucu62);

  double ymax = 0.4;
  double xmax = 31.;
  double xlhc = 50.;

  TH1 *frame = new TH2F("frame","",10,0.,xlhc,10,0.,ymax);
  frame->GetXaxis()->SetTitle("(1/A_{T}) dN_{ch}/d#eta (fm^{-2})");
  frame->GetYaxis()->SetTitle("v_{2}/#varepsilon");
  frame->GetXaxis()->SetTitleOffset(1.2);
  frame->GetYaxis()->SetTitleSize(0.055);
  frame->GetYaxis()->SetTitleOffset(0.9);
  frame->GetYaxis()->SetMoreLogLabels();
  frame->GetYaxis()->SetNoExponent();
  frame->Draw("");

  TF1 *hydro_lim_hrg = new TF1("hydro_lim_hrg","pol7*(x<35)+0.229*(x>35)",2.38,xlhc);
  hydro_lim_hrg->SetParameters(0.0571782,0.0847174,-0.0146381,0.00131989,-6.86489e-05,2.06897e-06,-3.3525e-08,2.25793e-10);
  hydro_lim_hrg->SetMinimum(0.1);
  hydro_lim_hrg->SetMaximum(ymax);
  hydro_lim_hrg->SetLineStyle(9);
  hydro_lim_hrg->SetLineWidth(5);
  hydro_lim_hrg->SetLineColor(6);
  hydro_lim_hrg->Draw("same");

  TF1 *hydro_lim_qgp = new TF1("hydro_lim_qgp","pol9*(x<35)+(0.16+0.0021*x)*(x>35)",2.38201,xlhc);
  hydro_lim_qgp->SetParameters(-0.299111,0.353506,-0.0918085,0.0129129,-0.00111112,6.09286e-05,-2.13191e-06,4.59994e-08,-5.57015e-10,2.89346e-12);
  //TF1 *hydro_lim_qgp = new TF1("hydro_lim_qgp","pol9",2.40385,34.1346);
  //hydro_lim_qgp->SetParameters(-0.190887,0.27097,-0.0659711,0.00857147,-0.000680298,3.46448e-05,-1.1392e-06,2.34507e-08,-2.75655e-10,1.41621e-12); 
  hydro_lim_qgp->SetLineWidth(5);
  hydro_lim_qgp->SetLineColor(2);
  hydro_lim_qgp->Draw("same");

  //

  star_auau200->SetMarkerStyle(20);
  star_auau200->SetMarkerSize(1.9);
  star_auau200->SetMarkerColor(1);

  phobos_auau200->SetMarkerStyle(21);
  phobos_auau200->SetMarkerSize(1.8);
  phobos_auau200->SetMarkerColor(4);

  star_auau130->SetMarkerStyle(21);
  star_auau130->SetMarkerSize(1.8);
  star_auau130->SetMarkerColor(2);

  star_auau62->SetMarkerStyle(20);
  star_auau62->SetMarkerSize(1.8);
  star_auau62->SetMarkerColor(94);

  //

  star_cucu200->SetMarkerStyle(23);
  star_cucu200->SetMarkerSize(2.2);
  star_cucu200->SetMarkerColor(6);

  phobos_cucu200->SetMarkerStyle(22);
  phobos_cucu200->SetMarkerSize(2.2);
  phobos_cucu200->SetMarkerColor(3);

  star_cucu62->SetMarkerStyle(29);
  star_cucu62->SetMarkerSize(2.4);
  star_cucu62->SetMarkerColor(5);

  phobos_cucu62->SetMarkerStyle(28);
  phobos_cucu62->SetMarkerSize(2.4);
  phobos_cucu62->SetMarkerColor(2);

  na49_auau158lab->SetMarkerStyle(25);
  na49_auau158lab->SetMarkerSize(1.8);
  na49_auau158lab->SetMarkerColor(4);
  na49_auau40lab->SetMarkerStyle(26);
  na49_auau40lab->SetMarkerSize(1.8);
  na49_auau40lab->SetMarkerColor(3);
  e877_auau12lab->SetMarkerStyle(27);
  e877_auau12lab->SetMarkerSize(1.8);
  e877_auau12lab->SetMarkerColor(2);
  
  //

  e877_auau12lab->Draw("P");
  na49_auau40lab->Draw("P");
  na49_auau158lab->Draw("P");
  phobos_cucu62->Draw("P");
  star_cucu62->Draw("P");
  star_auau62->Draw("P");
  star_auau130->Draw("P");
  phobos_auau200->Draw("P");
  phobos_cucu200->Draw("P");
  star_auau200->Draw("P");
  star_cucu200->Draw("P");
  
  TLegend *leg = new TLegend(0.463252,0.825714,0.780624,0.965714,NULL,"brNDC");
  leg->SetMargin(0.15);
  leg->SetFillStyle(0);
  leg->SetBorderSize(1);
  leg->SetTextSize(0.036);
  leg->AddEntry(hydro_lim_qgp, "hydro limit (QGP-EoS)", "L");
  leg->AddEntry(hydro_lim_hrg, "hydro limit (HG-EoS)", "L");

  TLegend *legend = new TLegend(0.545657,0.497143,0.825167,0.667143,NULL,"brNDC");
  legend->SetMargin(0.15);
  legend->SetFillStyle(0);
  legend->SetBorderSize(0);
  legend->SetTextSize(0.033);
  legend->AddEntry(star_auau200, "STAR AuAu-200 GeV", "P");
  legend->AddEntry(phobos_auau200, "PHOBOS AuAu-200 GeV", "P");
  legend->AddEntry(star_auau130, "STAR AuAu-130 GeV", "P");
  legend->AddEntry(star_auau62 , "STAR AuAu-62.4 GeV", "P");

  TLegend *legend2 = new TLegend(0.371938,0.321429,0.651448,0.487143,NULL,"brNDC");
  legend2->SetMargin(0.15);
  legend2->SetFillStyle(0);
  legend2->SetBorderSize(0);
  legend2->SetTextSize(0.033);
  legend2->AddEntry(star_cucu200, "STAR CuCu-200 GeV", "P");
  legend2->AddEntry(phobos_cucu200, "PHOBOS CuCu-200 GeV", "P");
  legend2->AddEntry(star_cucu62 , "STAR CuCu-62.4 GeV", "P");
  legend2->AddEntry(phobos_cucu62 , "PHOBOS CuCu-62.4 GeV", "P");

  TLegend *legend3 = new TLegend(0.19265,0.151429,0.47216,0.288571,NULL,"brNDC");
  legend3->SetMargin(0.15);
  legend3->SetFillStyle(0);
  legend3->SetBorderSize(0);
  legend3->SetTextSize(0.033);
  legend3->AddEntry(na49_auau158lab, "NA49 AuAu-17.3 GeV", "P");
  legend3->AddEntry(na49_auau40lab, "NA49 AuAu-8.8 GeV", "P");
  legend3->AddEntry(e877_auau12lab, "BNL-E877 -5.0 GeV", "P");

  c1->cd();
  leg->Draw();
  legend->Draw();
  legend2->Draw();
  legend3->Draw();

//   //dN/dη = 0.27ln(sNN) − 0.32 
//   TF1 *dNdeta_vs_sqrts = new TF1("dNdeta_vs_sqrts","exp([0]*(x*x-[1]))",0.1,450.);
//   dNdeta_vs_sqrts->SetParameters(1./0.27,-0.32);
//   TGaxis *sqrts_axis = new TGaxis(0.,ymax,35.,ymax,"dNdeta_vs_sqrts",503,"BR-");
//   //TGaxis *sqrts_axis = new TGaxis(0.,ymax,35.,ymax,4.,450.,503,"BGR-");
//   sqrts_axis->SetTitle("#sqrt{s_{NN}} (GeV)");
//   sqrts_axis->SetTitleSize(0.045);
//   sqrts_axis->SetTitleOffset(0.7);
//   sqrts_axis->SetLabelOffset(0.02);
//   sqrts_axis->SetNdivisions(508);
//   sqrts_axis->SetLabelSize(0.04);
//   sqrts_axis->Draw();

   TLatex *   tex = new TLatex(36.632,0.194316,"LHC");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(17.3087,0.127507,"RHIC");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8.69235,0.069351,"SPS");
   tex->SetLineWidth(2);
   tex->Draw();


  c1->Update();
}

