package ch08;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.ButtonGroup;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

public class P420_UItest implements ActionListener, ItemListener{

	private JFrame frame;
	private JLabel lbName;
	private JTextField tfName;
	private JLabel lbAge;
	private JTextField tfAge;
	private JLabel lbYMD;
	private JTextField tfYMD;
	private JLabel lbHH;
	private JComboBox<String>cmbHH; //JComboBox<String> C++에서 배운 클래스 탬플릿 JComboBox클래스에 <>의 형 변수를 넣음 
	private JLabel lbBirthcheck;
	private ButtonGroup rdDiv;
	private JRadioButton rdSolar;
	private JRadioButton rdLunar;
	private JRadioButton rdLunar2;
	private JLabel lbHabit;
	private JCheckBox cbClimbing;
	private JCheckBox cbReading;
	private JCheckBox cbFishing;
	private JLabel lbEvent;
	private JButton btnInsert;
	private JButton btnCancel;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					P420_UItest window = new P420_UItest();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public P420_UItest() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 340);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		lbName = new JLabel("이름");
		lbName.setBounds(12, 10, 40, 15);
		frame.getContentPane().add(lbName);
		
		tfName = new JTextField();
		tfName.setBounds(64, 7, 116, 21);
		frame.getContentPane().add(tfName);
		tfName.setColumns(10);
		
		lbAge = new JLabel("나이");
		lbAge.setBounds(12, 44, 40, 15);
		frame.getContentPane().add(lbAge);
		
		tfAge = new JTextField();
		tfAge.setBounds(64, 41, 116, 21);
		frame.getContentPane().add(tfAge);
		tfAge.setColumns(10);
		
		lbYMD = new JLabel("생일");
		lbYMD.setBounds(12, 82, 57, 15);
		frame.getContentPane().add(lbYMD);
		
		tfYMD = new JTextField();
		tfYMD.setHorizontalAlignment(SwingConstants.TRAILING);
		tfYMD.setBounds(64, 79, 116, 21);
		frame.getContentPane().add(tfYMD);
		tfYMD.setColumns(10);
		
		lbHH = new JLabel("생시");
		lbHH.setBounds(239, 82, 57, 15);
		frame.getContentPane().add(lbHH);
		
		cmbHH = new JComboBox<String>();
		cmbHH.setModel(new DefaultComboBoxModel<String>(new String[] {"99미선택", "00자", "01축", "02인", "03묘", "04진", "05사", "06오", "07미", "08신", "09유", "10술", "11해"}));
		cmbHH.setBounds(283, 79, 76, 21);
		frame.getContentPane().add(cmbHH);
		cmbHH.addItemListener(this);
		
		lbBirthcheck = new JLabel("생일구분");
		lbBirthcheck.setBounds(12, 135, 57, 15);
		frame.getContentPane().add(lbBirthcheck);
		
		rdSolar = new JRadioButton("양력");
		rdSolar.setBounds(64, 131, 68, 23);
		frame.getContentPane().add(rdSolar);
		rdSolar.addItemListener(this);
		
		rdLunar = new JRadioButton("음력평달");
		rdLunar.setBounds(129, 131, 92, 23);
		frame.getContentPane().add(rdLunar);
		rdLunar.addItemListener(this);
		
		rdLunar2 = new JRadioButton("음력윤달");
		rdLunar2.setBounds(225, 131, 121, 23);
		frame.getContentPane().add(rdLunar2);
		rdLunar2.addItemListener(this);
		
		rdDiv = new ButtonGroup();
		rdDiv.add(rdSolar);
		rdDiv.add(rdLunar);
		rdDiv.add(rdLunar2);
		
		lbHabit = new JLabel("취미");
		lbHabit.setBounds(12, 178, 57, 15);
		frame.getContentPane().add(lbHabit);
		
		cbClimbing = new JCheckBox("등산");
		cbClimbing.setBounds(64, 174, 68, 23);
		frame.getContentPane().add(cbClimbing);
		cbClimbing.addItemListener(this);
		
		cbReading = new JCheckBox("독서");
		cbReading.setBounds(129, 174, 68, 23);
		frame.getContentPane().add(cbReading);
		cbReading.addItemListener(this);
		
		cbFishing = new JCheckBox("낚시");
		cbFishing.setBounds(201, 174, 115, 23);
		frame.getContentPane().add(cbFishing);
		cbFishing.addItemListener(this);
		
		lbEvent = new JLabel("발생 이벤트");
		lbEvent.setBounds(64, 214, 57, 15);
		frame.getContentPane().add(lbEvent);
		
		btnInsert = new JButton("입력");
		btnInsert.setBounds(89, 256, 97, 23);
		frame.getContentPane().add(btnInsert);
		btnInsert.addActionListener(this); //JVM에 this로 자기자신을 호출을 요청함
		
		btnCancel = new JButton("취소");
		btnCancel.setBounds(225, 256, 97, 23);
		frame.getContentPane().add(btnCancel);
		btnCancel.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) { // 콜백 함수 //이벤트 핸들링은 연결이 안됨 
		//System.out.println("actionPerformed"); //JVM이 호출함
		
		if( e.getSource() == btnInsert )
//			System.out.println("btnIntsert"); //JVM이 호출함
			lbEvent.setText("입력버튼");
		else if( e.getSource() == btnCancel )
//			System.out.println("btnCancel");
			lbEvent.setText("취소버튼");
		
			//화면을 가진 프로그램에선 실질적으로 main메소드임
	}

	@Override
	public void itemStateChanged(ItemEvent e) {
		if(e.getSource() == cmbHH) //JComboBox
		{
//			System.out.println("itemStateChanged"); //두번뜨는 이유: 기존 선택된것 해제와 신규 선택된것 등록때문에
		if( e.getStateChange() == ItemEvent.SELECTED )
			lbEvent.setText("생시" + e.getItem()); // 두번뜨는걸 방지하는 코드
		}
		
		else if(e.getSource() == cbClimbing) //JCheckBox
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("등산");
			else
				lbEvent.setText("체크 해제");
		}
		else if(e.getSource() == cbReading)
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("독서");
			else
				lbEvent.setText("체크 해제");
		}
		else if(e.getSource() == cbFishing)
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("낚시");
			else
				lbEvent.setText("체크 해제");
		}
		else if(e.getSource() == rdSolar)
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("양력");
		}
		else if(e.getSource() == rdLunar)
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("음력평달");
		}
		else if(e.getSource() == rdLunar2)
		{
			if( e.getStateChange() == ItemEvent.SELECTED )
				lbEvent.setText("음력윤달");
		}
	
	
			
			
		
	}
}
