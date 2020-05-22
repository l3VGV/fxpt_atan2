# fxpt_atan2
also check out https://github.com/rad1o/f1rmware/blob/master/portalib/fxpt_atan2.c


    for(int32_t i=0; i<360; i += 5)
    {
        int16_t cs= 32767.0 * cos(i*PI / 180);
        int16_t sn= 32767.0 * sin(i*PI / 180);

        int16_t at2 = 32767.0 * atan2(sn, cs) / (PI);

        int16_t fxpt_at2 = fxpt_atan2(sn, cs);
        
        float dif = 100.0*abs(at2-fxpt_at2)/at2;

        int16_t iang = 2*32767.0 *i / 360.0;

        printf(" angle = %i(%i), fxpt_atan2 = %i, atan2 = %i, dif=%f%, sn= %i cs=%i\n", i, iang, fxpt_at2, at2, dif, sn, cs);
    }


test results

 angle = 0(0), fxpt_atan2 = 0, atan2 = 0, dif=-nan%, sn= 0 cs=32767

 angle = 1(182), fxpt_atan2 = 191, atan2 = 181, dif=5.524862%, sn= 571 cs=32762

 angle = 2(364), fxpt_atan2 = 382, atan2 = 363, dif=5.234160%, sn= 1143 cs=32747

 angle = 3(546), fxpt_atan2 = 570, atan2 = 545, dif=4.587156%, sn= 1714 cs=32722

 angle = 4(728), fxpt_atan2 = 758, atan2 = 727, dif=4.264099%, sn= 2285 cs=32687

 angle = 5(910), fxpt_atan2 = 944, atan2 = 909, dif=3.850385%, sn= 2855 cs=32642

 angle = 6(1092), fxpt_atan2 = 1129, atan2 = 1092, dif=3.388278%, sn= 3425 cs=32587

 angle = 7(1274), fxpt_atan2 = 1312, atan2 = 1274, dif=2.982732%, sn= 3993 cs=32522

 angle = 8(1456), fxpt_atan2 = 1495, atan2 = 1456, dif=2.678571%, sn= 4560 cs=32448

 angle = 9(1638), fxpt_atan2 = 1677, atan2 = 1638, dif=2.380952%, sn= 5125 cs=32363

 angle = 10(1820), fxpt_atan2 = 1857, atan2 = 1820, dif=2.032967%, sn= 5689 cs=32269

 angle = 11(2002), fxpt_atan2 = 2038, atan2 = 2002, dif=1.798202%, sn= 6252 cs=32164

 angle = 12(2184), fxpt_atan2 = 2217, atan2 = 2184, dif=1.510989%, sn= 6812 cs=32050

 angle = 13(2366), fxpt_atan2 = 2397, atan2 = 2366, dif=1.310228%, sn= 7370 cs=31927

 angle = 14(2548), fxpt_atan2 = 2575, atan2 = 2548, dif=1.059655%, sn= 7927 cs=31793

 angle = 15(2730), fxpt_atan2 = 2753, atan2 = 2730, dif=0.842491%, sn= 8480 cs=31650

 angle = 16(2912), fxpt_atan2 = 2931, atan2 = 2912, dif=0.652473%, sn= 9031 cs=31497

 angle = 17(3094), fxpt_atan2 = 3109, atan2 = 3094, dif=0.484809%, sn= 9580 cs=31335

 angle = 18(3276), fxpt_atan2 = 3286, atan2 = 3276, dif=0.305250%, sn= 10125 cs=31163

 angle = 19(3458), fxpt_atan2 = 3463, atan2 = 3458, dif=0.144592%, sn= 10667 cs=30981

 angle = 20(3640), fxpt_atan2 = 3640, atan2 = 3640, dif=0.000000%, sn= 11206 cs=30790

 angle = 21(3822), fxpt_atan2 = 3818, atan2 = 3822, dif=0.104657%, sn= 11742 cs=30590

 angle = 22(4004), fxpt_atan2 = 3995, atan2 = 4004, dif=0.224775%, sn= 12274 cs=30381

 angle = 23(4186), fxpt_atan2 = 4173, atan2 = 4186, dif=0.310559%, sn= 12803 cs=30162

 angle = 24(4368), fxpt_atan2 = 4350, atan2 = 4368, dif=0.412088%, sn= 13327 cs=29934

 angle = 25(4550), fxpt_atan2 = 4528, atan2 = 4550, dif=0.483516%, sn= 13847 cs=29696

 angle = 26(4733), fxpt_atan2 = 4707, atan2 = 4733, dif=0.549334%, sn= 14364 cs=29450

 angle = 27(4915), fxpt_atan2 = 4885, atan2 = 4914, dif=0.590151%, sn= 14875 cs=29195

 angle = 28(5097), fxpt_atan2 = 5065, atan2 = 5097, dif=0.627820%, sn= 15383 cs=28931

 angle = 29(5279), fxpt_atan2 = 5244, atan2 = 5279, dif=0.663004%, sn= 15885 cs=28658

 angle = 30(5461), fxpt_atan2 = 5424, atan2 = 5461, dif=0.677532%, sn= 16383 cs=28377

 angle = 31(5643), fxpt_atan2 = 5605, atan2 = 5643, dif=0.673401%, sn= 16876 cs=28086

 angle = 32(5825), fxpt_atan2 = 5786, atan2 = 5825, dif=0.669528%, sn= 17363 cs=27787

 angle = 33(6007), fxpt_atan2 = 5968, atan2 = 6007, dif=0.649243%, sn= 17846 cs=27480

 angle = 34(6189), fxpt_atan2 = 6151, atan2 = 6189, dif=0.613993%, sn= 18323 cs=27165

 angle = 35(6371), fxpt_atan2 = 6334, atan2 = 6371, dif=0.580757%, sn= 18794 cs=26841

 angle = 36(6553), fxpt_atan2 = 6517, atan2 = 6553, dif=0.549367%, sn= 19259 cs=26509

 angle = 37(6735), fxpt_atan2 = 6702, atan2 = 6735, dif=0.489978%, sn= 19719 cs=26168

 angle = 38(6917), fxpt_atan2 = 6887, atan2 = 6917, dif=0.433714%, sn= 20173 cs=25820

 angle = 39(7099), fxpt_atan2 = 7072, atan2 = 7099, dif=0.380335%, sn= 20620 cs=25464

 angle = 40(7281), fxpt_atan2 = 7258, atan2 = 7281, dif=0.315891%, sn= 21062 cs=25100

 angle = 41(7463), fxpt_atan2 = 7445, atan2 = 7463, dif=0.241190%, sn= 21497 cs=24729

 angle = 42(7645), fxpt_atan2 = 7632, atan2 = 7645, dif=0.170046%, sn= 21925 cs=24350

 angle = 43(7827), fxpt_atan2 = 7818, atan2 = 7827, dif=0.114987%, sn= 22347 cs=23964

 angle = 44(8009), fxpt_atan2 = 8005, atan2 = 8009, dif=0.049944%, sn= 22761 cs=23570

 angle = 45(8191), fxpt_atan2 = 8192, atan2 = 8191, dif=0.012209%, sn= 23169 cs=23169

 angle = 46(8373), fxpt_atan2 = 8379, atan2 = 8373, dif=0.071659%, sn= 23570 cs=22761

 angle = 47(8555), fxpt_atan2 = 8566, atan2 = 8555, dif=0.128580%, sn= 23964 cs=22347

 angle = 48(8737), fxpt_atan2 = 8752, atan2 = 8737, dif=0.171684%, sn= 24350 cs=21925

 angle = 49(8919), fxpt_atan2 = 8939, atan2 = 8919, dif=0.224240%, sn= 24729 cs=21497

 angle = 50(9101), fxpt_atan2 = 9126, atan2 = 9101, dif=0.274695%, sn= 25100 cs=21062

 angle = 51(9283), fxpt_atan2 = 9312, atan2 = 9284, dif=0.301594%, sn= 25464 cs=20620

 angle = 52(9466), fxpt_atan2 = 9497, atan2 = 9465, dif=0.338088%, sn= 25820 cs=20173

 angle = 53(9648), fxpt_atan2 = 9682, atan2 = 9648, dif=0.352405%, sn= 26168 cs=19719

 angle = 54(9830), fxpt_atan2 = 9867, atan2 = 9830, dif=0.376399%, sn= 26509 cs=19259

 angle = 55(10012), fxpt_atan2 = 10050, atan2 = 10012, dif=0.379545%, sn= 26841 cs=18794

 angle = 56(10194), fxpt_atan2 = 10233, atan2 = 10194, dif=0.382578%, sn= 27165 cs=18323

 angle = 57(10376), fxpt_atan2 = 10416, atan2 = 10376, dif=0.385505%, sn= 27480 cs=17846

 angle = 58(10558), fxpt_atan2 = 10598, atan2 = 10558, dif=0.378860%, sn= 27787 cs=17363

 angle = 59(10740), fxpt_atan2 = 10779, atan2 = 10740, dif=0.363128%, sn= 28086 cs=16876

 angle = 60(10922), fxpt_atan2 = 10960, atan2 = 10922, dif=0.347922%, sn= 28377 cs=16383

 angle = 61(11104), fxpt_atan2 = 11140, atan2 = 11104, dif=0.324207%, sn= 28658 cs=15885

 angle = 62(11286), fxpt_atan2 = 11319, atan2 = 11286, dif=0.292398%, sn= 28931 cs=15383

 angle = 63(11468), fxpt_atan2 = 11499, atan2 = 11468, dif=0.270317%, sn= 29195 cs=14875

 angle = 64(11650), fxpt_atan2 = 11677, atan2 = 11650, dif=0.231760%, sn= 29450 cs=14364

 angle = 65(11832), fxpt_atan2 = 11856, atan2 = 11832, dif=0.202840%, sn= 29696 cs=13847

 angle = 66(12014), fxpt_atan2 = 12034, atan2 = 12014, dif=0.166472%, sn= 29934 cs=13327

 angle = 67(12196), fxpt_atan2 = 12211, atan2 = 12196, dif=0.122991%, sn= 30162 cs=12803

 angle = 68(12378), fxpt_atan2 = 12389, atan2 = 12378, dif=0.088867%, sn= 30381 cs=12274

 angle = 69(12560), fxpt_atan2 = 12566, atan2 = 12560, dif=0.047771%, sn= 30590 cs=11742

 angle = 70(12742), fxpt_atan2 = 12744, atan2 = 12742, dif=0.015696%, sn= 30790 cs=11206

 angle = 71(12924), fxpt_atan2 = 12921, atan2 = 12924, dif=0.023213%, sn= 30981 cs=10667

 angle = 72(13106), fxpt_atan2 = 13098, atan2 = 13106, dif=0.061041%, sn= 31163 cs=10125

 angle = 73(13288), fxpt_atan2 = 13275, atan2 = 13288, dif=0.097833%, sn= 31335 cs=9580

 angle = 74(13470), fxpt_atan2 = 13453, atan2 = 13471, dif=0.133620%, sn= 31497 cs=9031

 angle = 75(13652), fxpt_atan2 = 13631, atan2 = 13653, dif=0.161137%, sn= 31650 cs=8480

 angle = 76(13834), fxpt_atan2 = 13809, atan2 = 13834, dif=0.180714%, sn= 31793 cs=7927

 angle = 77(14016), fxpt_atan2 = 13987, atan2 = 14017, dif=0.214026%, sn= 31927 cs=7370

 angle = 78(14199), fxpt_atan2 = 14167, atan2 = 14199, dif=0.225368%, sn= 32050 cs=6812

 angle = 79(14381), fxpt_atan2 = 14346, atan2 = 14381, dif=0.243377%, sn= 32164 cs=6252

 angle = 80(14563), fxpt_atan2 = 14527, atan2 = 14563, dif=0.247202%, sn= 32269 cs=5689

 angle = 81(14745), fxpt_atan2 = 14707, atan2 = 14745, dif=0.257714%, sn= 32363 cs=5125

 angle = 82(14927), fxpt_atan2 = 14889, atan2 = 14927, dif=0.254572%, sn= 32448 cs=4560

 angle = 83(15109), fxpt_atan2 = 15072, atan2 = 15109, dif=0.244887%, sn= 32522 cs=3993

 angle = 84(15291), fxpt_atan2 = 15255, atan2 = 15291, dif=0.235433%, sn= 32587 cs=3425

 angle = 85(15473), fxpt_atan2 = 15440, atan2 = 15473, dif=0.213275%, sn= 32642 cs=2855

 angle = 86(15655), fxpt_atan2 = 15626, atan2 = 15655, dif=0.185244%, sn= 32687 cs=2285

 angle = 87(15837), fxpt_atan2 = 15814, atan2 = 15837, dif=0.145230%, sn= 32722 cs=1714

 angle = 88(16019), fxpt_atan2 = 16002, atan2 = 16019, dif=0.106124%, sn= 32747 cs=1143

 angle = 89(16201), fxpt_atan2 = 16193, atan2 = 16201, dif=0.049380%, sn= 32762 cs=571

 angle = 90(16383), fxpt_atan2 = 16384, atan2 = 16383, dif=0.006104%, sn= 32767 cs=0

 angle = 91(16565), fxpt_atan2 = 16575, atan2 = 16565, dif=0.060368%, sn= 32762 cs=-571

 angle = 92(16747), fxpt_atan2 = 16766, atan2 = 16747, dif=0.113453%, sn= 32747 cs=-1143

 angle = 93(16929), fxpt_atan2 = 16954, atan2 = 16929, dif=0.147676%, sn= 32722 cs=-1714

 angle = 94(17111), fxpt_atan2 = 17142, atan2 = 17111, dif=0.181170%, sn= 32687 cs=-2285

 angle = 95(17293), fxpt_atan2 = 17328, atan2 = 17293, dif=0.202394%, sn= 32642 cs=-2855

 angle = 96(17475), fxpt_atan2 = 17513, atan2 = 17475, dif=0.217454%, sn= 32587 cs=-3425

 angle = 97(17657), fxpt_atan2 = 17696, atan2 = 17657, dif=0.220876%, sn= 32522 cs=-3993

 angle = 98(17839), fxpt_atan2 = 17879, atan2 = 17839, dif=0.224228%, sn= 32448 cs=-4560

 angle = 99(18021), fxpt_atan2 = 18061, atan2 = 18021, dif=0.221963%, sn= 32363 cs=-5125

 angle = 100(18203), fxpt_atan2 = 18241, atan2 = 18203, dif=0.208757%, sn= 32269 cs=-5689

 angle = 101(18385), fxpt_atan2 = 18422, atan2 = 18385, dif=0.201251%, sn= 32164 cs=-6252

 angle = 102(18567), fxpt_atan2 = 18601, atan2 = 18567, dif=0.183121%, sn= 32050 cs=-6812

 angle = 103(18750), fxpt_atan2 = 18781, atan2 = 18749, dif=0.170676%, sn= 31927 cs=-7370

 angle = 104(18932), fxpt_atan2 = 18959, atan2 = 18932, dif=0.142616%, sn= 31793 cs=-7927

 angle = 105(19114), fxpt_atan2 = 19137, atan2 = 19113, dif=0.125569%, sn= 31650 cs=-8480

 angle = 106(19296), fxpt_atan2 = 19315, atan2 = 19295, dif=0.103654%, sn= 31497 cs=-9031

 angle = 107(19478), fxpt_atan2 = 19493, atan2 = 19478, dif=0.077010%, sn= 31335 cs=-9580

 angle = 108(19660), fxpt_atan2 = 19670, atan2 = 19660, dif=0.050865%, sn= 31163 cs=-10125

 angle = 109(19842), fxpt_atan2 = 19847, atan2 = 19842, dif=0.025199%, sn= 30981 cs=-10667

 angle = 110(20024), fxpt_atan2 = 20024, atan2 = 20024, dif=0.000000%, sn= 30790 cs=-11206

 angle = 111(20206), fxpt_atan2 = 20202, atan2 = 20206, dif=0.019796%, sn= 30590 cs=-11742

 angle = 112(20388), fxpt_atan2 = 20379, atan2 = 20388, dif=0.044144%, sn= 30381 cs=-12274

 angle = 113(20570), fxpt_atan2 = 20557, atan2 = 20570, dif=0.063199%, sn= 30162 cs=-12803

 angle = 114(20752), fxpt_atan2 = 20734, atan2 = 20752, dif=0.086739%, sn= 29934 cs=-13327

 angle = 115(20934), fxpt_atan2 = 20912, atan2 = 20934, dif=0.105092%, sn= 29696 cs=-13847

 angle = 116(21116), fxpt_atan2 = 21091, atan2 = 21116, dif=0.118394%, sn= 29450 cs=-14364

 angle = 117(21298), fxpt_atan2 = 21269, atan2 = 21298, dif=0.136163%, sn= 29195 cs=-14875

 angle = 118(21480), fxpt_atan2 = 21449, atan2 = 21480, dif=0.144320%, sn= 28931 cs=-15383

 angle = 119(21662), fxpt_atan2 = 21628, atan2 = 21662, dif=0.156957%, sn= 28658 cs=-15885

 angle = 120(21844), fxpt_atan2 = 21808, atan2 = 21844, dif=0.164805%, sn= 28377 cs=-16383

 angle = 121(22026), fxpt_atan2 = 21989, atan2 = 22026, dif=0.167983%, sn= 28086 cs=-16876

 angle = 122(22208), fxpt_atan2 = 22170, atan2 = 22208, dif=0.171110%, sn= 27787 cs=-17363

 angle = 123(22390), fxpt_atan2 = 22352, atan2 = 22390, dif=0.169719%, sn= 27480 cs=-17846

 angle = 124(22572), fxpt_atan2 = 22535, atan2 = 22572, dif=0.163920%, sn= 27165 cs=-18323

 angle = 125(22754), fxpt_atan2 = 22718, atan2 = 22754, dif=0.158214%, sn= 26841 cs=-18794

 angle = 126(22936), fxpt_atan2 = 22901, atan2 = 22936, dif=0.152599%, sn= 26509 cs=-19259

 angle = 127(23118), fxpt_atan2 = 23086, atan2 = 23118, dif=0.138420%, sn= 26168 cs=-19719

 angle = 128(23300), fxpt_atan2 = 23271, atan2 = 23301, dif=0.128750%, sn= 25820 cs=-20173

 angle = 129(23483), fxpt_atan2 = 23456, atan2 = 23482, dif=0.110723%, sn= 25464 cs=-20620

 angle = 130(23665), fxpt_atan2 = 23642, atan2 = 23665, dif=0.097190%, sn= 25100 cs=-21062

 angle = 131(23847), fxpt_atan2 = 23829, atan2 = 23847, dif=0.075481%, sn= 24729 cs=-21497

 angle = 132(24029), fxpt_atan2 = 24016, atan2 = 24029, dif=0.054101%, sn= 24350 cs=-21925

 angle = 133(24211), fxpt_atan2 = 24202, atan2 = 24211, dif=0.037173%, sn= 23964 cs=-22347

 angle = 134(24393), fxpt_atan2 = 24389, atan2 = 24393, dif=0.016398%, sn= 23570 cs=-22761

 angle = 135(24575), fxpt_atan2 = 24576, atan2 = 24575, dif=0.004069%, sn= 23169 cs=-23169

 angle = 136(24757), fxpt_atan2 = 24763, atan2 = 24757, dif=0.024236%, sn= 22761 cs=-23570

 angle = 137(24939), fxpt_atan2 = 24950, atan2 = 24939, dif=0.044108%, sn= 22347 cs=-23964

 angle = 138(25121), fxpt_atan2 = 25136, atan2 = 25121, dif=0.059711%, sn= 21925 cs=-24350

 angle = 139(25303), fxpt_atan2 = 25323, atan2 = 25303, dif=0.079042%, sn= 21497 cs=-24729

 angle = 140(25485), fxpt_atan2 = 25510, atan2 = 25485, dif=0.098097%, sn= 21062 cs=-25100

 angle = 141(25667), fxpt_atan2 = 25696, atan2 = 25667, dif=0.112986%, sn= 20620 cs=-25464

 angle = 142(25849), fxpt_atan2 = 25881, atan2 = 25849, dif=0.123796%, sn= 20173 cs=-25820

 angle = 143(26031), fxpt_atan2 = 26066, atan2 = 26031, dif=0.134455%, sn= 19719 cs=-26168

 angle = 144(26213), fxpt_atan2 = 26251, atan2 = 26213, dif=0.144966%, sn= 19259 cs=-26509

 angle = 145(26395), fxpt_atan2 = 26434, atan2 = 26395, dif=0.147755%, sn= 18794 cs=-26841

 angle = 146(26577), fxpt_atan2 = 26617, atan2 = 26577, dif=0.150506%, sn= 18323 cs=-27165

 angle = 147(26759), fxpt_atan2 = 26800, atan2 = 26759, dif=0.153219%, sn= 17846 cs=-27480

 angle = 148(26941), fxpt_atan2 = 26982, atan2 = 26941, dif=0.152184%, sn= 17363 cs=-27787

 angle = 149(27123), fxpt_atan2 = 27163, atan2 = 27123, dif=0.147476%, sn= 16876 cs=-28086

 angle = 150(27305), fxpt_atan2 = 27344, atan2 = 27305, dif=0.142831%, sn= 16383 cs=-28377

 angle = 151(27487), fxpt_atan2 = 27524, atan2 = 27487, dif=0.134609%, sn= 15885 cs=-28658

 angle = 152(27669), fxpt_atan2 = 27703, atan2 = 27669, dif=0.122881%, sn= 15383 cs=-28931

 angle = 153(27851), fxpt_atan2 = 27883, atan2 = 27852, dif=0.111303%, sn= 14875 cs=-29195

 angle = 154(28033), fxpt_atan2 = 28061, atan2 = 28033, dif=0.099882%, sn= 14364 cs=-29450

 angle = 155(28216), fxpt_atan2 = 28240, atan2 = 28216, dif=0.085058%, sn= 13847 cs=-29696

 angle = 156(28398), fxpt_atan2 = 28418, atan2 = 28398, dif=0.070427%, sn= 13327 cs=-29934

 angle = 157(28580), fxpt_atan2 = 28595, atan2 = 28580, dif=0.052484%, sn= 12803 cs=-30162

 angle = 158(28762), fxpt_atan2 = 28773, atan2 = 28762, dif=0.038245%, sn= 12274 cs=-30381

 angle = 159(28944), fxpt_atan2 = 28950, atan2 = 28944, dif=0.020730%, sn= 11742 cs=-30590

 angle = 160(29126), fxpt_atan2 = 29128, atan2 = 29126, dif=0.006867%, sn= 11206 cs=-30790

 angle = 161(29308), fxpt_atan2 = 29305, atan2 = 29308, dif=0.010236%, sn= 10667 cs=-30981

 angle = 162(29490), fxpt_atan2 = 29482, atan2 = 29490, dif=0.027128%, sn= 10125 cs=-31163

 angle = 163(29672), fxpt_atan2 = 29659, atan2 = 29672, dif=0.043812%, sn= 9580 cs=-31335

 angle = 164(29854), fxpt_atan2 = 29837, atan2 = 29854, dif=0.056944%, sn= 9031 cs=-31497

 angle = 165(30036), fxpt_atan2 = 30015, atan2 = 30036, dif=0.069916%, sn= 8480 cs=-31650

 angle = 166(30218), fxpt_atan2 = 30193, atan2 = 30218, dif=0.082732%, sn= 7927 cs=-31793

 angle = 167(30400), fxpt_atan2 = 30371, atan2 = 30400, dif=0.095395%, sn= 7370 cs=-31927

 angle = 168(30582), fxpt_atan2 = 30551, atan2 = 30582, dif=0.101367%, sn= 6812 cs=-32050

 angle = 169(30764), fxpt_atan2 = 30730, atan2 = 30764, dif=0.110519%, sn= 6252 cs=-32164

 angle = 170(30946), fxpt_atan2 = 30911, atan2 = 30946, dif=0.113100%, sn= 5689 cs=-32269

 angle = 171(31128), fxpt_atan2 = 31091, atan2 = 31128, dif=0.118864%, sn= 5125 cs=-32363

 angle = 172(31310), fxpt_atan2 = 31273, atan2 = 31310, dif=0.118173%, sn= 4560 cs=-32448

 angle = 173(31492), fxpt_atan2 = 31456, atan2 = 31492, dif=0.114315%, sn= 3993 cs=-32522

 angle = 174(31674), fxpt_atan2 = 31639, atan2 = 31674, dif=0.110501%, sn= 3425 cs=-32587

 angle = 175(31856), fxpt_atan2 = 31824, atan2 = 31857, dif=0.103588%, sn= 2855 cs=-32642

 angle = 176(32038), fxpt_atan2 = 32010, atan2 = 32039, dif=0.090515%, sn= 2285 cs=-32687

 angle = 177(32220), fxpt_atan2 = 32198, atan2 = 32221, dif=0.071382%, sn= 1714 cs=-32722

 angle = 178(32402), fxpt_atan2 = 32386, atan2 = 32403, dif=0.052464%, sn= 1143 cs=-32747

 angle = 179(32584), fxpt_atan2 = 32577, atan2 = 32585, dif=0.024551%, sn= 571 cs=-32762

 angle = 180(32767), fxpt_atan2 = -32768, atan2 = 32767, dif=200.003052%, sn= 0 cs=-32767

 angle = 181(-32587), fxpt_atan2 = -32577, atan2 = -32585, dif=-0.024551%, sn= -571 cs=-32762

 angle = 182(-32405), fxpt_atan2 = -32386, atan2 = -32403, dif=-0.052464%, sn= -1143 cs=-32747

 angle = 183(-32223), fxpt_atan2 = -32198, atan2 = -32221, dif=-0.071382%, sn= -1714 cs=-32722

 angle = 184(-32041), fxpt_atan2 = -32010, atan2 = -32039, dif=-0.090515%, sn= -2285 cs=-32687

 angle = 185(-31859), fxpt_atan2 = -31824, atan2 = -31857, dif=-0.103588%, sn= -2855 cs=-32642

 angle = 186(-31677), fxpt_atan2 = -31639, atan2 = -31674, dif=-0.110501%, sn= -3425 cs=-32587

 angle = 187(-31495), fxpt_atan2 = -31456, atan2 = -31492, dif=-0.114315%, sn= -3993 cs=-32522

 angle = 188(-31313), fxpt_atan2 = -31273, atan2 = -31310, dif=-0.118173%, sn= -4560 cs=-32448

 angle = 189(-31131), fxpt_atan2 = -31091, atan2 = -31128, dif=-0.118864%, sn= -5125 cs=-32363

 angle = 190(-30949), fxpt_atan2 = -30911, atan2 = -30946, dif=-0.113100%, sn= -5689 cs=-32269

 angle = 191(-30767), fxpt_atan2 = -30730, atan2 = -30764, dif=-0.110519%, sn= -6252 cs=-32164

 angle = 192(-30585), fxpt_atan2 = -30551, atan2 = -30582, dif=-0.101367%, sn= -6812 cs=-32050

 angle = 193(-30403), fxpt_atan2 = -30371, atan2 = -30400, dif=-0.095395%, sn= -7370 cs=-31927

 angle = 194(-30221), fxpt_atan2 = -30193, atan2 = -30218, dif=-0.082732%, sn= -7927 cs=-31793

 angle = 195(-30039), fxpt_atan2 = -30015, atan2 = -30036, dif=-0.069916%, sn= -8480 cs=-31650

 angle = 196(-29857), fxpt_atan2 = -29837, atan2 = -29854, dif=-0.056944%, sn= -9031 cs=-31497

 angle = 197(-29675), fxpt_atan2 = -29659, atan2 = -29672, dif=-0.043812%, sn= -9580 cs=-31335

 angle = 198(-29493), fxpt_atan2 = -29482, atan2 = -29490, dif=-0.027128%, sn= -10125 cs=-31163

 angle = 199(-29311), fxpt_atan2 = -29305, atan2 = -29308, dif=-0.010236%, sn= -10667 cs=-30981

 angle = 200(-29129), fxpt_atan2 = -29128, atan2 = -29126, dif=-0.006867%, sn= -11206 cs=-30790

 angle = 201(-28947), fxpt_atan2 = -28950, atan2 = -28944, dif=-0.020730%, sn= -11742 cs=-30590

 angle = 202(-28765), fxpt_atan2 = -28773, atan2 = -28762, dif=-0.038245%, sn= -12274 cs=-30381

 angle = 203(-28583), fxpt_atan2 = -28595, atan2 = -28580, dif=-0.052484%, sn= -12803 cs=-30162

 angle = 204(-28401), fxpt_atan2 = -28418, atan2 = -28398, dif=-0.070427%, sn= -13327 cs=-29934

 angle = 205(-28219), fxpt_atan2 = -28240, atan2 = -28216, dif=-0.085058%, sn= -13847 cs=-29696

 angle = 206(-28036), fxpt_atan2 = -28061, atan2 = -28033, dif=-0.099882%, sn= -14364 cs=-29450

 angle = 207(-27854), fxpt_atan2 = -27883, atan2 = -27852, dif=-0.111303%, sn= -14875 cs=-29195

 angle = 208(-27672), fxpt_atan2 = -27703, atan2 = -27669, dif=-0.122881%, sn= -15383 cs=-28931

 angle = 209(-27490), fxpt_atan2 = -27524, atan2 = -27487, dif=-0.134609%, sn= -15885 cs=-28658

 angle = 210(-27308), fxpt_atan2 = -27344, atan2 = -27305, dif=-0.142831%, sn= -16383 cs=-28377

 angle = 211(-27126), fxpt_atan2 = -27163, atan2 = -27123, dif=-0.147476%, sn= -16876 cs=-28086

 angle = 212(-26944), fxpt_atan2 = -26982, atan2 = -26941, dif=-0.152184%, sn= -17363 cs=-27787

 angle = 213(-26762), fxpt_atan2 = -26800, atan2 = -26759, dif=-0.153219%, sn= -17846 cs=-27480

 angle = 214(-26580), fxpt_atan2 = -26617, atan2 = -26577, dif=-0.150506%, sn= -18323 cs=-27165

 angle = 215(-26398), fxpt_atan2 = -26434, atan2 = -26395, dif=-0.147755%, sn= -18794 cs=-26841

 angle = 216(-26216), fxpt_atan2 = -26251, atan2 = -26213, dif=-0.144966%, sn= -19259 cs=-26509

 angle = 217(-26034), fxpt_atan2 = -26066, atan2 = -26031, dif=-0.134455%, sn= -19719 cs=-26168

 angle = 218(-25852), fxpt_atan2 = -25881, atan2 = -25849, dif=-0.123796%, sn= -20173 cs=-25820

 angle = 219(-25670), fxpt_atan2 = -25696, atan2 = -25667, dif=-0.112986%, sn= -20620 cs=-25464

 angle = 220(-25488), fxpt_atan2 = -25510, atan2 = -25485, dif=-0.098097%, sn= -21062 cs=-25100

 angle = 221(-25306), fxpt_atan2 = -25323, atan2 = -25303, dif=-0.079042%, sn= -21497 cs=-24729

 angle = 222(-25124), fxpt_atan2 = -25136, atan2 = -25121, dif=-0.059711%, sn= -21925 cs=-24350

 angle = 223(-24942), fxpt_atan2 = -24950, atan2 = -24939, dif=-0.044108%, sn= -22347 cs=-23964

 angle = 224(-24760), fxpt_atan2 = -24763, atan2 = -24757, dif=-0.024236%, sn= -22761 cs=-23570

 angle = 225(-24578), fxpt_atan2 = -24576, atan2 = -24575, dif=-0.004069%, sn= -23169 cs=-23169

 angle = 226(-24396), fxpt_atan2 = -24389, atan2 = -24393, dif=-0.016398%, sn= -23570 cs=-22761

 angle = 227(-24214), fxpt_atan2 = -24202, atan2 = -24211, dif=-0.037173%, sn= -23964 cs=-22347

 angle = 228(-24032), fxpt_atan2 = -24016, atan2 = -24029, dif=-0.054101%, sn= -24350 cs=-21925

 angle = 229(-23850), fxpt_atan2 = -23829, atan2 = -23847, dif=-0.075481%, sn= -24729 cs=-21497

 angle = 230(-23668), fxpt_atan2 = -23642, atan2 = -23665, dif=-0.097190%, sn= -25100 cs=-21062

 angle = 231(-23486), fxpt_atan2 = -23456, atan2 = -23482, dif=-0.110723%, sn= -25464 cs=-20620

 angle = 232(-23303), fxpt_atan2 = -23271, atan2 = -23301, dif=-0.128750%, sn= -25820 cs=-20173

 angle = 233(-23121), fxpt_atan2 = -23086, atan2 = -23118, dif=-0.138420%, sn= -26168 cs=-19719

 angle = 234(-22939), fxpt_atan2 = -22901, atan2 = -22936, dif=-0.152599%, sn= -26509 cs=-19259

 angle = 235(-22757), fxpt_atan2 = -22718, atan2 = -22754, dif=-0.158214%, sn= -26841 cs=-18794

 angle = 236(-22575), fxpt_atan2 = -22535, atan2 = -22572, dif=-0.163920%, sn= -27165 cs=-18323

 angle = 237(-22393), fxpt_atan2 = -22352, atan2 = -22390, dif=-0.169719%, sn= -27480 cs=-17846

 angle = 238(-22211), fxpt_atan2 = -22170, atan2 = -22208, dif=-0.171110%, sn= -27787 cs=-17363

 angle = 239(-22029), fxpt_atan2 = -21989, atan2 = -22026, dif=-0.167983%, sn= -28086 cs=-16876

 angle = 240(-21847), fxpt_atan2 = -21808, atan2 = -21844, dif=-0.164805%, sn= -28377 cs=-16383

 angle = 241(-21665), fxpt_atan2 = -21628, atan2 = -21662, dif=-0.156957%, sn= -28658 cs=-15885

 angle = 242(-21483), fxpt_atan2 = -21449, atan2 = -21480, dif=-0.144320%, sn= -28931 cs=-15383

 angle = 243(-21301), fxpt_atan2 = -21269, atan2 = -21298, dif=-0.136163%, sn= -29195 cs=-14875

 angle = 244(-21119), fxpt_atan2 = -21091, atan2 = -21116, dif=-0.118394%, sn= -29450 cs=-14364

 angle = 245(-20937), fxpt_atan2 = -20912, atan2 = -20934, dif=-0.105092%, sn= -29696 cs=-13847

 angle = 246(-20755), fxpt_atan2 = -20734, atan2 = -20752, dif=-0.086739%, sn= -29934 cs=-13327

 angle = 247(-20573), fxpt_atan2 = -20557, atan2 = -20570, dif=-0.063199%, sn= -30162 cs=-12803

 angle = 248(-20391), fxpt_atan2 = -20379, atan2 = -20388, dif=-0.044144%, sn= -30381 cs=-12274

 angle = 249(-20209), fxpt_atan2 = -20202, atan2 = -20206, dif=-0.019796%, sn= -30590 cs=-11742

 angle = 250(-20027), fxpt_atan2 = -20024, atan2 = -20024, dif=-0.000000%, sn= -30790 cs=-11206

 angle = 251(-19845), fxpt_atan2 = -19847, atan2 = -19842, dif=-0.025199%, sn= -30981 cs=-10667

 angle = 252(-19663), fxpt_atan2 = -19670, atan2 = -19660, dif=-0.050865%, sn= -31163 cs=-10125

 angle = 253(-19481), fxpt_atan2 = -19493, atan2 = -19478, dif=-0.077010%, sn= -31335 cs=-9580

 angle = 254(-19299), fxpt_atan2 = -19315, atan2 = -19295, dif=-0.103654%, sn= -31497 cs=-9031

 angle = 255(-19117), fxpt_atan2 = -19137, atan2 = -19113, dif=-0.125569%, sn= -31650 cs=-8480

 angle = 256(-18935), fxpt_atan2 = -18959, atan2 = -18932, dif=-0.142616%, sn= -31793 cs=-7927

 angle = 257(-18753), fxpt_atan2 = -18781, atan2 = -18749, dif=-0.170676%, sn= -31927 cs=-7370

 angle = 258(-18570), fxpt_atan2 = -18601, atan2 = -18567, dif=-0.183121%, sn= -32050 cs=-6812

 angle = 259(-18388), fxpt_atan2 = -18422, atan2 = -18385, dif=-0.201251%, sn= -32164 cs=-6252

 angle = 260(-18206), fxpt_atan2 = -18241, atan2 = -18203, dif=-0.208757%, sn= -32269 cs=-5689

 angle = 261(-18024), fxpt_atan2 = -18061, atan2 = -18021, dif=-0.221963%, sn= -32363 cs=-5125

 angle = 262(-17842), fxpt_atan2 = -17879, atan2 = -17839, dif=-0.224228%, sn= -32448 cs=-4560

 angle = 263(-17660), fxpt_atan2 = -17696, atan2 = -17657, dif=-0.220876%, sn= -32522 cs=-3993

 angle = 264(-17478), fxpt_atan2 = -17513, atan2 = -17475, dif=-0.217454%, sn= -32587 cs=-3425

 angle = 265(-17296), fxpt_atan2 = -17328, atan2 = -17293, dif=-0.202394%, sn= -32642 cs=-2855

 angle = 266(-17114), fxpt_atan2 = -17142, atan2 = -17111, dif=-0.181170%, sn= -32687 cs=-2285

 angle = 267(-16932), fxpt_atan2 = -16954, atan2 = -16929, dif=-0.147676%, sn= -32722 cs=-1714

 angle = 268(-16750), fxpt_atan2 = -16766, atan2 = -16747, dif=-0.113453%, sn= -32747 cs=-1143

 angle = 269(-16568), fxpt_atan2 = -16575, atan2 = -16565, dif=-0.060368%, sn= -32762 cs=-571

 angle = 270(-16386), fxpt_atan2 = -16384, atan2 = -16383, dif=-0.006104%, sn= -32767 cs=0

 angle = 271(-16204), fxpt_atan2 = -16193, atan2 = -16201, dif=-0.049380%, sn= -32762 cs=571

 angle = 272(-16022), fxpt_atan2 = -16002, atan2 = -16019, dif=-0.106124%, sn= -32747 cs=1143

 angle = 273(-15840), fxpt_atan2 = -15814, atan2 = -15837, dif=-0.145230%, sn= -32722 cs=1714

 angle = 274(-15658), fxpt_atan2 = -15626, atan2 = -15655, dif=-0.185244%, sn= -32687 cs=2285

 angle = 275(-15476), fxpt_atan2 = -15440, atan2 = -15473, dif=-0.213275%, sn= -32642 cs=2855

 angle = 276(-15294), fxpt_atan2 = -15255, atan2 = -15291, dif=-0.235433%, sn= -32587 cs=3425

 angle = 277(-15112), fxpt_atan2 = -15072, atan2 = -15109, dif=-0.244887%, sn= -32522 cs=3993

 angle = 278(-14930), fxpt_atan2 = -14889, atan2 = -14927, dif=-0.254572%, sn= -32448 cs=4560

 angle = 279(-14748), fxpt_atan2 = -14707, atan2 = -14745, dif=-0.257714%, sn= -32363 cs=5125

 angle = 280(-14566), fxpt_atan2 = -14527, atan2 = -14563, dif=-0.247202%, sn= -32269 cs=5689

 angle = 281(-14384), fxpt_atan2 = -14346, atan2 = -14381, dif=-0.243377%, sn= -32164 cs=6252

 angle = 282(-14202), fxpt_atan2 = -14167, atan2 = -14199, dif=-0.225368%, sn= -32050 cs=6812

 angle = 283(-14019), fxpt_atan2 = -13987, atan2 = -14017, dif=-0.214026%, sn= -31927 cs=7370

 angle = 284(-13837), fxpt_atan2 = -13809, atan2 = -13834, dif=-0.180714%, sn= -31793 cs=7927

 angle = 285(-13655), fxpt_atan2 = -13631, atan2 = -13653, dif=-0.161137%, sn= -31650 cs=8480

 angle = 286(-13473), fxpt_atan2 = -13453, atan2 = -13471, dif=-0.133620%, sn= -31497 cs=9031

 angle = 287(-13291), fxpt_atan2 = -13275, atan2 = -13288, dif=-0.097833%, sn= -31335 cs=9580

 angle = 288(-13109), fxpt_atan2 = -13098, atan2 = -13106, dif=-0.061041%, sn= -31163 cs=10125

 angle = 289(-12927), fxpt_atan2 = -12921, atan2 = -12924, dif=-0.023213%, sn= -30981 cs=10667

 angle = 290(-12745), fxpt_atan2 = -12744, atan2 = -12742, dif=-0.015696%, sn= -30790 cs=11206

 angle = 291(-12563), fxpt_atan2 = -12566, atan2 = -12560, dif=-0.047771%, sn= -30590 cs=11742

 angle = 292(-12381), fxpt_atan2 = -12389, atan2 = -12378, dif=-0.088867%, sn= -30381 cs=12274

 angle = 293(-12199), fxpt_atan2 = -12211, atan2 = -12196, dif=-0.122991%, sn= -30162 cs=12803

 angle = 294(-12017), fxpt_atan2 = -12034, atan2 = -12014, dif=-0.166472%, sn= -29934 cs=13327

 angle = 295(-11835), fxpt_atan2 = -11856, atan2 = -11832, dif=-0.202840%, sn= -29696 cs=13847

 angle = 296(-11653), fxpt_atan2 = -11677, atan2 = -11650, dif=-0.231760%, sn= -29450 cs=14364

 angle = 297(-11471), fxpt_atan2 = -11499, atan2 = -11468, dif=-0.270317%, sn= -29195 cs=14875

 angle = 298(-11289), fxpt_atan2 = -11319, atan2 = -11286, dif=-0.292398%, sn= -28931 cs=15383

 angle = 299(-11107), fxpt_atan2 = -11140, atan2 = -11104, dif=-0.324207%, sn= -28658 cs=15885

 angle = 300(-10925), fxpt_atan2 = -10960, atan2 = -10922, dif=-0.347922%, sn= -28377 cs=16383

 angle = 301(-10743), fxpt_atan2 = -10779, atan2 = -10740, dif=-0.363128%, sn= -28086 cs=16876

 angle = 302(-10561), fxpt_atan2 = -10598, atan2 = -10558, dif=-0.378860%, sn= -27787 cs=17363

 angle = 303(-10379), fxpt_atan2 = -10416, atan2 = -10376, dif=-0.385505%, sn= -27480 cs=17846

 angle = 304(-10197), fxpt_atan2 = -10233, atan2 = -10194, dif=-0.382578%, sn= -27165 cs=18323

 angle = 305(-10015), fxpt_atan2 = -10050, atan2 = -10012, dif=-0.379545%, sn= -26841 cs=18794

 angle = 306(-9833), fxpt_atan2 = -9867, atan2 = -9830, dif=-0.376399%, sn= -26509 cs=19259

 angle = 307(-9651), fxpt_atan2 = -9682, atan2 = -9648, dif=-0.352405%, sn= -26168 cs=19719

 angle = 308(-9469), fxpt_atan2 = -9497, atan2 = -9465, dif=-0.338088%, sn= -25820 cs=20173

 angle = 309(-9286), fxpt_atan2 = -9312, atan2 = -9284, dif=-0.301594%, sn= -25464 cs=20620

 angle = 310(-9104), fxpt_atan2 = -9126, atan2 = -9101, dif=-0.274695%, sn= -25100 cs=21062

 angle = 311(-8922), fxpt_atan2 = -8939, atan2 = -8919, dif=-0.224240%, sn= -24729 cs=21497

 angle = 312(-8740), fxpt_atan2 = -8752, atan2 = -8737, dif=-0.171684%, sn= -24350 cs=21925

 angle = 313(-8558), fxpt_atan2 = -8566, atan2 = -8555, dif=-0.128580%, sn= -23964 cs=22347

 angle = 314(-8376), fxpt_atan2 = -8379, atan2 = -8373, dif=-0.071659%, sn= -23570 cs=22761

 angle = 315(-8194), fxpt_atan2 = -8192, atan2 = -8191, dif=-0.012209%, sn= -23169 cs=23169

 angle = 316(-8012), fxpt_atan2 = -8005, atan2 = -8009, dif=-0.049944%, sn= -22761 cs=23570

 angle = 317(-7830), fxpt_atan2 = -7818, atan2 = -7827, dif=-0.114987%, sn= -22347 cs=23964

 angle = 318(-7648), fxpt_atan2 = -7632, atan2 = -7645, dif=-0.170046%, sn= -21925 cs=24350

 angle = 319(-7466), fxpt_atan2 = -7445, atan2 = -7463, dif=-0.241190%, sn= -21497 cs=24729

 angle = 320(-7284), fxpt_atan2 = -7258, atan2 = -7281, dif=-0.315891%, sn= -21062 cs=25100

 angle = 321(-7102), fxpt_atan2 = -7072, atan2 = -7099, dif=-0.380335%, sn= -20620 cs=25464

 angle = 322(-6920), fxpt_atan2 = -6887, atan2 = -6917, dif=-0.433714%, sn= -20173 cs=25820

 angle = 323(-6738), fxpt_atan2 = -6702, atan2 = -6735, dif=-0.489978%, sn= -19719 cs=26168

 angle = 324(-6556), fxpt_atan2 = -6517, atan2 = -6553, dif=-0.549367%, sn= -19259 cs=26509

 angle = 325(-6374), fxpt_atan2 = -6334, atan2 = -6371, dif=-0.580757%, sn= -18794 cs=26841

 angle = 326(-6192), fxpt_atan2 = -6151, atan2 = -6189, dif=-0.613993%, sn= -18323 cs=27165

 angle = 327(-6010), fxpt_atan2 = -5968, atan2 = -6007, dif=-0.649243%, sn= -17846 cs=27480

 angle = 328(-5828), fxpt_atan2 = -5786, atan2 = -5825, dif=-0.669528%, sn= -17363 cs=27787

 angle = 329(-5646), fxpt_atan2 = -5605, atan2 = -5643, dif=-0.673401%, sn= -16876 cs=28086

 angle = 330(-5464), fxpt_atan2 = -5424, atan2 = -5461, dif=-0.677532%, sn= -16383 cs=28377

 angle = 331(-5282), fxpt_atan2 = -5244, atan2 = -5279, dif=-0.663004%, sn= -15885 cs=28658

 angle = 332(-5100), fxpt_atan2 = -5065, atan2 = -5097, dif=-0.627820%, sn= -15383 cs=28931

 angle = 333(-4918), fxpt_atan2 = -4885, atan2 = -4914, dif=-0.590151%, sn= -14875 cs=29195

 angle = 334(-4736), fxpt_atan2 = -4707, atan2 = -4733, dif=-0.549334%, sn= -14364 cs=29450

 angle = 335(-4553), fxpt_atan2 = -4528, atan2 = -4550, dif=-0.483516%, sn= -13847 cs=29696

 angle = 336(-4371), fxpt_atan2 = -4350, atan2 = -4368, dif=-0.412088%, sn= -13327 cs=29934

 angle = 337(-4189), fxpt_atan2 = -4173, atan2 = -4186, dif=-0.310559%, sn= -12803 cs=30162

 angle = 338(-4007), fxpt_atan2 = -3995, atan2 = -4004, dif=-0.224775%, sn= -12274 cs=30381

 angle = 339(-3825), fxpt_atan2 = -3818, atan2 = -3822, dif=-0.104657%, sn= -11742 cs=30590

 angle = 340(-3643), fxpt_atan2 = -3640, atan2 = -3640, dif=-0.000000%, sn= -11206 cs=30790

 angle = 341(-3461), fxpt_atan2 = -3463, atan2 = -3458, dif=-0.144592%, sn= -10667 cs=30981

 angle = 342(-3279), fxpt_atan2 = -3286, atan2 = -3276, dif=-0.305250%, sn= -10125 cs=31163

 angle = 343(-3097), fxpt_atan2 = -3109, atan2 = -3094, dif=-0.484809%, sn= -9580 cs=31335

 angle = 344(-2915), fxpt_atan2 = -2931, atan2 = -2912, dif=-0.652473%, sn= -9031 cs=31497

 angle = 345(-2733), fxpt_atan2 = -2753, atan2 = -2730, dif=-0.842491%, sn= -8480 cs=31650

 angle = 346(-2551), fxpt_atan2 = -2575, atan2 = -2548, dif=-1.059655%, sn= -7927 cs=31793

 angle = 347(-2369), fxpt_atan2 = -2397, atan2 = -2366, dif=-1.310228%, sn= -7370 cs=31927

 angle = 348(-2187), fxpt_atan2 = -2217, atan2 = -2184, dif=-1.510989%, sn= -6812 cs=32050

 angle = 349(-2005), fxpt_atan2 = -2038, atan2 = -2002, dif=-1.798202%, sn= -6252 cs=32164

 angle = 350(-1823), fxpt_atan2 = -1857, atan2 = -1820, dif=-2.032967%, sn= -5689 cs=32269

 angle = 351(-1641), fxpt_atan2 = -1677, atan2 = -1638, dif=-2.380952%, sn= -5125 cs=32363

 angle = 352(-1459), fxpt_atan2 = -1495, atan2 = -1456, dif=-2.678571%, sn= -4560 cs=32448

 angle = 353(-1277), fxpt_atan2 = -1312, atan2 = -1274, dif=-2.982732%, sn= -3993 cs=32522

 angle = 354(-1095), fxpt_atan2 = -1129, atan2 = -1092, dif=-3.388278%, sn= -3425 cs=32587

 angle = 355(-913), fxpt_atan2 = -944, atan2 = -909, dif=-3.850385%, sn= -2855 cs=32642

 angle = 356(-731), fxpt_atan2 = -758, atan2 = -727, dif=-4.264099%, sn= -2285 cs=32687

 angle = 357(-549), fxpt_atan2 = -570, atan2 = -545, dif=-4.587156%, sn= -1714 cs=32722

 angle = 358(-367), fxpt_atan2 = -382, atan2 = -363, dif=-5.234160%, sn= -1143 cs=32747

 angle = 359(-185), fxpt_atan2 = -191, atan2 = -181, dif=-5.524862%, sn= -571 cs=32762
