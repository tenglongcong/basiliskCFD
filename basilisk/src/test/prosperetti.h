static double prosperetti[][2] = {
{ 0 , 0.01 },
{ 0.0338878 , 0.0099944 },
{ 0.0677755 , 0.00997795 },
{ 0.101663 , 0.0099509 },
{ 0.135551 , 0.00991345 },
{ 0.169439 , 0.0098658 },
{ 0.203326 , 0.00980815 },
{ 0.237214 , 0.00974075 },
{ 0.271102 , 0.0096637 },
{ 0.30499 , 0.00957725 },
{ 0.338877 , 0.0094816 },
{ 0.372765 , 0.00937685 },
{ 0.406653 , 0.0092633 },
{ 0.440541 , 0.0091411 },
{ 0.474428 , 0.0090105 },
{ 0.508316 , 0.00887165 },
{ 0.542204 , 0.0087248 },
{ 0.576092 , 0.00857015 },
{ 0.60998 , 0.00840795 },
{ 0.643867 , 0.0082384 },
{ 0.677755 , 0.00806175 },
{ 0.711643 , 0.00787825 },
{ 0.74553 , 0.0076881 },
{ 0.779418 , 0.0074916 },
{ 0.813306 , 0.00728895 },
{ 0.847194 , 0.0070804 },
{ 0.881081 , 0.0068662 },
{ 0.914969 , 0.00664665 },
{ 0.948857 , 0.006422 },
{ 0.982745 , 0.0061925 },
{ 1.01663 , 0.0059584 },
{ 1.05052 , 0.00571995 },
{ 1.08441 , 0.00547745 },
{ 1.1183 , 0.0052312 },
{ 1.15218 , 0.00498139 },
{ 1.18607 , 0.00472836 },
{ 1.21996 , 0.00447236 },
{ 1.25385 , 0.00421366 },
{ 1.28773 , 0.00395254 },
{ 1.32162 , 0.00368927 },
{ 1.35551 , 0.00342413 },
{ 1.3894 , 0.00315738 },
{ 1.42329 , 0.00288931 },
{ 1.45717 , 0.00262018 },
{ 1.49106 , 0.00235026 },
{ 1.52495 , 0.00207982 },
{ 1.55884 , 0.00180914 },
{ 1.59272 , 0.00153848 },
{ 1.62661 , 0.00126809 },
{ 1.6605 , 0.000998245 },
{ 1.69439 , 0.000729205 },
{ 1.72828 , 0.000461218 },
{ 1.76216 , 0.000194543 },
{ 1.79605 , 7.05725e-05 },
{ 1.82994 , 0.000333881 },
{ 1.86383 , 0.00059514 },
{ 1.89771 , 0.000854105 },
{ 1.9316 , 0.00111055 },
{ 1.96549 , 0.00136424 },
{ 1.99938 , 0.00161495 },
{ 2.03327 , 0.00186245 },
{ 2.06715 , 0.00210654 },
{ 2.10104 , 0.00234698 },
{ 2.13493 , 0.0025836 },
{ 2.16882 , 0.00281616 },
{ 2.2027 , 0.00304448 },
{ 2.23659 , 0.00326838 },
{ 2.27048 , 0.00348767 },
{ 2.30437 , 0.00370215 },
{ 2.33825 , 0.00391166 },
{ 2.37214 , 0.00411604 },
{ 2.40603 , 0.00431513 },
{ 2.43992 , 0.00450876 },
{ 2.47381 , 0.00469679 },
{ 2.50769 , 0.00487908 },
{ 2.54158 , 0.0050555 },
{ 2.57547 , 0.0052259 },
{ 2.60936 , 0.00539015 },
{ 2.64324 , 0.00554815 },
{ 2.67713 , 0.00569985 },
{ 2.71102 , 0.00584505 },
{ 2.74491 , 0.0059837 },
{ 2.7788 , 0.00611575 },
{ 2.81268 , 0.00624105 },
{ 2.84657 , 0.00635955 },
{ 2.88046 , 0.0064712 },
{ 2.91435 , 0.00657595 },
{ 2.94823 , 0.0066737 },
{ 2.98212 , 0.00676445 },
{ 3.01601 , 0.00684815 },
{ 3.0499 , 0.00692475 },
{ 3.08379 , 0.00699425 },
{ 3.11767 , 0.0070566 },
{ 3.15156 , 0.00711185 },
{ 3.18545 , 0.00715995 },
{ 3.21934 , 0.0072009 },
{ 3.25322 , 0.00723475 },
{ 3.28711 , 0.0072615 },
{ 3.321 , 0.00728115 },
{ 3.35489 , 0.00729375 },
{ 3.38877 , 0.0072993 },
{ 3.42266 , 0.0072979 },
{ 3.45655 , 0.0072896 },
{ 3.49044 , 0.00727445 },
{ 3.52433 , 0.00725245 },
{ 3.55821 , 0.00722375 },
{ 3.5921 , 0.00718835 },
{ 3.62599 , 0.0071464 },
{ 3.65988 , 0.007098 },
{ 3.69376 , 0.00704315 },
{ 3.72765 , 0.006982 },
{ 3.76154 , 0.00691465 },
{ 3.79543 , 0.00684125 },
{ 3.82932 , 0.00676185 },
{ 3.8632 , 0.00667655 },
{ 3.89709 , 0.00658555 },
{ 3.93098 , 0.00648895 },
{ 3.96487 , 0.0063869 },
{ 3.99875 , 0.00627945 },
{ 4.03264 , 0.00616685 },
{ 4.06653 , 0.00604915 },
{ 4.10042 , 0.00592655 },
{ 4.13431 , 0.00579925 },
{ 4.16819 , 0.0056673 },
{ 4.20208 , 0.0055309 },
{ 4.23597 , 0.00539025 },
{ 4.26986 , 0.0052455 },
{ 4.30374 , 0.00509675 },
{ 4.33763 , 0.00494428 },
{ 4.37152 , 0.00478819 },
{ 4.40541 , 0.00462866 },
{ 4.4393 , 0.0044659 },
{ 4.47318 , 0.00430005 },
{ 4.50707 , 0.00413131 },
{ 4.54096 , 0.00395986 },
{ 4.57485 , 0.0037859 },
{ 4.60873 , 0.00360958 },
{ 4.64262 , 0.00343111 },
{ 4.67651 , 0.00325067 },
{ 4.7104 , 0.00306844 },
{ 4.74428 , 0.00288463 },
{ 4.77817 , 0.00269939 },
{ 4.81206 , 0.00251294 },
{ 4.84595 , 0.00232546 },
{ 4.87984 , 0.00213712 },
{ 4.91372 , 0.00194812 },
{ 4.94761 , 0.00175865 },
{ 4.9815 , 0.00156888 },
{ 5.01539 , 0.001379 },
{ 5.04927 , 0.00118921 },
{ 5.08316 , 0.00099966 },
{ 5.11705 , 0.00081055 },
{ 5.15094 , 0.000622055 },
{ 5.18483 , 0.000434348 },
{ 5.21871 , 0.000247603 },
{ 5.2526 , 6.19925e-05 },
{ 5.28649 , 0.000122313 },
{ 5.32038 , 0.000305148 },
{ 5.35426 , 0.000486347 },
{ 5.38815 , 0.00066575 },
{ 5.42204 , 0.000843195 },
{ 5.45593 , 0.00101853 },
{ 5.48982 , 0.00119159 },
{ 5.5237 , 0.00136225 },
{ 5.55759 , 0.00153035 },
{ 5.59148 , 0.00169574 },
{ 5.62537 , 0.00185829 },
{ 5.65925 , 0.00201786 },
{ 5.69314 , 0.00217432 },
{ 5.72703 , 0.00232755 },
{ 5.76092 , 0.00247742 },
{ 5.79481 , 0.00262381 },
{ 5.82869 , 0.00276661 },
{ 5.86258 , 0.00290569 },
{ 5.89647 , 0.00304098 },
{ 5.93036 , 0.00317234 },
{ 5.96424 , 0.0032997 },
{ 5.99813 , 0.00342295 },
{ 6.03202 , 0.003542 },
{ 6.06591 , 0.00365678 },
{ 6.09979 , 0.00376721 },
{ 6.13368 , 0.00387319 },
{ 6.16757 , 0.00397469 },
{ 6.20146 , 0.00407161 },
{ 6.23535 , 0.00416391 },
{ 6.26923 , 0.00425153 },
{ 6.30312 , 0.00433443 },
{ 6.33701 , 0.00441254 },
{ 6.3709 , 0.00448584 },
{ 6.40478 , 0.00455428 },
{ 6.43867 , 0.00461784 },
{ 6.47256 , 0.0046765 },
{ 6.50645 , 0.00473023 },
{ 6.54034 , 0.00477901 },
{ 6.57422 , 0.00482283 },
{ 6.60811 , 0.00486169 },
{ 6.642 , 0.00489558 },
{ 6.67589 , 0.00492451 },
{ 6.70977 , 0.00494849 },
{ 6.74366 , 0.00496753 },
{ 6.77755 , 0.00498164 },
{ 6.81144 , 0.00499086 },
{ 6.84533 , 0.0049952 },
{ 6.87921 , 0.0049947 },
{ 6.9131 , 0.00498938 },
{ 6.94699 , 0.00497929 },
{ 6.98088 , 0.00496449 },
{ 7.01476 , 0.004945 },
{ 7.04865 , 0.00492089 },
{ 7.08254 , 0.00489222 },
{ 7.11643 , 0.00485903 },
{ 7.15032 , 0.0048214 },
{ 7.1842 , 0.0047794 },
{ 7.21809 , 0.00473309 },
{ 7.25198 , 0.00468255 },
{ 7.28587 , 0.00462788 },
{ 7.31975 , 0.00456912 },
{ 7.35364 , 0.00450639 },
{ 7.38753 , 0.00443976 },
{ 7.42142 , 0.00436934 },
{ 7.4553 , 0.0042952 },
{ 7.48919 , 0.00421747 },
{ 7.52308 , 0.00413622 },
{ 7.55697 , 0.00405157 },
{ 7.59086 , 0.00396362 },
{ 7.62474 , 0.00387247 },
{ 7.65863 , 0.00377825 },
{ 7.69252 , 0.00368107 },
{ 7.72641 , 0.00358103 },
{ 7.76029 , 0.00347825 },
{ 7.79418 , 0.00337286 },
{ 7.82807 , 0.00326497 },
{ 7.86196 , 0.0031547 },
{ 7.89585 , 0.00304218 },
{ 7.92973 , 0.00292752 },
{ 7.96362 , 0.00281087 },
{ 7.99751 , 0.00269234 },
{ 8.0314 , 0.00257206 },
{ 8.06528 , 0.00245015 },
{ 8.09917 , 0.00232675 },
{ 8.13306 , 0.00220199 },
{ 8.16695 , 0.00207598 },
{ 8.20084 , 0.00194888 },
{ 8.23472 , 0.0018208 },
{ 8.26861 , 0.00169188 },
{ 8.3025 , 0.00156223 },
{ 8.33639 , 0.00143201 },
{ 8.37027 , 0.00130133 },
{ 8.40416 , 0.00117032 },
{ 8.43805 , 0.00103911 },
{ 8.47194 , 0.000907825 },
{ 8.50583 , 0.000776595 },
{ 8.53971 , 0.000645545 },
{ 8.5736 , 0.0005148 },
{ 8.60749 , 0.000384484 },
{ 8.64138 , 0.000254717 },
{ 8.67526 , 0.000125619 },
{ 8.70915 , 2.68836e-06 },
{ 8.74304 , 0.000130089 },
{ 8.77693 , 0.000256468 },
{ 8.81081 , 0.000381709 },
{ 8.8447 , 0.0005057 },
{ 8.87859 , 0.000628335 },
{ 8.91248 , 0.000749505 },
{ 8.94637 , 0.0008691 },
{ 8.98025 , 0.000987015 },
{ 9.01414 , 0.00110315 },
{ 9.04803 , 0.00121742 },
{ 9.08192 , 0.00132971 },
{ 9.1158 , 0.00143994 },
{ 9.14969 , 0.00154801 },
{ 9.18358 , 0.00165383 },
{ 9.21747 , 0.00175732 },
{ 9.25136 , 0.00185841 },
{ 9.28524 , 0.00195699 },
{ 9.31913 , 0.00205301 },
{ 9.35302 , 0.00214637 },
{ 9.38691 , 0.00223703 },
{ 9.42079 , 0.0023249 },
{ 9.45468 , 0.00240994 },
{ 9.48857 , 0.00249205 },
{ 9.52246 , 0.00257121 },
{ 9.55635 , 0.00264734 },
{ 9.59023 , 0.0027204 },
{ 9.62412 , 0.00279034 },
{ 9.65801 , 0.00285711 },
{ 9.6919 , 0.00292068 },
{ 9.72578 , 0.00298101 },
{ 9.75967 , 0.00303805 },
{ 9.79356 , 0.00309178 },
{ 9.82745 , 0.00314217 },
{ 9.86134 , 0.0031892 },
{ 9.89522 , 0.00323285 },
{ 9.92911 , 0.00327309 },
{ 9.963 , 0.00330992 },
{ 9.99689 , 0.00334332 },
{ 10.0308 , 0.00337328 },
{ 10.0647 , 0.00339981 },
{ 10.0985 , 0.0034229 },
{ 10.1324 , 0.00344254 },
{ 10.1663 , 0.00345875 },
{ 10.2002 , 0.00347155 },
{ 10.2341 , 0.00348093 },
{ 10.268 , 0.00348692 },
{ 10.3019 , 0.00348952 },
{ 10.3358 , 0.00348877 },
{ 10.3697 , 0.0034847 },
{ 10.4035 , 0.00347732 },
{ 10.4374 , 0.00346666 },
{ 10.4713 , 0.00345277 },
{ 10.5052 , 0.00343568 },
{ 10.5391 , 0.00341542 },
{ 10.573 , 0.00339204 },
{ 10.6069 , 0.00336558 },
{ 10.6408 , 0.0033361 },
{ 10.6746 , 0.00330364 },
{ 10.7085 , 0.00326824 },
{ 10.7424 , 0.00322998 },
{ 10.7763 , 0.00318891 },
{ 10.8102 , 0.00314508 },
{ 10.8441 , 0.00309854 },
{ 10.878 , 0.00304939 },
{ 10.9119 , 0.00299767 },
{ 10.9457 , 0.00294345 },
{ 10.9796 , 0.00288681 },
{ 11.0135 , 0.00282781 },
{ 11.0474 , 0.00276654 },
{ 11.0813 , 0.00270305 },
{ 11.1152 , 0.00263744 },
{ 11.1491 , 0.00256976 },
{ 11.183 , 0.00250013 },
{ 11.2168 , 0.0024286 },
{ 11.2507 , 0.00235527 },
{ 11.2846 , 0.0022802 },
{ 11.3185 , 0.0022035 },
{ 11.3524 , 0.00212524 },
{ 11.3863 , 0.0020455 },
{ 11.4202 , 0.00196438 },
{ 11.4541 , 0.00188197 },
{ 11.4879 , 0.00179836 },
{ 11.5218 , 0.00171363 },
{ 11.5557 , 0.00162786 },
{ 11.5896 , 0.00154115 },
{ 11.6235 , 0.0014536 },
{ 11.6574 , 0.00136529 },
{ 11.6913 , 0.0012763 },
{ 11.7252 , 0.00118674 },
{ 11.759 , 0.00109669 },
{ 11.7929 , 0.00100624 },
{ 11.8268 , 0.000915475 },
{ 11.8607 , 0.00082449 },
{ 11.8946 , 0.000733375 },
{ 11.9285 , 0.000642215 },
{ 11.9624 , 0.0005511 },
{ 11.9963 , 0.000460114 },
{ 12.0302 , 0.000369346 },
{ 12.064 , 0.000278881 },
{ 12.0979 , 0.000188802 },
{ 12.1318 , 9.9195e-05 },
{ 12.1657 , 1.01408e-05 },
{ 12.1996 , 7.8279e-05 },
{ 12.2335 , 0.000165984 },
{ 12.2674 , 0.000252894 },
{ 12.3013 , 0.000338934 },
{ 12.3351 , 0.000424025 },
{ 12.369 , 0.000508095 },
{ 12.4029 , 0.00059107 },
{ 12.4368 , 0.000672875 },
{ 12.4707 , 0.000753445 },
{ 12.5046 , 0.000832705 },
{ 12.5385 , 0.000910595 },
{ 12.5724 , 0.00098705 },
{ 12.6062 , 0.001062 },
{ 12.6401 , 0.00113539 },
{ 12.674 , 0.00120716 },
{ 12.7079 , 0.00127725 },
{ 12.7418 , 0.00134562 },
{ 12.7757 , 0.00141219 },
{ 12.8096 , 0.00147693 },
{ 12.8435 , 0.00153977 },
{ 12.8773 , 0.00160069 },
{ 12.9112 , 0.00165963 },
{ 12.9451 , 0.00171655 },
{ 12.979 , 0.00177141 },
{ 13.0129 , 0.00182417 },
{ 13.0468 , 0.00187481 },
{ 13.0807 , 0.00192326 },
{ 13.1146 , 0.00196953 },
{ 13.1484 , 0.00201357 },
{ 13.1823 , 0.00205536 },
{ 13.2162 , 0.00209487 },
{ 13.2501 , 0.00213209 },
{ 13.284 , 0.00216698 },
{ 13.3179 , 0.00219954 },
{ 13.3518 , 0.00222975 },
{ 13.3857 , 0.00225761 },
{ 13.4195 , 0.0022831 },
{ 13.4534 , 0.0023062 },
{ 13.4873 , 0.00232692 },
{ 13.5212 , 0.00234526 },
{ 13.5551 , 0.00236121 },
{ 13.589 , 0.00237477 },
{ 13.6229 , 0.00238596 },
{ 13.6568 , 0.00239478 },
{ 13.6907 , 0.00240122 },
{ 13.7245 , 0.00240532 },
{ 13.7584 , 0.00240707 },
{ 13.7923 , 0.00240649 },
{ 13.8262 , 0.00240361 },
{ 13.8601 , 0.00239844 },
{ 13.894 , 0.00239099 },
{ 13.9279 , 0.00238131 },
{ 13.9618 , 0.0023694 },
{ 13.9956 , 0.0023553 },
{ 14.0295 , 0.00233904 },
{ 14.0634 , 0.00232065 },
{ 14.0973 , 0.00230015 },
{ 14.1312 , 0.00227759 },
{ 14.1651 , 0.00225301 },
{ 14.199 , 0.00222643 },
{ 14.2329 , 0.0021979 },
{ 14.2667 , 0.00216747 },
{ 14.3006 , 0.00213517 },
{ 14.3345 , 0.00210105 },
{ 14.3684 , 0.00206515 },
{ 14.4023 , 0.00202753 },
{ 14.4362 , 0.00198822 },
{ 14.4701 , 0.00194728 },
{ 14.504 , 0.00190477 },
{ 14.5378 , 0.00186072 },
{ 14.5717 , 0.00181521 },
{ 14.6056 , 0.00176827 },
{ 14.6395 , 0.00171998 },
{ 14.6734 , 0.00167037 },
{ 14.7073 , 0.0016195 },
{ 14.7412 , 0.00156745 },
{ 14.7751 , 0.00151426 },
{ 14.8089 , 0.00145999 },
{ 14.8428 , 0.00140471 },
{ 14.8767 , 0.00134847 },
{ 14.9106 , 0.00129134 },
{ 14.9445 , 0.00123337 },
{ 14.9784 , 0.00117463 },
{ 15.0123 , 0.00111518 },
{ 15.0462 , 0.00105508 },
{ 15.08 , 0.000994395 },
{ 15.1139 , 0.00093319 },
{ 15.1478 , 0.00087152 },
{ 15.1817 , 0.00080945 },
{ 15.2156 , 0.000747045 },
{ 15.2495 , 0.00068437 },
{ 15.2834 , 0.00062148 },
{ 15.3173 , 0.00055844 },
{ 15.3512 , 0.00049531 },
{ 15.385 , 0.000432154 },
{ 15.4189 , 0.000369032 },
{ 15.4528 , 0.000306004 },
{ 15.4867 , 0.000243129 },
{ 15.5206 , 0.000180467 },
{ 15.5545 , 0.000118076 },
{ 15.5884 , 5.60155e-05 },
{ 15.6223 , 5.65895e-06 },
{ 15.6561 , 6.68905e-05 },
{ 15.69 , 0.000127624 },
{ 15.7239 , 0.000187803 },
{ 15.7578 , 0.000247376 },
{ 15.7917 , 0.000306288 },
{ 15.8256 , 0.00036449 },
{ 15.8595 , 0.000421929 },
{ 15.8934 , 0.000478555 },
{ 15.9272 , 0.00053432 },
{ 15.9611 , 0.00058918 },
{ 15.995 , 0.000643085 },
{ 16.0289 , 0.00069599 },
{ 16.0628 , 0.00074785 },
{ 16.0967 , 0.00079863 },
{ 16.1306 , 0.00084828 },
{ 16.1645 , 0.00089677 },
{ 16.1983 , 0.00094405 },
{ 16.2322 , 0.000990095 },
{ 16.2661 , 0.00103486 },
{ 16.3 , 0.00107832 },
{ 16.3339 , 0.00112043 },
{ 16.3678 , 0.00116118 },
{ 16.4017 , 0.00120052 },
{ 16.4356 , 0.00123843 },
{ 16.4694 , 0.00127489 },
{ 16.5033 , 0.00130986 },
{ 16.5372 , 0.00134333 },
{ 16.5711 , 0.00137528 },
{ 16.605 , 0.00140569 },
{ 16.6389 , 0.00143453 },
{ 16.6728 , 0.00146179 },
{ 16.7067 , 0.00148746 },
{ 16.7405 , 0.00151152 },
{ 16.7744 , 0.00153396 },
{ 16.8083 , 0.00155478 },
{ 16.8422 , 0.00157395 },
{ 16.8761 , 0.00159149 },
{ 16.91 , 0.00160738 },
{ 16.9439 , 0.0016216 },
{ 16.9778 , 0.00163419 },
{ 17.0117 , 0.00164511 },
{ 17.0455 , 0.00165438 },
{ 17.0794 , 0.00166201 },
{ 17.1133 , 0.00166798 },
{ 17.1472 , 0.00167231 },
{ 17.1811 , 0.00167502 },
{ 17.215 , 0.0016761 },
{ 17.2489 , 0.00167557 },
{ 17.2828 , 0.00167344 },
{ 17.3166 , 0.00166972 },
{ 17.3505 , 0.00166443 },
{ 17.3844 , 0.00165759 },
{ 17.4183 , 0.00164921 },
{ 17.4522 , 0.0016393 },
{ 17.4861 , 0.00162791 },
{ 17.52 , 0.00161503 },
{ 17.5539 , 0.0016007 },
{ 17.5877 , 0.00158494 },
{ 17.6216 , 0.00156777 },
{ 17.6555 , 0.00154923 },
{ 17.6894 , 0.00152934 },
{ 17.7233 , 0.00150812 },
{ 17.7572 , 0.00148562 },
{ 17.7911 , 0.00146185 },
{ 17.825 , 0.00143685 },
{ 17.8588 , 0.00141066 },
{ 17.8927 , 0.00138331 },
{ 17.9266 , 0.00135483 },
{ 17.9605 , 0.00132525 },
{ 17.9944 , 0.00129462 },
{ 18.0283 , 0.00126296 },
{ 18.0622 , 0.00123032 },
{ 18.0961 , 0.00119674 },
{ 18.1299 , 0.00116226 },
{ 18.1638 , 0.00112692 },
{ 18.1977 , 0.00109074 },
{ 18.2316 , 0.00105379 },
{ 18.2655 , 0.00101608 },
{ 18.2994 , 0.000977675 },
{ 18.3333 , 0.00093861 },
{ 18.3672 , 0.00089893 },
{ 18.401 , 0.00085867 },
{ 18.4349 , 0.00081788 },
{ 18.4688 , 0.0007766 },
{ 18.5027 , 0.000734875 },
{ 18.5366 , 0.00069274 },
{ 18.5705 , 0.00065025 },
{ 18.6044 , 0.00060744 },
{ 18.6383 , 0.00056436 },
{ 18.6722 , 0.000521045 },
{ 18.706 , 0.000477546 },
{ 18.7399 , 0.000433902 },
{ 18.7738 , 0.000390157 },
{ 18.8077 , 0.000346352 },
{ 18.8416 , 0.000302531 },
{ 18.8755 , 0.000258737 },
{ 18.9094 , 0.00021501 },
{ 18.9433 , 0.000171392 },
{ 18.9771 , 0.000127924 },
{ 19.011 , 8.46475e-05 },
{ 19.0449 , 4.16014e-05 },
{ 19.0788 , 1.17405e-06 },
{ 19.1127 , 4.36399e-05 },
{ 19.1466 , 8.57575e-05 },
{ 19.1805 , 0.00012749 },
{ 19.2144 , 0.000168798 },
{ 19.2482 , 0.000209646 },
{ 19.2821 , 0.000249999 },
{ 19.316 , 0.000289822 },
{ 19.3499 , 0.000329079 },
{ 19.3838 , 0.000367737 },
{ 19.4177 , 0.000405763 },
{ 19.4516 , 0.000443126 },
{ 19.4855 , 0.000479794 },
{ 19.5193 , 0.00051574 },
{ 19.5532 , 0.000550925 },
{ 19.5871 , 0.000585335 },
{ 19.621 , 0.00061893 },
{ 19.6549 , 0.00065169 },
{ 19.6888 , 0.00068359 },
{ 19.7227 , 0.000714605 },
{ 19.7566 , 0.00074471 },
{ 19.7904 , 0.00077388 },
{ 19.8243 , 0.0008021 },
{ 19.8582 , 0.000829345 },
{ 19.8921 , 0.000855595 },
{ 19.926 , 0.00088084 },
{ 19.9599 , 0.000905055 },
{ 19.9938 , 0.000928225 },
{ 20.0277 , 0.00095034 },
{ 20.0615 , 0.00097138 },
{ 20.0954 , 0.00099134 },
{ 20.1293 , 0.0010102 },
{ 20.1632 , 0.00102796 },
{ 20.1971 , 0.00104459 },
{ 20.231 , 0.00106011 },
{ 20.2649 , 0.0010745 },
{ 20.2988 , 0.00108775 },
{ 20.3327 , 0.00109987 },
{ 20.3665 , 0.00111083 },
{ 20.4004 , 0.00112066 },
{ 20.4343 , 0.00112933 },
{ 20.4682 , 0.00113686 },
{ 20.5021 , 0.00114324 },
{ 20.536 , 0.00114849 },
{ 20.5699 , 0.00115258 },
{ 20.6038 , 0.00115554 },
{ 20.6376 , 0.00115737 },
{ 20.6715 , 0.00115807 },
{ 20.7054 , 0.00115766 },
{ 20.7393 , 0.00115614 },
{ 20.7732 , 0.00115352 },
{ 20.8071 , 0.00114981 },
{ 20.841 , 0.00114502 },
{ 20.8749 , 0.00113916 },
{ 20.9087 , 0.00113225 },
{ 20.9426 , 0.00112431 },
{ 20.9765 , 0.00111534 },
{ 21.0104 , 0.00110537 },
{ 21.0443 , 0.00109439 },
{ 21.0782 , 0.00108245 },
{ 21.1121 , 0.00106956 },
{ 21.146 , 0.00105573 },
{ 21.1798 , 0.00104099 },
{ 21.2137 , 0.00102535 },
{ 21.2476 , 0.00100884 },
{ 21.2815 , 0.00099147 },
{ 21.3154 , 0.00097328 },
{ 21.3493 , 0.000954285 },
{ 21.3832 , 0.000934505 },
{ 21.4171 , 0.00091397 },
{ 21.4509 , 0.000892705 },
{ 21.4848 , 0.000870735 },
{ 21.5187 , 0.00084808 },
{ 21.5526 , 0.00082478 },
{ 21.5865 , 0.00080085 },
{ 21.6204 , 0.00077632 },
{ 21.6543 , 0.00075122 },
{ 21.6882 , 0.00072558 },
{ 21.722 , 0.000699425 },
{ 21.7559 , 0.000672785 },
{ 21.7898 , 0.000645685 },
{ 21.8237 , 0.00061816 },
{ 21.8576 , 0.00059024 },
{ 21.8915 , 0.00056195 },
{ 21.9254 , 0.000533325 },
{ 21.9593 , 0.00050439 },
{ 21.9931 , 0.000475175 },
{ 22.027 , 0.000445714 },
{ 22.0609 , 0.000416034 },
{ 22.0948 , 0.000386166 },
{ 22.1287 , 0.00035614 },
{ 22.1626 , 0.000325985 },
{ 22.1965 , 0.000295733 },
{ 22.2304 , 0.000265412 },
{ 22.2643 , 0.000235051 },
{ 22.2981 , 0.000204681 },
{ 22.332 , 0.000174331 },
{ 22.3659 , 0.000144028 },
{ 22.3998 , 0.000113804 },
{ 22.4337 , 8.3685e-05 },
{ 22.4676 , 5.37e-05 },
{ 22.5015 , 2.38765e-05 },
{ 22.5354 , 5.7578e-06 },
{ 22.5692 , 3.51759e-05 },
{ 22.6031 , 6.43515e-05 },
{ 22.637 , 9.32575e-05 },
{ 22.6709 , 0.000121869 },
{ 22.7048 , 0.00015016 },
{ 22.7387 , 0.000178105 },
{ 22.7726 , 0.000205683 },
{ 22.8065 , 0.000232865 },
{ 22.8403 , 0.000259632 },
{ 22.8742 , 0.00028596 },
{ 22.9081 , 0.000311826 },
{ 22.942 , 0.000337209 },
{ 22.9759 , 0.000362089 },
{ 23.0098 , 0.000386445 },
{ 23.0437 , 0.000410257 },
{ 23.0776 , 0.000433507 },
{ 23.1114 , 0.000456176 },
{ 23.1453 , 0.000478245 },
{ 23.1792 , 0.000499701 },
{ 23.2131 , 0.000520525 },
{ 23.247 , 0.0005407 },
{ 23.2809 , 0.000560215 },
{ 23.3148 , 0.000579055 },
{ 23.3487 , 0.000597205 },
{ 23.3825 , 0.000614655 },
{ 23.4164 , 0.00063139 },
{ 23.4503 , 0.0006474 },
{ 23.4842 , 0.00066268 },
{ 23.5181 , 0.000677215 },
{ 23.552 , 0.000690995 },
{ 23.5859 , 0.000704015 },
{ 23.6198 , 0.00071627 },
{ 23.6536 , 0.00072775 },
{ 23.6875 , 0.000738455 },
{ 23.7214 , 0.00074837 },
{ 23.7553 , 0.000757505 },
{ 23.7892 , 0.000765845 },
{ 23.8231 , 0.00077339 },
{ 23.857 , 0.000780145 },
{ 23.8909 , 0.0007861 },
{ 23.9248 , 0.00079126 },
{ 23.9586 , 0.00079563 },
{ 23.9925 , 0.000799205 },
{ 24.0264 , 0.000801985 },
{ 24.0603 , 0.000803985 },
{ 24.0942 , 0.000805195 },
{ 24.1281 , 0.000805625 },
{ 24.162 , 0.00080528 },
{ 24.1959 , 0.00080417 },
{ 24.2297 , 0.000802295 },
{ 24.2636 , 0.00079967 },
{ 24.2975 , 0.00079629 },
{ 24.3314 , 0.00079218 },
{ 24.3653 , 0.000787335 },
{ 24.3992 , 0.00078177 },
{ 24.4331 , 0.0007755 },
{ 24.467 , 0.00076853 },
{ 24.5008 , 0.000760875 },
{ 24.5347 , 0.000752545 },
{ 24.5686 , 0.000743555 },
{ 24.6025 , 0.00073392 },
{ 24.6364 , 0.000723645 },
{ 24.6703 , 0.000712755 },
{ 24.7042 , 0.00070126 },
{ 24.7381 , 0.000689175 },
{ 24.7719 , 0.000676515 },
{ 24.8058 , 0.0006633 },
{ 24.8397 , 0.000649545 },
{ 24.8736 , 0.000635265 },
{ 24.9075 , 0.00062048 },
{ 24.9414 , 0.000605205 },
{ 24.9753 , 0.00058946 }
};
