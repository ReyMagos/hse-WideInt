import WideInt;

#include <gtest/gtest.h>


TEST(Neykandre_Comparisons, less1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a < b, true);
}

TEST(Neykandre_Comparisons, less96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, less100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a < b, false);
}

TEST(Neykandre_Comparisons, equal1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal1_1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000026048038918855092_w;
	EXPECT_EQ(a == b, true);
}

TEST(Neykandre_Comparisons, equal2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal6_1) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.095819307603995188_w;
	EXPECT_EQ(a == b, true);
}

TEST(Neykandre_Comparisons, equal7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal11_1) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.69034074467533889_w;
	EXPECT_EQ(a == b, true);
}

TEST(Neykandre_Comparisons, equal12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal16_1) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -9.9478713451941512_w;
	EXPECT_EQ(a == b, true);
}

TEST(Neykandre_Comparisons, equal17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal21_1) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -6840515649.060211_w;
	EXPECT_EQ(a == b, true);
}

TEST(Neykandre_Comparisons, equal22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, equal100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a == b, false);
}

TEST(Neykandre_Comparisons, greater1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a > b, false);
}

TEST(Neykandre_Comparisons, greater96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, greater100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a > b, true);
}

TEST(Neykandre_Comparisons, lessEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a <= b, false);
}

TEST(Neykandre_Comparisons, lessEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a <= b, true);
}

TEST(Neykandre_Comparisons, lessEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a <= b, true);
}

TEST(Neykandre_Comparisons, lessEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a <= b, true);
}

TEST(Neykandre_Comparisons, lessEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a <= b, true);
}

TEST(Neykandre_Comparisons, greaterEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a >= b, true);
}

TEST(Neykandre_Comparisons, greaterEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a >= b, false);
}

TEST(Neykandre_Comparisons, greaterEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a >= b, false);
}

TEST(Neykandre_Comparisons, greaterEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a >= b, false);
}

TEST(Neykandre_Comparisons, greaterEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a >= b, false);
}

TEST(Neykandre_Comparisons, ne1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne1_1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000026048038918855092_w;
	EXPECT_EQ(a != b, false);
}

TEST(Neykandre_Comparisons, ne2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne6_1) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.095819307603995188_w;
	EXPECT_EQ(a != b, false);
}

TEST(Neykandre_Comparisons, ne7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne11_1) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.69034074467533889_w;
	EXPECT_EQ(a != b, false);
}

TEST(Neykandre_Comparisons, ne12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne16_1) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -9.9478713451941512_w;
	EXPECT_EQ(a != b, false);
}

TEST(Neykandre_Comparisons, ne17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne21_1) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -6840515649.060211_w;
	EXPECT_EQ(a != b, false);
}

TEST(Neykandre_Comparisons, ne22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Comparisons, ne100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a != b, true);
}

TEST(Neykandre_Operations, plus1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a + b, -0.000000000059417627530159525_w);
}

TEST(Neykandre_Operations, plus2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a + b, -0.070507945602687924638909624_w);
}

TEST(Neykandre_Operations, plus3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a + b, -0.857721191191104829491797396_w);
}

TEST(Neykandre_Operations, plus4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a + b, -7.925776521655260866506362620_w);
}

TEST(Neykandre_Operations, plus5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a + b, -4960421970.098010700016335221309801085_w);
}

TEST(Neykandre_Operations, plus6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a + b, -0.095819307632862305031116327_w);
}

TEST(Neykandre_Operations, plus7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a + b, -0.147184477503437687_w);
}

TEST(Neykandre_Operations, plus8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a + b, -0.870643087562176015_w);
}

TEST(Neykandre_Operations, plus9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a + b, -2.294952739911738151_w);
}

TEST(Neykandre_Operations, plus10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a + b, -7477123810.658402177685871346_w);
}

TEST(Neykandre_Operations, plus11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a + b, -0.690340744748643750021539904_w);
}

TEST(Neykandre_Operations, plus12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a + b, -0.784903722719774247_w);
}

TEST(Neykandre_Operations, plus13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a + b, -1.82882326470214883_w);
}

TEST(Neykandre_Operations, plus14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a + b, -6.3605804285961049_w);
}

TEST(Neykandre_Operations, plus15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a + b, -9122071278.47268533406176585_w);
}

TEST(Neykandre_Operations, plus16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a + b, -9.947871345286596719180558280_w);
}

TEST(Neykandre_Operations, plus17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a + b, -1.784414891193916995_w);
}

TEST(Neykandre_Operations, plus18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a + b, -2.55951000450597959_w);
}

TEST(Neykandre_Operations, plus19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a + b, -13.7732101314095684_w);
}

TEST(Neykandre_Operations, plus20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a + b, -7599447091.3534233195993330_w);
}

TEST(Neykandre_Operations, plus21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a + b, -6840515649.060211000030401225757660793_w);
}

TEST(Neykandre_Operations, plus22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a + b, -1578196312.433333714341845108_w);
}

TEST(Neykandre_Operations, plus23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a + b, -5115149214.74328889119499794_w);
}

TEST(Neykandre_Operations, plus24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a + b, -7979956903.8022191400141017_w);
}

TEST(Neykandre_Operations, plus25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a + b, -13142616891.7341543_w);
}

TEST(Neykandre_Operations, plus26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a + b, 0.00000000051058816800744309_w);
}

TEST(Neykandre_Operations, plus27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a + b, 0.554710417847786767422611938_w);
}

TEST(Neykandre_Operations, plus28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a + b, 2.720506612700346222841434647_w);
}

TEST(Neykandre_Operations, plus29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a + b, 29.989563349726553039240011827_w);
}

TEST(Neykandre_Operations, plus30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a + b, 89005835203.28876099998256989144348642_w);
}

TEST(Neykandre_Operations, plus31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a + b, -0.01244975333826865131454604_w);
}

TEST(Neykandre_Operations, plus32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a + b, 0.137865353381523681_w);
}

TEST(Neykandre_Operations, plus33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a + b, 3.04056088411943983_w);
}

TEST(Neykandre_Operations, plus34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a + b, 25.419401974821659082_w);
}

TEST(Neykandre_Operations, plus35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a + b, 19228293161.524457727893403179_w);
}

TEST(Neykandre_Operations, plus36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a + b, -0.97392621868390437651893257_w);
}

TEST(Neykandre_Operations, plus37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a + b, -0.12862206646184936_w);
}

TEST(Neykandre_Operations, plus38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a + b, 1.37725906217074085_w);
}

TEST(Neykandre_Operations, plus39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a + b, 43.60572602816687035_w);
}

TEST(Neykandre_Operations, plus40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a + b, 85151738564.96840278248785715_w);
}

TEST(Neykandre_Operations, plus41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a + b, -3.14221680307459286733648718_w);
}

TEST(Neykandre_Operations, plus42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a + b, -8.38479457586721968_w);
}

TEST(Neykandre_Operations, plus43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a + b, 3.0747092902674200_w);
}

TEST(Neykandre_Operations, plus44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a + b, 12.9890627514668704_w);
}

TEST(Neykandre_Operations, plus45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a + b, 66830610841.6094809505853539_w);
}

TEST(Neykandre_Operations, plus46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a + b, -4883744850.70119899956148773290801720_w);
}

TEST(Neykandre_Operations, plus47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a + b, -9737218073.85460432528934573_w);
}

TEST(Neykandre_Operations, plus48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a + b, -8621468524.1863855382176857_w);
}

TEST(Neykandre_Operations, plus49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a + b, -9907496688.228225686464673_w);
}

TEST(Neykandre_Operations, plus50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a + b, 36424588000.6765822_w);
}

TEST(Neykandre_Operations, plus51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a + b, 0.000000000509877171068544835_w);
}

TEST(Neykandre_Operations, plus52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a + b, -0.072305654532698869241280_w);
}

TEST(Neykandre_Operations, plus53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a + b, -0.86561851290682188564592242_w);
}

TEST(Neykandre_Operations, plus54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a + b, -6.11164840704860567283757406_w);
}

TEST(Neykandre_Operations, plus55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a + b, -7452548747.53410519988061467675839353_w);
}

TEST(Neykandre_Operations, plus56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a + b, 0.262383451650955511606125642_w);
}

TEST(Neykandre_Operations, plus57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a + b, 0.044622449594381146_w);
}

TEST(Neykandre_Operations, plus58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a + b, 0.30684445679422850_w);
}

TEST(Neykandre_Operations, plus59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a + b, -8.53884035125139174_w);
}

TEST(Neykandre_Operations, plus60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a + b, -5463212390.33621102285629904_w);
}

TEST(Neykandre_Operations, plus61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a + b, 2.118916307703738369717487734_w);
}

TEST(Neykandre_Operations, plus62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a + b, 9.906994903737543290_w);
}

TEST(Neykandre_Operations, plus63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a + b, 4.47742232314318180_w);
}

TEST(Neykandre_Operations, plus64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a + b, 0.2046157614716854_w);
}

TEST(Neykandre_Operations, plus65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a + b, -1547424022.559792971754105_w);
}

TEST(Neykandre_Operations, plus66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a + b, 56.428214305847345024962629965_w);
}

TEST(Neykandre_Operations, plus67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a + b, 67.793147061689619628_w);
}

TEST(Neykandre_Operations, plus68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a + b, 68.15494972367004247_w);
}

TEST(Neykandre_Operations, plus69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a + b, 80.0971507446026671_w);
}

TEST(Neykandre_Operations, plus70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a + b, -3237650176.7053564837127_w);
}

TEST(Neykandre_Operations, plus71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a + b, 14413214881.926853999964765826763905367_w);
}

TEST(Neykandre_Operations, plus72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a + b, 15202162416.381530291627963417_w);
}

TEST(Neykandre_Operations, plus73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a + b, 87106286439.05237221482518684_w);
}

TEST(Neykandre_Operations, plus74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a + b, 18699641197.1758887908850476_w);
}

TEST(Neykandre_Operations, plus75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a + b, 79396891326.8073176_w);
}

TEST(Neykandre_Operations, plus76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a + b, 0.00000000101759712092867844_w);
}

TEST(Neykandre_Operations, plus77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a + b, 0.28661320893035778130390175_w);
}

TEST(Neykandre_Operations, plus78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a + b, 4.00181102919430495188344298_w);
}

TEST(Neykandre_Operations, plus79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a + b, 93.95135122486044221393853781_w);
}

TEST(Neykandre_Operations, plus80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a + b, 17654463719.00382100077091278383477930_w);
}

TEST(Neykandre_Operations, plus81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a + b, 0.69227143536333836923196074_w);
}

TEST(Neykandre_Operations, plus82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a + b, 0.90607003569060424_w);
}

TEST(Neykandre_Operations, plus83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a + b, 4.03674943948357458_w);
}

TEST(Neykandre_Operations, plus84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a + b, 65.98797847270653415_w);
}

TEST(Neykandre_Operations, plus85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a + b, 67298048453.8633487027234400_w);
}

TEST(Neykandre_Operations, plus86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a + b, 9.90672474362268034230843112_w);
}

TEST(Neykandre_Operations, plus87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a + b, 5.47645444019224170_w);
}

TEST(Neykandre_Operations, plus88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a + b, 8.1674714112934241_w);
}

TEST(Neykandre_Operations, plus89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a + b, 74.2199179081654160_w);
}

TEST(Neykandre_Operations, plus90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a + b, 17970712750.7560577325914498_w);
}

TEST(Neykandre_Operations, plus91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a + b, 30.74497148536617672230536596_w);
}

TEST(Neykandre_Operations, plus92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a + b, 88.05613888843089990_w);
}

TEST(Neykandre_Operations, plus93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a + b, 41.4567405572795926_w);
}

TEST(Neykandre_Operations, plus94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a + b, 125.658499905296815_w);
}

TEST(Neykandre_Operations, plus95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a + b, 42297970514.4544351772590_w);
}

TEST(Neykandre_Operations, plus96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a + b, 77518679647.43678900023341605159645392_w);
}

TEST(Neykandre_Operations, plus97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a + b, 36047952522.09486264057449541_w);
}

TEST(Neykandre_Operations, plus98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a + b, 17249351678.9656360799851731_w);
}

TEST(Neykandre_Operations, plus99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a + b, 49659677043.898986265531172_w);
}

TEST(Neykandre_Operations, plus100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a + b, 171135499493.123472_w);
}

TEST(Neykandre_Operations, minus1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a - b, 0.000000000007321549692449341_w);
}

TEST(Neykandre_Operations, minus2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a - b, 0.070507945516465471361090376_w);
}

TEST(Neykandre_Operations, minus3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a - b, 0.857721191031087750508202604_w);
}

TEST(Neykandre_Operations, minus4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a - b, 7.925776521565486533493637380_w);
}

TEST(Neykandre_Operations, minus5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a - b, 4960421970.098010699983664778690198915_w);
}

TEST(Neykandre_Operations, minus6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a - b, -0.095819307575128070968883673_w);
}

TEST(Neykandre_Operations, minus7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a - b, 0.039087981536226101_w);
}

TEST(Neykandre_Operations, minus8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a - b, 0.814535310661024265_w);
}

TEST(Neykandre_Operations, minus9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a - b, 2.142581368231837849_w);
}

TEST(Neykandre_Operations, minus10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a - b, 7477123810.585304622314128654_w);
}

TEST(Neykandre_Operations, minus11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a - b, -0.690340744602034029978460096_w);
}

TEST(Neykandre_Operations, minus12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a - b, -0.630029726897402213_w);
}

TEST(Neykandre_Operations, minus13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a - b, 0.13981127220258357_w);
}

TEST(Neykandre_Operations, minus14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a - b, 5.2476642549167591_w);
}

TEST(Neykandre_Operations, minus15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a - b, 9122071277.02658746593823415_w);
}

TEST(Neykandre_Operations, minus16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a - b, -9.947871345101705680819441720_w);
}

TEST(Neykandre_Operations, minus17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a - b, -1.670799368743045805_w);
}

TEST(Neykandre_Operations, minus18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a - b, -1.85701330374680761_w);
}

TEST(Neykandre_Operations, minus19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a - b, 0.7623327907205754_w);
}

TEST(Neykandre_Operations, minus20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a - b, 7599447073.6749632804006670_w);
}

TEST(Neykandre_Operations, minus21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a - b, -6840515649.060210999969598774242339207_w);
}

TEST(Neykandre_Operations, minus22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a - b, -1578196312.315466685658154892_w);
}

TEST(Neykandre_Operations, minus23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a - b, -5115149214.41963010880500206_w);
}

TEST(Neykandre_Operations, minus24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a - b, -7979956899.8958048599858983_w);
}

TEST(Neykandre_Operations, minus25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a - b, -5648816857.2274453_w);
}

TEST(Neykandre_Operations, minus26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a - b, -0.00000000063551415409502519_w);
}

TEST(Neykandre_Operations, minus27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a - b, -0.554710417927656952577388062_w);
}

TEST(Neykandre_Operations, minus28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a - b, -2.720506612758020177158565353_w);
}

TEST(Neykandre_Operations, minus29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a - b, -29.989563349926526960759988173_w);
}

TEST(Neykandre_Operations, minus30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a - b, -89005835203.28876100001743010855651358_w);
}

TEST(Neykandre_Operations, minus31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a - b, -0.01244975499892678268545396_w);
}

TEST(Neykandre_Operations, minus32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a - b, -0.267621497244587719_w);
}

TEST(Neykandre_Operations, minus33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a - b, -3.13904475020222797_w);
}

TEST(Neykandre_Operations, minus34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a - b, -25.605254825935544918_w);
}

TEST(Neykandre_Operations, minus35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a - b, -19228293161.670784272106596821_w);
}

TEST(Neykandre_Operations, minus36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a - b, -0.97392622026203442348106743_w);
}

TEST(Neykandre_Operations, minus37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a - b, -0.63122266300853180_w);
}

TEST(Neykandre_Operations, minus38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a - b, -2.41736498629169415_w);
}

TEST(Neykandre_Operations, minus39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a - b, -44.68678448500598965_w);
}

TEST(Neykandre_Operations, minus40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a - b, -85151738565.38921721751214285_w);
}

TEST(Neykandre_Operations, minus41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a - b, -3.14221680454681113266351282_w);
}

TEST(Neykandre_Operations, minus42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a - b, -9.82251220048021772_w);
}

TEST(Neykandre_Operations, minus43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a - b, -13.8232700287127420_w);
}

TEST(Neykandre_Operations, minus44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a - b, -24.2210433547331576_w);
}

TEST(Neykandre_Operations, minus45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a - b, -66830610850.5069270494146461_w);
}

TEST(Neykandre_Operations, minus46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a - b, -4883744850.70119900043851226709198280_w);
}

TEST(Neykandre_Operations, minus47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a - b, -9737218075.10599867471065427_w);
}

TEST(Neykandre_Operations, minus48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a - b, -8621468541.3686282617823143_w);
}

TEST(Neykandre_Operations, minus49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a - b, -9907496773.079325313535327_w);
}

TEST(Neykandre_Operations, minus50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a - b, -51027495989.5086838_w);
}

TEST(Neykandre_Operations, minus51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a - b, 0.000000000693109406656628485_w);
}

TEST(Neykandre_Operations, minus52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a - b, 0.072305655641834506758720_w);
}

TEST(Neykandre_Operations, minus53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a - b, 0.86561851351419493435407758_w);
}

TEST(Neykandre_Operations, minus54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a - b, 6.11164840741098352716242594_w);
}

TEST(Neykandre_Operations, minus55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a - b, 7452548747.53410520011938532324160647_w);
}

TEST(Neykandre_Operations, minus56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a - b, 0.262383451755468208393874358_w);
}

TEST(Neykandre_Operations, minus57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a - b, 0.202438586553851654_w);
}

TEST(Neykandre_Operations, minus58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a - b, 0.82144312647725580_w);
}

TEST(Neykandre_Operations, minus59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a - b, 9.93292538845703186_w);
}

TEST(Neykandre_Operations, minus60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a - b, 5463212391.28130377714370096_w);
}

TEST(Neykandre_Operations, minus61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a - b, 2.118916307792365630282512266_w);
}

TEST(Neykandre_Operations, minus62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a - b, 10.021996435207409910_w);
}

TEST(Neykandre_Operations, minus63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a - b, 5.59771055320395500_w);
}

TEST(Neykandre_Operations, minus64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a - b, 8.7554871237362366_w);
}

TEST(Neykandre_Operations, minus65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a - b, 1547424040.228409228245895_w);
}

TEST(Neykandre_Operations, minus66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a - b, 56.428214305898740975037370035_w);
}

TEST(Neykandre_Operations, minus67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a - b, 67.950460293658904372_w);
}

TEST(Neykandre_Operations, minus68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a - b, 68.50415712039051753_w);
}

TEST(Neykandre_Operations, minus69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a - b, 99.4161246268295689_w);
}

TEST(Neykandre_Operations, minus70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a - b, 3237650287.9885035162873_w);
}

TEST(Neykandre_Operations, minus71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a - b, 14413214881.926854000035234173236094633_w);
}

TEST(Neykandre_Operations, minus72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a - b, 15202162416.425319708372036583_w);
}

TEST(Neykandre_Operations, minus73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a - b, 87106286440.45664978517481316_w);
}

TEST(Neykandre_Operations, minus74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a - b, 18699641201.8213292091149524_w);
}

TEST(Neykandre_Operations, minus75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a - b, 88199332069.1093484_w);
}

TEST(Neykandre_Operations, minus76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a - b, -0.00000000065080540021335918_w);
}

TEST(Neykandre_Operations, minus77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a - b, -0.28661320866591981869609825_w);
}

TEST(Neykandre_Operations, minus78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a - b, -4.00181102860064104811655702_w);
}

TEST(Neykandre_Operations, minus79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a - b, -93.95135122340510178606146219_w);
}

TEST(Neykandre_Operations, minus80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a - b, -17654463719.00382099922908721616522070_w);
}

TEST(Neykandre_Operations, minus81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a - b, 0.69227143482493435076803926_w);
}

TEST(Neykandre_Operations, minus82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a - b, -0.29029236226437236_w);
}

TEST(Neykandre_Operations, minus83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a - b, -2.55473319108029822_w);
}

TEST(Neykandre_Operations, minus84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a - b, -64.96735511142609385_w);
}

TEST(Neykandre_Operations, minus85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a - b, -67298048453.3866112972765600_w);
}

TEST(Neykandre_Operations, minus86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a - b, 9.90672474213375525769156888_w);
}

TEST(Neykandre_Operations, minus87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a - b, 3.55505284461300430_w);
}

TEST(Neykandre_Operations, minus88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a - b, 1.8368620855670435_w);
}

TEST(Neykandre_Operations, minus89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a - b, -66.9089194214557920_w);
}

TEST(Neykandre_Operations, minus90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a - b, -17970712732.1934182674085502_w);
}

TEST(Neykandre_Operations, minus91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a - b, 30.74497148394004327769463404_w);
}

TEST(Neykandre_Operations, minus92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a - b, 86.46937251556294610_w);
}

TEST(Neykandre_Operations, minus93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a - b, 37.9095250328912674_w);
}

TEST(Neykandre_Operations, minus94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a - b, -46.219358111782983_w);
}

TEST(Neykandre_Operations, minus95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a - b, -42297970369.6659588227410_w);
}

TEST(Neykandre_Operations, minus96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a - b, 77518679647.43678899976658394840354608_w);
}

TEST(Neykandre_Operations, minus97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a - b, 36047952521.26131735942550459_w);
}

TEST(Neykandre_Operations, minus98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a - b, 17249351660.4430139200148269_w);
}

TEST(Neykandre_Operations, minus99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a - b, 49659677016.532393734468828_w);
}

TEST(Neykandre_Operations, minus100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a - b, 11556657651.784228_w);
}

TEST(Neykandre_Operations, multiply1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a * b, 0.000000000000000000000869212342853441513794741024222836_w);
}

TEST(Neykandre_Operations, multiply2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a * b, 0.000000000003039684020862812478293365718341552_w);
}

TEST(Neykandre_Operations, multiply3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a * b, 0.00000000006862501979196364913367581212726084_w);
}

TEST(Neykandre_Operations, multiply4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a * b, 0.0000000003557656504177443966110496459110940_w);
}

TEST(Neykandre_Operations, multiply5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a * b, 0.0810295906715505048390659712016095_w);
}

TEST(Neykandre_Operations, multiply6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a * b, 0.000000000002766027166445063667752496776234476_w);
}

TEST(Neykandre_Operations, multiply7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a * b, 0.005033850029345900499274077324561942_w);
}

TEST(Neykandre_Operations, multiply8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a * b, 0.02363790340153689548360277573062250_w);
}

TEST(Neykandre_Operations, multiply9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a * b, 0.169038289733544930056203495439988_w);
}

TEST(Neykandre_Operations, multiply10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a * b, 273279735.8841533234431514884726764_w);
}

TEST(Neykandre_Operations, multiply11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a * b, 0.00000000005060533165559133615160071085806656_w);
}

TEST(Neykandre_Operations, multiply12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a * b, 0.05478409929123625947911790668677991_w);
}

TEST(Neykandre_Operations, multiply13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a * b, 0.8312618354202302523561832591591060_w);
}

TEST(Neykandre_Operations, multiply14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a * b, 3.22975081407718626756656635109280_w);
}

TEST(Neykandre_Operations, multiply15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a * b, 6595703913.812325004138389979436940_w);
}

TEST(Neykandre_Operations, multiply16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a * b, 0.0000000009196361312478720031980150067319360_w);
}

TEST(Neykandre_Operations, multiply17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a * b, 0.0981414933306095701748323356554330_w);
}

TEST(Neykandre_Operations, multiply18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a * b, 0.775648263218391629611164699785664_w);
}

TEST(Neykandre_Operations, multiply19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a * b, 47.28004151003883995572717654179835_w);
}

TEST(Neykandre_Operations, multiply20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a * b, 67173260784.11602682923315171306890_w);
}

TEST(Neykandre_Operations, multiply21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a * b, 0.207960060545891024354344171007323_w);
}

TEST(Neykandre_Operations, multiply22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a * b, 93008655.0095637762771313728042216_w);
}

TEST(Neykandre_Operations, multiply23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a * b, 827781483.267289470412167064693430_w);
}

TEST(Neykandre_Operations, multiply24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a * b, 15586508797.6963003985884842125204_w);
}

TEST(Neykandre_Operations, multiply25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a * b, 35204811719099742787.66924239292910_w);
}

TEST(Neykandre_Operations, multiply26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a * b, -0.0000000000000000000357944906864796227743336667864470_w);
}

TEST(Neykandre_Operations, multiply27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a * b, -0.00000000002215241189198779130491297834043532_w);
}

TEST(Neykandre_Operations, multiply28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a * b, -0.0000000000784511870509974545534236275096696_w);
}

TEST(Neykandre_Operations, multiply29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a * b, -0.000000002998565293868285721220832001511420_w);
}

TEST(Neykandre_Operations, multiply30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a * b, -1.55138136975648104928844415787438_w);
}

TEST(Neykandre_Operations, multiply31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a * b, -0.00000000001033739274682532801363641776460932_w);
}

TEST(Neykandre_Operations, multiply32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a * b, -0.01315360253110561725240118328045830_w);
}

TEST(Neykandre_Operations, multiply33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a * b, -0.152147863433744547227681459714973_w);
}

TEST(Neykandre_Operations, multiply34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a * b, -2.370769485882062754638980902640636_w);
}

TEST(Neykandre_Operations, multiply35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a * b, -1406804844.727381624058257679762841_w);
}

TEST(Neykandre_Operations, multiply36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a * b, -0.0000000007684911152372658309007735437266420_w);
}

TEST(Neykandre_Operations, multiply37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a * b, -0.0954746035786665265227948100697076_w);
}

TEST(Neykandre_Operations, multiply38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a * b, -0.986702738154403508971457859821375_w);
}

TEST(Neykandre_Operations, multiply39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a * b, -23.8623412914555923274401027655495_w);
}

TEST(Neykandre_Operations, multiply40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a * b, -17916540377.8207005906973565130085_w);
}

TEST(Neykandre_Operations, multiply41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a * b, -0.000000002313014486093811274078489630199640_w);
}

TEST(Neykandre_Operations, multiply42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a * b, -6.544241462272595116199108771305674_w);
}

TEST(Neykandre_Operations, multiply43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a * b, -45.4072392667627973550916099255410_w);
}

TEST(Neykandre_Operations, multiply44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a * b, -104.4857975075797868751949480240104_w);
}

TEST(Neykandre_Operations, multiply45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a * b, -297310878877.3195750782797306616044_w);
}

TEST(Neykandre_Operations, multiply46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a * b, -2.14158202637977983896121124737720_w);
}

TEST(Neykandre_Operations, multiply47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a * b, -6092549838.743841769768565291862405_w);
}

TEST(Neykandre_Operations, multiply48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a * b, -74068082481.87886630910675326621867_w);
}

TEST(Neykandre_Operations, multiply49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a * b, -420330996073.7901470340996751770885_w);
}

TEST(Neykandre_Operations, multiply50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a * b, -319263683985073088370.7180880337564_w);
}

TEST(Neykandre_Operations, multiply51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a * b, -0.00000000000000000005510648000476036517889970572705450_w);
}

TEST(Neykandre_Operations, multiply52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a * b, -0.000000000040098389425665833376057765519360_w);
}

TEST(Neykandre_Operations, multiply53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a * b, -0.0000000002628766776934434876664416883824478_w);
}

TEST(Neykandre_Operations, multiply54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a * b, -0.000000001107363018099915763498196383911924_w);
}

TEST(Neykandre_Operations, multiply55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a * b, -0.889724941198188598212615961980644_w);
}

TEST(Neykandre_Operations, multiply56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a * b, -0.00000000001371120106499034526331385789548588_w);
}

TEST(Neykandre_Operations, multiply57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a * b, -0.00974755457952955039615302197956560_w);
}

TEST(Neykandre_Operations, multiply58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a * b, -0.1451538223428459270149609471053475_w);
}

TEST(Neykandre_Operations, multiply59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a * b, -6.437803057123821551735800548528708_w);
}

TEST(Neykandre_Operations, multiply60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a * b, -2581621222.843255274485053414787104_w);
}

TEST(Neykandre_Operations, multiply61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a * b, -0.000000000093896873861133157115015527605832_w);
}

TEST(Neykandre_Operations, multiply62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a * b, -0.5729661311570943357906721815355460_w);
}

TEST(Neykandre_Operations, multiply63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a * b, -2.821763194417510204140170953543440_w);
}

TEST(Neykandre_Operations, multiply64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a * b, -19.15417179101709990393374550365160_w);
}

TEST(Neykandre_Operations, multiply65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a * b, -13670420698.3879383511833932899845_w);
}

TEST(Neykandre_Operations, multiply66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a * b, -0.000000001450090842635692155785901322466505_w);
}

TEST(Neykandre_Operations, multiply67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a * b, -5.338566398059862286646638779029464_w);
}

TEST(Neykandre_Operations, multiply68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a * b, -11.9305927347899111067306756524084_w);
}

TEST(Neykandre_Operations, multiply69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a * b, -867.0030696034262753806334487316062_w);
}

TEST(Neykandre_Operations, multiply70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a * b, -180147953423.15636372365915298900_w);
}

TEST(Neykandre_Operations, multiply71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a * b, -0.507837710038868025080400927974582_w);
}

TEST(Neykandre_Operations, multiply72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a * b, -332846912.731487960184653386496775_w);
}

TEST(Neykandre_Operations, multiply73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a * b, -61160702141.89853324020777069216476_w);
}

TEST(Neykandre_Operations, multiply74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a * b, -43434034517.2739884267105249012116_w);
}

TEST(Neykandre_Operations, multiply75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a * b, -368813956269042419666.1133998413282_w);
}

TEST(Neykandre_Operations, multiply76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a * b, 0.0000000000000000001529890578938661999374907763076403_w);
}

TEST(Neykandre_Operations, multiply77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a * b, 0.000000000037895706495532402559432578062900_w);
}

TEST(Neykandre_Operations, multiply78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a * b, 0.00000000118786537877632615032587266158954_w);
}

TEST(Neykandre_Operations, multiply79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a * b, 0.00000006836559984507940036595882698210932_w);
}

TEST(Neykandre_Operations, multiply80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a * b, 13.61005177272734649996924939170530_w);
}

TEST(Neykandre_Operations, multiply81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a * b, 0.0000000001863608612612344065972450797265064_w);
}

TEST(Neykandre_Operations, multiply82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a * b, 0.184173313496835810889777407893502_w);
}

TEST(Neykandre_Operations, multiply83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a * b, 2.442171089890907503415569442571752_w);
}

TEST(Neykandre_Operations, multiply84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a * b, 33.41401818505969302401423435902710_w);
}

TEST(Neykandre_Operations, multiply85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a * b, 16041748505.709793850666415531200_w);
}

TEST(Neykandre_Operations, multiply86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a * b, 0.000000007375185488032956627795288339657936_w);
}

TEST(Neykandre_Operations, multiply87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a * b, 4.33828812687757643162475504985010_w);
}

TEST(Neykandre_Operations, multiply88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a * b, 15.83338173322542204511749364289214_w);
}

TEST(Neykandre_Operations, multiply89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a * b, 257.9481790369873361756715520264480_w);
}

TEST(Neykandre_Operations, multiply90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a * b, 166791930776.1820750357329014951524_w);
}

TEST(Neykandre_Operations, multiply91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a * b, 0.00000002192321604393353418738914220213560_w);
}

TEST(Neykandre_Operations, multiply92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a * b, 69.23280317586000553694662645307870_w);
}

TEST(Neykandre_Operations, multiply93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a * b, 70.382312353545254340746714310918_w);
}

TEST(Neykandre_Operations, multiply94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a * b, 3413.457383546060058164607490191484_w);
}

TEST(Neykandre_Operations, multiply95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a * b, 3062129346597.1670545340344600230_w);
}

TEST(Neykandre_Operations, multiply96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a * b, 18.09410412827508790943812975126288_w);
}

TEST(Neykandre_Operations, multiply97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a * b, 15023800359.7638180630595882025669_w);
}

TEST(Neykandre_Operations, multiply98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a * b, 159751611741.1934110341494609436575_w);
}

TEST(Neykandre_Operations, multiply99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a * b, 679508073255.034473088891578488680_w);
}

TEST(Neykandre_Operations, multiply100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a * b, 7288450712670080298750.38569194470_w);
}

/*
TEST(Neykandre_Operations, division1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	EXPECT_EQ(a / b, 0.7805921500042388997253364892266371918976027786235700409095250353710088944826188180790807204163686721_w);
}

TEST(Neykandre_Operations, division2) {
	WideInt a = -0.000000000043111226638909624_w;
	WideInt b = -0.070507945559576698_w;
	EXPECT_EQ(a / b, 0.0000000006114378499722726407683032617548657491660342483159068325204031089346570896855707252772503198_w);
}

TEST(Neykandre_Operations, division3) {
	WideInt a = -0.000000000080008539491797396_w;
	WideInt b = -0.85772119111109629_w;
	EXPECT_EQ(a / b, 0.0000000000932803576744488924869010263850370724621985814233993577064337823623064684767480759481799226_w);
}

TEST(Neykandre_Operations, division4) {
	WideInt a = -0.000000000044887166506362620_w;
	WideInt b = -7.9257765216103737_w;
	EXPECT_EQ(a / b, 0.0000000000056634408482214388510816228638831136241378597368749309002025319645268673120393003381455697_w);
}

TEST(Neykandre_Operations, division5) {
	WideInt a = -0.000000000016335221309801085_w;
	WideInt b = -4960421970.0980107_w;
	EXPECT_EQ(a / b, 0.0000000000000000000032931112329297107888752246605312061825183945208207850087677501127471957136792877_w);
}

TEST(Neykandre_Operations, division6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	EXPECT_EQ(a / b, 3319323765.5395245840656973683126295987418757188557834347892578535610007934383535724787735435143135998326361737_w);
}

TEST(Neykandre_Operations, division7) {
	WideInt a = -0.054048247983605793_w;
	WideInt b = -0.093136229519831894_w;
	EXPECT_EQ(a / b, 0.5803138935541412418494672648371813381953484861885212727969493557944152855416685111260371293451450169_w);
}

TEST(Neykandre_Operations, division8) {
	WideInt a = -0.028053888450575875_w;
	WideInt b = -0.84258919911160014_w;
	EXPECT_EQ(a / b, 0.0332948588471760888206862830708550014456249301137410561701447613829001632020703699770854746272453276_w);
}

TEST(Neykandre_Operations, division9) {
	WideInt a = -0.076185685839950151_w;
	WideInt b = -2.218767054071788_w;
	EXPECT_EQ(a / b, 0.0343369465938920374278811868535737079491336500860750537931959233239516323989999899346534053604038692_w);
}

TEST(Neykandre_Operations, division10) {
	WideInt a = -0.036548777685871346_w;
	WideInt b = -7477123810.6218534_w;
	EXPECT_EQ(a / b, 0.0000000000048880797766048596393974954892070850273311056583487359721273092240036516830396001679268839_w);
}

TEST(Neykandre_Operations, division11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	EXPECT_EQ(a / b, 9417393941.8544572428386522942292058410987095833276885195775776496455604290641711113254829819261067249248948303_w);
}

TEST(Neykandre_Operations, division12) {
	WideInt a = -0.70746672480858823_w;
	WideInt b = -0.077436997911186017_w;
	EXPECT_EQ(a / b, 9.1360298551345628124867847322882207667464793802836828074141709371930256332374280096564844393032235680_w);
}

TEST(Neykandre_Operations, division13) {
	WideInt a = -0.84450599624978263_w;
	WideInt b = -0.98431726845236620_w;
	EXPECT_EQ(a / b, 0.8579611709724369026711501454619223027467429975140965502577556092684437945942337168525889882036676402_w);
}

TEST(Neykandre_Operations, division14) {
	WideInt a = -0.5564580868396729_w;
	WideInt b = -5.8041223417564320_w;
	EXPECT_EQ(a / b, 0.0958729079220750292786926183526943656672716395434047207925494140168142712924998193344718432187139169_w);
}

TEST(Neykandre_Operations, division15) {
	WideInt a = -0.72304893406176585_w;
	WideInt b = -9122071277.7496364_w;
	EXPECT_EQ(a / b, 0.0000000000792636794918947343646087366734306673003626716690648818436786931289266817823974196956604217_w);
}

TEST(Neykandre_Operations, division16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	EXPECT_EQ(a / b, 107607934201.3824129890516152378048904830114913281959713541769386286915772038435975418861636638635381889553931747_w);
}

TEST(Neykandre_Operations, division17) {
	WideInt a = -1.7276071299684814_w;
	WideInt b = -0.056807761225435595_w;
	EXPECT_EQ(a / b, 30.4114630237346467223709238254877001172692611293346756281780837239769919769489075157582209512723725145_w);
}

TEST(Neykandre_Operations, division18) {
	WideInt a = -2.2082616541263936_w;
	WideInt b = -0.35124835037958599_w;
	EXPECT_EQ(a / b, 6.2868954451742653550316628183096227719382929872475097392645307532024882740664484773383158353499534409_w);
}

TEST(Neykandre_Operations, division19) {
	WideInt a = -6.5054386703444965_w;
	WideInt b = -7.2677714610650719_w;
	EXPECT_EQ(a / b, 0.8951077651788382420924695551312662596058279872597600275306498966237276820435631547229838605889786201_w);
}

TEST(Neykandre_Operations, division20) {
	WideInt a = -8.8392300195993330_w;
	WideInt b = -7599447082.5141933_w;
	EXPECT_EQ(a / b, 0.0000000011631412027248397104642073849900340253237918312813479381710102781427134702097897034607414008_w);
}

TEST(Neykandre_Operations, division21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	EXPECT_EQ(a / b, 225007889602493153894.9033219193144505288168945816269673175047621283109198589063667382335436930962441904413720614398605293_w);
}

TEST(Neykandre_Operations, division22) {
	WideInt a = -1578196312.3744002_w;
	WideInt b = -0.058933514341845108_w;
	EXPECT_EQ(a / b, 26779266941.7275677833212165921963878710716932814087233025670349555578046538607398815226385150050009302543173729_w);
}

TEST(Neykandre_Operations, division23) {
	WideInt a = -5115149214.5814595_w;
	WideInt b = -0.16182939119499794_w;
	EXPECT_EQ(a / b, 31608283123.4155074092641817526134522897313948812554997801890815321221612379677973962617811581061253171155495591_w);
}

TEST(Neykandre_Operations, division24) {
	WideInt a = -7979956901.849012_w;
	WideInt b = -1.9532071400141017_w;
	EXPECT_EQ(a / b, 4085566112.4561517691113790852707624576639819620210685004797635023629826168968069244469924975768447405414054591_w);
}

TEST(Neykandre_Operations, division25) {
	WideInt a = -9395716874.4807998_w;
	WideInt b = -3746900017.2533545_w;
	EXPECT_EQ(a / b, 2.5075974355377331397626283096098982952746718627880144866804632389886144582217868874200195382558414981_w);
}

TEST(Neykandre_Operations, division26) {
	WideInt a = -0.00000000006246299304379105_w;
	WideInt b = 0.00000000057305116105123414_w;
	EXPECT_EQ(a / b, -0.1090007267923613743510388009071784585894757341703432962923773706649812665827902522834606081949354248_w);
}

TEST(Neykandre_Operations, division27) {
	WideInt a = -0.000000000039935092577388062_w;
	WideInt b = 0.55471041788772186_w;
	EXPECT_EQ(a / b, -0.0000000000719926853536600908135714826051435234157579301893835119785217887716256059080379626252620939_w);
}

TEST(Neykandre_Operations, division28) {
	WideInt a = -0.000000000028836977158565353_w;
	WideInt b = 2.7205066127291832_w;
	EXPECT_EQ(a / b, -0.0000000000105998555650031687552366740569849808744999695277319597339269105437278116799558854923350546_w);
}

TEST(Neykandre_Operations, division29) {
	WideInt a = -0.000000000099986960759988173_w;
	WideInt b = 29.989563349826540_w;
	EXPECT_EQ(a / b, -0.0000000000033340585720987664463582879084428319500890130042544430776354726650678843274482912808211720_w);
}

TEST(Neykandre_Operations, division30) {
	WideInt a = -0.00000000001743010855651358_w;
	WideInt b = 89005835203.288761_w;
	EXPECT_EQ(a / b, -0.0000000000000000000001958310768805587073662695866147369163505735094124027894590371395080837077301450_w);
}

TEST(Neykandre_Operations, division31) {
	WideInt a = -0.012449754168597717_w;
	WideInt b = 0.00000000083032906568545396_w;
	EXPECT_EQ(a / b, -14993759.3215771451981366355981315173017384172439090603386625382202956150562392011281276982391172852130763722_w);
}

TEST(Neykandre_Operations, division32) {
	WideInt a = -0.064878071931532019_w;
	WideInt b = 0.20274342531305570_w;
	EXPECT_EQ(a / b, -0.3200008672604496224682643154689814820669877400190990467725546934174814777046651143440615613721617214_w);
}

TEST(Neykandre_Operations, division33) {
	WideInt a = -0.04924193304139407_w;
	WideInt b = 3.0898028171608339_w;
	EXPECT_EQ(a / b, -0.0159369176466223907196712543722272959017185828119699664394078722903439304518059326127241633020876306_w);
}

TEST(Neykandre_Operations, division34) {
	WideInt a = -0.092926425556942918_w;
	WideInt b = 25.512328400378602_w;
	EXPECT_EQ(a / b, -0.0036424125661366092056746787361640090553683384635178746100271743772667371170409541605780701957762828_w);
}

TEST(Neykandre_Operations, division35) {
	WideInt a = -0.073163272106596821_w;
	WideInt b = 19228293161.597621_w;
	EXPECT_EQ(a / b, -0.0000000000038049800620222031682572924612163348231798592956056516673316209818794955566044999092036914_w);
}

TEST(Neykandre_Operations, division36) {
	WideInt a = -0.97392621947296940_w;
	WideInt b = 0.00000000078906502348106743_w;
	EXPECT_EQ(a / b, -1234278786.2733564308349239101227661440921452509631541492524760012398559312986626877261745999083229437364439430_w);
}

TEST(Neykandre_Operations, division37) {
	WideInt a = -0.37992236473519058_w;
	WideInt b = 0.25130029827334122_w;
	EXPECT_EQ(a / b, -1.5118261591633535318226115526544203883568275460368573189542308281350363590733140987621998554141778281_w);
}

TEST(Neykandre_Operations, division38) {
	WideInt a = -0.52005296206047665_w;
	WideInt b = 1.8973120242312175_w;
	EXPECT_EQ(a / b, -0.2740998609710492012335059292881980084867717451268889729131467038578439441760207639086152331372985371_w);
}

TEST(Neykandre_Operations, division39) {
	WideInt a = -0.54052922841955965_w;
	WideInt b = 44.14625525658643_w;
	EXPECT_EQ(a / b, -0.0122440561555652000905626236365204638461766815727734125124607938886402568269489438343080904435580221_w);
}

TEST(Neykandre_Operations, division40) {
	WideInt a = -0.21040721751214285_w;
	WideInt b = 85151738565.17881_w;
	EXPECT_EQ(a / b, -0.0000000000024709679574080345874325704008063688098889236483448159360836353049566050885613025820680065_w);
}

TEST(Neykandre_Operations, division41) {
	WideInt a = -3.1422168038107020_w;
	WideInt b = 0.00000000073610913266351282_w;
	EXPECT_EQ(a / b, -4268683357.3725802764020749441376034986669833007282997125497660636560549132859711546286995564044374664779225101_w);
}

TEST(Neykandre_Operations, division42) {
	WideInt a = -9.1036533881737187_w;
	WideInt b = 0.71885881230649902_w;
	EXPECT_EQ(a / b, -12.6640353186519806974109683657666864055100559413659176982116048180229963859004252844270313163245937090_w);
}

TEST(Neykandre_Operations, division43) {
	WideInt a = -5.3742803692226610_w;
	WideInt b = 8.448989659490081_w;
	EXPECT_EQ(a / b, -0.6360855659452911575348355819575006824089528818849673967500039158508527807532848843738476388376865422_w);
}

TEST(Neykandre_Operations, division44) {
	WideInt a = -5.6159903016331436_w;
	WideInt b = 18.605053053100014_w;
	EXPECT_EQ(a / b, -0.3018529582046741438140696561323898331488179048100591366837381490536786276779527647032191041283440431_w);
}

TEST(Neykandre_Operations, division45) {
	WideInt a = -4.4487230494146461_w;
	WideInt b = 66830610846.058204_w;
	EXPECT_EQ(a / b, -0.0000000000665671462986042751547175651378587553249956728519869071833460666742908394683998752325212474_w);
}

TEST(Neykandre_Operations, division46) {
	WideInt a = -4883744850.701199_w;
	WideInt b = 0.00000000043851226709198280_w;
	EXPECT_EQ(a / b, -11137076923954739630.3950055187972706961139000679620539619446038959481192546884517057759825096020608153608974419701276971_w);
}

TEST(Neykandre_Operations, division47) {
	WideInt a = -9737218074.4803015_w;
	WideInt b = 0.62569717471065427_w;
	EXPECT_EQ(a / b, -15562189615.1011943031065692273649973581668498615913658791931619669087322638518273320616472197262672950284092471_w);
}

TEST(Neykandre_Operations, division48) {
	WideInt a = -8621468532.7775069_w;
	WideInt b = 8.5911213617823143_w;
	EXPECT_EQ(a / b, -1003532387.6496719370029765609516306184331549403754138511731200273297124509103503903772620529271656625999002045_w);
}

TEST(Neykandre_Operations, division49) {
	WideInt a = -9907496730.6537755_w;
	WideInt b = 42.425549813535327_w;
	EXPECT_EQ(a / b, -233526654.9095591417081166875329757560403931373193672478423947464639136543029275012305183895000939084731168862_w);
}

TEST(Neykandre_Operations, division50) {
	WideInt a = -7301453994.4160508_w;
	WideInt b = 43726041995.092633_w;
	EXPECT_EQ(a / b, -0.1669818181859563658692401688976705350994918488350623643398177564231219108257012263347089350089011391_w);
}

TEST(Neykandre_Operations, division51) {
	WideInt a = 0.00000000060149328886258666_w;
	WideInt b = -0.000000000091616117794041825_w;
	EXPECT_EQ(a / b, -6.5653653892514561005345643935569875042836775170944364146634266540045125346298327483924242829644658066_w);
}

TEST(Neykandre_Operations, division52) {
	WideInt a = 0.000000000554567818758720_w;
	WideInt b = -0.072305655087266688_w;
	EXPECT_EQ(a / b, -0.0000000076697710309021401495474258138892656500543337580939038984509830357237532822045850788970312453_w);
}

TEST(Neykandre_Operations, division53) {
	WideInt a = 0.00000000030368652435407758_w;
	WideInt b = -0.86561851321050841_w;
	EXPECT_EQ(a / b, -0.0000000003508318268606906862101281238934142374828279110478399554997708061186908698191579847979199413_w);
}

TEST(Neykandre_Operations, division54) {
	WideInt a = 0.00000000018118892716242594_w;
	WideInt b = -6.1116484072297946_w;
	EXPECT_EQ(a / b, -0.0000000000296464906175047475284431465076587836715082738020664454798313567299978919276160557486156843_w);
}

TEST(Neykandre_Operations, division55) {
	WideInt a = 0.00000000011938532324160647_w;
	WideInt b = -7452548747.5341052_w;
	EXPECT_EQ(a / b, -0.0000000000000000000160193951473458812588090003970137824690102458865047379231505762937893973118738132_w);
}

TEST(Neykandre_Operations, division56) {
	WideInt a = 0.26238345170321186_w;
	WideInt b = -0.000000000052256348393874358_w;
	EXPECT_EQ(a / b, -5021082792.1908377286714788438209091358519188355832038925980439968718148592465725698894202353060430825863175001_w);
}

TEST(Neykandre_Operations, division57) {
	WideInt a = 0.12353051807411640_w;
	WideInt b = -0.078908068479735254_w;
	EXPECT_EQ(a / b, -1.5654991999435500521731723308570920766999503128496550552687624825417876429587015042764197741575636275_w);
}

TEST(Neykandre_Operations, division58) {
	WideInt a = 0.56414379163574215_w;
	WideInt b = -0.25729933484151365_w;
	EXPECT_EQ(a / b, -2.1925582978410446019498652771498108643273871153906899485585505843951460014894855732649411312486217768_w);
}

TEST(Neykandre_Operations, division59) {
	WideInt a = 0.69704251860282006_w;
	WideInt b = -9.2358828698542118_w;
	EXPECT_EQ(a / b, -0.0754711302021766393648668011242387133235331662868688933420030801664251306655991426875363243897395900_w);
}

TEST(Neykandre_Operations, division60) {
	WideInt a = 0.47254637714370096_w;
	WideInt b = -5463212390.8087574_w;
	EXPECT_EQ(a / b, -0.0000000000864960655636795820973910492156113059798339930117827631043596317416651223343073147464112566_w);
}

TEST(Neykandre_Operations, division61) {
	WideInt a = 2.118916307748052_w;
	WideInt b = -0.000000000044313630282512266_w;
	EXPECT_EQ(a / b, -47816355695.5127576007355935026641738153129684572910813658048862563524285833866127939480034814832016756535552080_w);
}

TEST(Neykandre_Operations, division62) {
	WideInt a = 9.9644956694724766_w;
	WideInt b = -0.057500765734933310_w;
	EXPECT_EQ(a / b, -173.2932690915239257398684749986241522979547542666607342800813851521683327296962666458957104186225631474_w);
}

TEST(Neykandre_Operations, division63) {
	WideInt a = 5.0375664381735684_w;
	WideInt b = -0.56014411503038660_w;
	EXPECT_EQ(a / b, -8.9933399334210471474454534057711808425233449720534511474287301962701904794947568626616466748330393637_w);
}

TEST(Neykandre_Operations, division64) {
	WideInt a = 4.4800514426039610_w;
	WideInt b = -4.2754356811322756_w;
	EXPECT_EQ(a / b, -1.0478584585834528178640137583782649966854360381627820205279320422468672081872374428351757620339959512_w);
}

TEST(Neykandre_Operations, division65) {
	WideInt a = 8.834308128245895_w;
	WideInt b = -1547424031.3941011_w;
	EXPECT_EQ(a / b, -0.0000000057090415742651442871616971449054995820508123016633148151109175851479915124077796373380932691_w);
}

TEST(Neykandre_Operations, division66) {
	WideInt a = 56.428214305873043_w;
	WideInt b = -0.000000000025697975037370035_w;
	EXPECT_EQ(a / b, -2195823376114.8513289770825061636145473243712253583829447792809281741150592332988938787802217991377668496626167239_w);
}

TEST(Neykandre_Operations, division67) {
	WideInt a = 67.871803677674262_w;
	WideInt b = -0.078656615984642372_w;
	EXPECT_EQ(a / b, -862.8874103982068826197530945179974876805816909378984271715327181922686792910808018057085327961960621737_w);
}

TEST(Neykandre_Operations, division68) {
	WideInt a = 68.32955342203028_w;
	WideInt b = -0.17460369836023753_w;
	EXPECT_EQ(a / b, -391.3408138758586420155371289511215452226933006836640161777648229549064834688506254557988728672166488795_w);
}

TEST(Neykandre_Operations, division69) {
	WideInt a = 89.756637685716118_w;
	WideInt b = -9.6594869411134509_w;
	EXPECT_EQ(a / b, -9.2920709177303213242699769895027574081547300286953386066995551424769185822833616021566738583998965012_w);
}

TEST(Neykandre_Operations, division70) {
	WideInt a = 55.6415735162873_w;
	WideInt b = -3237650232.3469300_w;
	EXPECT_EQ(a / b, -0.0000000171857889281491214048958532809789570936055239754247288214194901427465053874222676953887811648_w);
}

TEST(Neykandre_Operations, division71) {
	WideInt a = 14413214881.926854_w;
	WideInt b = -0.000000000035234173236094633_w;
	EXPECT_EQ(a / b, -409069194992821671635.7818246707132997359579760995101184683229857682416031045421630784822840870871282109395451402898403466_w);
}

TEST(Neykandre_Operations, division72) {
	WideInt a = 15202162416.403425_w;
	WideInt b = -0.021894708372036583_w;
	EXPECT_EQ(a / b, -694330436290.2260221823974272494823140875645086442686247248576378938074550497114445819171930381379789645862198066_w);
}

TEST(Neykandre_Operations, division73) {
	WideInt a = 87106286439.754511_w;
	WideInt b = -0.70213878517481316_w;
	EXPECT_EQ(a / b, -124058502790.2531436179914641294243264207498301315419182053045846286203614269555671655594244436964322448249096488_w);
}

TEST(Neykandre_Operations, division74) {
	WideInt a = 18699641199.498609_w;
	WideInt b = -2.3227202091149524_w;
	EXPECT_EQ(a / b, -8050750635.4473518479012819539468314310073332877305983869258517145776229492327920997955257336926476139555856830_w);
}

TEST(Neykandre_Operations, division75) {
	WideInt a = 83798111697.958333_w;
	WideInt b = -4401220371.1510154_w;
	EXPECT_EQ(a / b, -19.0397445779437973878868030577761131792027500723838272484263495595249291939461758452822858381372236657_w);
}

TEST(Neykandre_Operations, division76) {
	WideInt a = 0.00000000018339586035765963_w;
	WideInt b = 0.00000000083420126057101881_w;
	EXPECT_EQ(a / b, 0.2198460599689377050969073754113402032171388192985841567768879180455901319715455681448684167860683032_w);
}

TEST(Neykandre_Operations, division77) {
	WideInt a = 0.00000000013221898130390175_w;
	WideInt b = 0.2866132087981388_w;
	EXPECT_EQ(a / b, 0.0000000004613150310076021504550817098364902646397072669755736085436650594458627386493313623205705358_w);
}

TEST(Neykandre_Operations, division78) {
	WideInt a = 0.00000000029683195188344298_w;
	WideInt b = 4.001811028897473_w;
	EXPECT_EQ(a / b, 0.0000000000741744049731459369264189544706397369831955851490747874988125009582731971839315144452506696_w);
}

TEST(Neykandre_Operations, division79) {
	WideInt a = 0.00000000072767021393853781_w;
	WideInt b = 93.951351224132772_w;
	EXPECT_EQ(a / b, 0.0000000000077451809309542439501874187874133274321108188523798913698030393434913745723381674310519708_w);
}

TEST(Neykandre_Operations, division80) {
	WideInt a = 0.00000000077091278383477930_w;
	WideInt b = 17654463719.003821_w;
	EXPECT_EQ(a / b, 0.0000000000000000000436667347196134023450387627823496623136031630335981049753261339289333798450373391_w);
}

TEST(Neykandre_Operations, division81) {
	WideInt a = 0.69227143509413636_w;
	WideInt b = 0.00000000026920200923196074_w;
	EXPECT_EQ(a / b, 2571568604.0724659065920410522721592297053446717766443859623367577295114225832609242493954954029569531691849556_w);
}

TEST(Neykandre_Operations, division82) {
	WideInt a = 0.30788883671311594_w;
	WideInt b = 0.5981811989774883_w;
	EXPECT_EQ(a / b, 0.5147083145364836168385676030536439215463585906996638332764678254549586081964010234633518144389221050_w);
}

TEST(Neykandre_Operations, division83) {
	WideInt a = 0.74100812420163818_w;
	WideInt b = 3.2957413152819364_w;
	EXPECT_EQ(a / b, 0.2248380723225081587771558493035853688075044306157080498437595030045705766373542542664457377254542345_w);
}

TEST(Neykandre_Operations, division84) {
	WideInt a = 0.51031168064022015_w;
	WideInt b = 65.477666792066314_w;
	EXPECT_EQ(a / b, 0.0077936753956244012557700020780411327165146611799728077085100678159426781207542203108729901646600622_w);
}

TEST(Neykandre_Operations, division85) {
	WideInt a = 0.2383687027234400_w;
	WideInt b = 67298048453.62498_w;
	EXPECT_EQ(a / b, 0.0000000000035419853651135165107625168426234816278067975917484857596322107627334686646371308076179985_w);
}

TEST(Neykandre_Operations, division86) {
	WideInt a = 9.9067247428782178_w;
	WideInt b = 0.00000000074446254230843112_w;
	EXPECT_EQ(a / b, 13307217193.4392071763152439155186559353625552445343576196562945417996263127270336736218633680659976373941351568_w);
}

TEST(Neykandre_Operations, division87) {
	WideInt a = 4.515753642402623_w;
	WideInt b = 0.96070079778961870_w;
	EXPECT_EQ(a / b, 4.7004787055371175206343650629962675919706446118166478042958612455632714832628048747615978676419108683_w);
}

TEST(Neykandre_Operations, division88) {
	WideInt a = 5.0021667484302338_w;
	WideInt b = 3.1653046628631903_w;
	EXPECT_EQ(a / b, 1.5803113068760660135546397887117402585084798111405264025980402364135768201506833974836781613159752780_w);
}

TEST(Neykandre_Operations, division89) {
	WideInt a = 3.6554992433548120_w;
	WideInt b = 70.564418664810604_w;
	EXPECT_EQ(a / b, 0.0518037179717850286206844385016467016892196468676616347525626943103449765244601423398380752906695255_w);
}

TEST(Neykandre_Operations, division90) {
	WideInt a = 9.2813197325914498_w;
	WideInt b = 17970712741.474738_w;
	EXPECT_EQ(a / b, 0.0000000005164692055408033324759030550877945690397773289899806645843682822494539461528338239053317677_w);
}

TEST(Neykandre_Operations, division91) {
	WideInt a = 30.744971484653110_w;
	WideInt b = 0.00000000071306672230536596_w;
	EXPECT_EQ(a / b, 43116542285.4872558098589686560310951823399701855577267535362372926564977244024965480719996567183900579033309176_w);
}

TEST(Neykandre_Operations, division92) {
	WideInt a = 87.262755701996923_w;
	WideInt b = 0.79338318643397690_w;
	EXPECT_EQ(a / b, 109.9881585520071796869305412551595379924824304211940427249544900737998470220814222912998219329931782887_w);
}

TEST(Neykandre_Operations, division93) {
	WideInt a = 39.68313279508543_w;
	WideInt b = 1.7736077621941626_w;
	EXPECT_EQ(a / b, 22.3742439793975081937681739665146253151147448636343427543818510653981105007870014216141515498034340122_w);
}

TEST(Neykandre_Operations, division94) {
	WideInt a = 39.719570896756916_w;
	WideInt b = 85.938929008539899_w;
	EXPECT_EQ(a / b, 0.4621836850306793328828916007993621482206873673021024054496204271966571978503908792339574627561486820_w);
}

TEST(Neykandre_Operations, division95) {
	WideInt a = 72.3942381772590_w;
	WideInt b = 42297970442.060197_w;
	EXPECT_EQ(a / b, 0.0000000017115298304069861035626800265549213263229002991443184660848652418020688106432726336389004684_w);
}

TEST(Neykandre_Operations, division96) {
	WideInt a = 77518679647.436789_w;
	WideInt b = 0.00000000023341605159645392_w;
	EXPECT_EQ(a / b, 332105179216451369936.1876870763729277022342730411704852561469420141503136802162330139215720482438621123896887756261867449_w);
}

TEST(Neykandre_Operations, division97) {
	WideInt a = 36047952521.67809_w;
	WideInt b = 0.41677264057449541_w;
	EXPECT_EQ(a / b, 86493087626.8370403624727561141601458348262981297468892803731733605339563970393231685284601459772963785917263337_w);
}

TEST(Neykandre_Operations, division98) {
	WideInt a = 17249351669.704325_w;
	WideInt b = 9.2613110799851731_w;
	EXPECT_EQ(a / b, 1862517252.7658946056107462748922078075735254620064130169216411727701727822217311887146677494135045841969255060_w);
}

TEST(Neykandre_Operations, division99) {
	WideInt a = 49659677030.215690_w;
	WideInt b = 13.683296265531172_w;
	EXPECT_EQ(a / b, 3629218871.4287076465361813535193585518765653415663013881538246850969251183108616329485418040609425592126021996_w);
}

TEST(Neykandre_Operations, division100) {
	WideInt a = 91346078572.45385_w;
	WideInt b = 79789420920.669622_w;
	EXPECT_EQ(a / b, 1.1448394726824048280437559379925336104480849973150116255778928052565853897408944220490392649827828607_w);
}


TEST(Neykandre_Operations, plusEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	a += b;
	EXPECT_EQ(a, -0.000000000059417627530159525_w);
}

TEST(Neykandre_Operations, plusEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	a += b;
	EXPECT_EQ(a, -0.095819307632862305031116327_w);
}

TEST(Neykandre_Operations, plusEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	a += b;
	EXPECT_EQ(a, -0.690340744748643750021539904_w);
}

TEST(Neykandre_Operations, plusEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	a += b;
	EXPECT_EQ(a, -9.947871345286596719180558280_w);
}

TEST(Neykandre_Operations, plusEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	a += b;
	EXPECT_EQ(a, -6840515649.060211000030401225757660793_w);
}

TEST(Neykandre_Operations, minusEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	a -= b;
	EXPECT_EQ(a, 0.000000000007321549692449341_w);
}

TEST(Neykandre_Operations, minusEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	a -= b;
	EXPECT_EQ(a, -0.095819307575128070968883673_w);
}

TEST(Neykandre_Operations, minusEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	a -= b;
	EXPECT_EQ(a, -0.690340744602034029978460096_w);
}

TEST(Neykandre_Operations, minusEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	a -= b;
	EXPECT_EQ(a, -9.947871345101705680819441720_w);
}

TEST(Neykandre_Operations, minusEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	a -= b;
	EXPECT_EQ(a, -6840515649.060210999969598774242339207_w);
}

TEST(Neykandre_Operations, multiplyEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	a *= b;
	EXPECT_EQ(a, 0.000000000000000000000869212342853441513794741024222836_w);
}

TEST(Neykandre_Operations, multiplyEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	a *= b;
	EXPECT_EQ(a, 0.000000000002766027166445063667752496776234476_w);
}

TEST(Neykandre_Operations, multiplyEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	a *= b;
	EXPECT_EQ(a, 0.00000000005060533165559133615160071085806656_w);
}

TEST(Neykandre_Operations, multiplyEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	a *= b;
	EXPECT_EQ(a, 0.0000000009196361312478720031980150067319360_w);
}

TEST(Neykandre_Operations, multiplyEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	a *= b;
	EXPECT_EQ(a, 0.207960060545891024354344171007323_w);
}

TEST(Neykandre_Operations, divideEqual1) {
	WideInt a = -0.000000000026048038918855092_w;
	WideInt b = -0.000000000033369588611304433_w;
	a /= b;
	EXPECT_EQ(a, 0.7805921500042388997253364892266371918976027786235700409095250353710088944826188180790807204163686721_w);
}

TEST(Neykandre_Operations, divideEqual6) {
	WideInt a = -0.095819307603995188_w;
	WideInt b = -0.000000000028867117031116327_w;
	a /= b;
	EXPECT_EQ(a, 3319323765.5395245840656973683126295987418757188557834347892578535610007934383535724787735435143135998326361737_w);
}

TEST(Neykandre_Operations, divideEqual11) {
	WideInt a = -0.69034074467533889_w;
	WideInt b = -0.000000000073304860021539904_w;
	a /= b;
	EXPECT_EQ(a, 9417393941.8544572428386522942292058410987095833276885195775776496455604290641711113254829819261067249248948303_w);
}

TEST(Neykandre_Operations, divideEqual16) {
	WideInt a = -9.9478713451941512_w;
	WideInt b = -0.000000000092445519180558280_w;
	a /= b;
	EXPECT_EQ(a, 107607934201.3824129890516152378048904830114913281959713541769386286915772038435975418861636638635381889553931747_w);
}

TEST(Neykandre_Operations, divideEqual21) {
	WideInt a = -6840515649.060211_w;
	WideInt b = -0.000000000030401225757660793_w;
	a /= b;
	EXPECT_EQ(a, 225007889602493153894.9033219193144505288168945816269673175047621283109198589063667382335436930962441904413720614398605293_w);
}

TEST(Neykandre_Methods, toString1) {
	WideInt a = -0.000000000026048038918855092_w;
	EXPECT_EQ(a.toString(), "-0.000000000026048038918855092");
}

TEST(Neykandre_Methods, toString6) {
	WideInt a = -0.095819307603995188_w;
	EXPECT_EQ(a.toString(), "-0.095819307603995188");
}

TEST(Neykandre_Methods, toString11) {
	WideInt a = -0.69034074467533889_w;
	EXPECT_EQ(a.toString(), "-0.69034074467533889");
}

TEST(Neykandre_Methods, toString16) {
	WideInt a = -9.9478713451941512_w;
	EXPECT_EQ(a.toString(), "-9.9478713451941512");
}

TEST(Neykandre_Methods, toString21) {
	WideInt a = -6840515649.060211_w;
	EXPECT_EQ(a.toString(), "-6840515649.060211");
}

TEST(Neykandre_Methods, setPrecision1_0) {
	WideInt a = -0.000000000026048038918855092_w;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.0_w);
}

TEST(Neykandre_Methods, setPrecision1_1) {
	WideInt a = -0.000000000026048038918855092_w;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.0000_w);
}

TEST(Neykandre_Methods, setPrecision1_2) {
	WideInt a = -0.000000000026048038918855092_w;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.0000000_w);
}

TEST(Neykandre_Methods, setPrecision1_3) {
	WideInt a = -0.000000000026048038918855092_w;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.0000000000_w);
}

TEST(Neykandre_Methods, setPrecision6_0) {
	WideInt a = -0.095819307603995188_w;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.0_w);
}

TEST(Neykandre_Methods, setPrecision6_1) {
	WideInt a = -0.095819307603995188_w;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.0958_w);
}

TEST(Neykandre_Methods, setPrecision6_2) {
	WideInt a = -0.095819307603995188_w;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.0958193_w);
}

TEST(Neykandre_Methods, setPrecision6_3) {
	WideInt a = -0.095819307603995188_w;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.0958193076_w);
}

TEST(Neykandre_Methods, setPrecision11_0) {
	WideInt a = -0.69034074467533889_w;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.6_w);
}

TEST(Neykandre_Methods, setPrecision11_1) {
	WideInt a = -0.69034074467533889_w;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.6903_w);
}

TEST(Neykandre_Methods, setPrecision11_2) {
	WideInt a = -0.69034074467533889_w;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.6903407_w);
}

TEST(Neykandre_Methods, setPrecision11_3) {
	WideInt a = -0.69034074467533889_w;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.6903407446_w);
}

TEST(Neykandre_Methods, setPrecision16_0) {
	WideInt a = -9.9478713451941512_w;
	a.setPrecision(1);
	EXPECT_EQ(a, -9.9_w);
}

TEST(Neykandre_Methods, setPrecision16_1) {
	WideInt a = -9.9478713451941512_w;
	a.setPrecision(4);
	EXPECT_EQ(a, -9.9478_w);
}

TEST(Neykandre_Methods, setPrecision16_2) {
	WideInt a = -9.9478713451941512_w;
	a.setPrecision(7);
	EXPECT_EQ(a, -9.9478713_w);
}

TEST(Neykandre_Methods, setPrecision16_3) {
	WideInt a = -9.9478713451941512_w;
	a.setPrecision(10);
	EXPECT_EQ(a, -9.9478713451_w);
}

TEST(Neykandre_Methods, setPrecision21_0) {
	WideInt a = -6840515649.060211_w;
	a.setPrecision(1);
	EXPECT_EQ(a, -6840515649.0_w);
}

TEST(Neykandre_Methods, setPrecision21_1) {
	WideInt a = -6840515649.060211_w;
	a.setPrecision(4);
	EXPECT_EQ(a, -6840515649.0602_w);
}

TEST(Neykandre_Methods, setPrecision21_2) {
	WideInt a = -6840515649.060211_w;
	a.setPrecision(7);
	EXPECT_EQ(a, -6840515649.060211_w);
}

TEST(Neykandre_Methods, setPrecision21_3) {
	WideInt a = -6840515649.060211_w;
	a.setPrecision(10);
	EXPECT_EQ(a, -6840515649.060211_w);
}

TEST(Neykandre_Methods, getInverse1_0) {
	WideInt a = -0.000000000026048038918855092_w;
	EXPECT_EQ(a.getInverse(8), -38390606030.46556381_w);
}

TEST(Neykandre_Methods, getInverse1_1) {
	WideInt a = -0.000000000026048038918855092_w;
	EXPECT_EQ(a.getInverse(32), -38390606030.46556381485659526710119929343480_w);
}

TEST(Neykandre_Methods, getInverse1_2) {
	WideInt a = -0.000000000026048038918855092_w;
	EXPECT_EQ(a.getInverse(56), -38390606030.46556381485659526710119929343480495232029757994353946019_w);
}

TEST(Neykandre_Methods, getInverse1_3) {
	WideInt a = -0.000000000026048038918855092_w;
	EXPECT_EQ(a.getInverse(80), -38390606030.46556381485659526710119929343480495232029757994353946019280586502941331513179018_w);
}

TEST(Neykandre_Methods, getInverse6_0) {
	WideInt a = -0.095819307603995188_w;
	EXPECT_EQ(a.getInverse(8), -10.43631001_w);
}

TEST(Neykandre_Methods, getInverse6_1) {
	WideInt a = -0.095819307603995188_w;
	EXPECT_EQ(a.getInverse(32), -10.43631001940474238457338222387719_w);
}

TEST(Neykandre_Methods, getInverse6_2) {
	WideInt a = -0.095819307603995188_w;
	EXPECT_EQ(a.getInverse(56), -10.43631001940474238457338222387719527019158418530331589624_w);
}

TEST(Neykandre_Methods, getInverse6_3) {
	WideInt a = -0.095819307603995188_w;
	EXPECT_EQ(a.getInverse(80), -10.43631001940474238457338222387719527019158418530331589624100368651723274364039121_w);
}

TEST(Neykandre_Methods, getInverse11_0) {
	WideInt a = -0.69034074467533889_w;
	EXPECT_EQ(a.getInverse(8), -1.44856001_w);
}

TEST(Neykandre_Methods, getInverse11_1) {
	WideInt a = -0.69034074467533889_w;
	EXPECT_EQ(a.getInverse(32), -1.44856001577929621208222878867364_w);
}

TEST(Neykandre_Methods, getInverse11_2) {
	WideInt a = -0.69034074467533889_w;
	EXPECT_EQ(a.getInverse(56), -1.44856001577929621208222878867364522979842525165244566066_w);
}

TEST(Neykandre_Methods, getInverse11_3) {
	WideInt a = -0.69034074467533889_w;
	EXPECT_EQ(a.getInverse(80), -1.44856001577929621208222878867364522979842525165244566066213047066380329842842003_w);
}

TEST(Neykandre_Methods, getInverse16_0) {
	WideInt a = -9.9478713451941512_w;
	EXPECT_EQ(a.getInverse(8), -0.10052401_w);
}

TEST(Neykandre_Methods, getInverse16_1) {
	WideInt a = -9.9478713451941512_w;
	EXPECT_EQ(a.getInverse(32), -0.10052401818436295239810262258235_w);
}

TEST(Neykandre_Methods, getInverse16_2) {
	WideInt a = -9.9478713451941512_w;
	EXPECT_EQ(a.getInverse(56), -0.10052401818436295239810262258235563239509191251444899251_w);
}

TEST(Neykandre_Methods, getInverse16_3) {
	WideInt a = -9.9478713451941512_w;
	EXPECT_EQ(a.getInverse(80), -0.10052401818436295239810262258235563239509191251444899251207844312596394518137612_w);
}

TEST(Neykandre_Methods, getInverse21_0) {
	WideInt a = -6840515649.060211_w;
	EXPECT_EQ(a.getInverse(8), -0.00000000_w);
}

TEST(Neykandre_Methods, getInverse21_1) {
	WideInt a = -6840515649.060211_w;
	EXPECT_EQ(a.getInverse(32), -0.00000000014618780970662433840004_w);
}

TEST(Neykandre_Methods, getInverse21_2) {
	WideInt a = -6840515649.060211_w;
	EXPECT_EQ(a.getInverse(56), -0.00000000014618780970662433840004134488905620082485174022_w);
}

TEST(Neykandre_Methods, getInverse21_3) {
	WideInt a = -6840515649.060211_w;
	EXPECT_EQ(a.getInverse(80), -0.00000000014618780970662433840004134488905620082485174022180427174248321685172908_w);
}
*/