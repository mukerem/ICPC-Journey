import javax.swing.*;    
public class TableExample {    
    JFrame f;    
    TableExample(){    
    f=new JFrame();    
    String data[][]={ 
        {"100", "AAAAA", "5000"},{"101", "BBBBB", "5050"},{"102", "CCCCC", "5100"},{"103", "DDDDD", "5150"},{"104", "EEEEE", "5200"},{"105", "FFFFF", "5250"},{"106", "GGGGG", "5300"},{"107", "HHHHH", "5350"},{"108", "IIIII", "5400"},       {"109", "JJJJJ", "5450"},{"110", "KKKKK", "5500"},{"111", "LLLLL", "5550"},{"112", "MMMMM", "5600"},{"113", "NNNNN", "5650"},{"114", "OOOOO", "5700"},{"115", "PPPPP", "5750"},{"116", "QQQQQ", "5800"},{"117", "RRRRR", "5850"},{"118", "SSSSS", "5900"},{"119", "TTTTT", "5950"},{"120", "UUUUU", "6000"},{"121", "VVVVV", "6050"},{"122", "WWWWW", "6100"},{"123", "FFFFFF", "6150"},{"124", "YYYYY", "6200"},{"125", "ZZZZZ", "6250"},{"126", "AAAAA", "6300"},{"127", "BBBBB", "6350"},{"128", "CCCCC", "6400"},{"129", "DDDDD", "6450"},{"130", "EEEEE", "6500"},{"131", "FFFFF", "6550"},{"132", "GGGGG", "6600"},{"133", "HHHHH", "6650"},{"134", "IIIII", "6700"},{"135", "JJJJJ", "6750"},{"136", "KKKKK", "6800"},{"137", "LLLLL", "6850"},{"138", "MMMMM", "6900"},{"139", "NNNNN", "6950"},{"140", "OOOOO", "7000"},{"141", "PPPPP", "7050"},{"142", "QQQQQ", "7100"},{"143", "RRRRR", "7150"},{"144", "SSSSS", "7200"},{"145", "TTTTT", "7250"},{"146", "UUUUU", "7300"},{"147", "VVVVV", "7350"},{"148", "WWWWW", "7400"},{"149", "GGGGG", "7450"},        
        };    
    String column[]={"ID","NAME","SALARY"};         
    JTable jt=new JTable(data,column);    
    jt.setBounds(30,40,200,300);          
    JScrollPane sp=new JScrollPane(jt);    
    f.add(sp);          
    f.setSize(600,800);   
    f.setResizable(false); 
    f.setVisible(true);    
}     
public static void main(String[] args) {    
    new TableExample();    
}    
}  
