package ch08;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JToolBar;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JRadioButton;
import javax.swing.JCheckBox;
import javax.swing.JButton;

public class UItest {

	private JFrame frame;
	private JLabel label;
	private JLabel lblNewLabel;
	private JTextField tfName;
	private JTextField tfAge;
	private JComboBox cmbBirthtime;
	private JRadioButton rdMan;
	private JRadioButton rdWoman;
	private JCheckBox chkReading;
	private JCheckBox chkFishing;
	private JCheckBox chkTracking;
	private JButton btnInsert;
	private JButton btnCancel;
	private JLabel lbMSG;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					UItest window = new UItest();
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
	public UItest() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		label = new JLabel("성명");
		label.setBounds(12, 10, 57, 15);
		frame.getContentPane().add(label);
		
		lblNewLabel = new JLabel("나이");
		lblNewLabel.setBounds(12, 35, 57, 15);
		frame.getContentPane().add(lblNewLabel);
		
		tfName = new JTextField();
		tfName.setBounds(49, 7, 116, 21);
		frame.getContentPane().add(tfName);
		tfName.setColumns(10);
		
		tfAge = new JTextField();
		tfAge.setBounds(49, 35, 116, 21);
		frame.getContentPane().add(tfAge);
		tfAge.setColumns(10);
		
		cmbBirthtime = new JComboBox();
		cmbBirthtime.setBounds(177, 35, 80, 21);
		frame.getContentPane().add(cmbBirthtime);
		
		rdMan = new JRadioButton("남자");
		rdMan.setBounds(49, 76, 63, 23);
		frame.getContentPane().add(rdMan);
		
		rdWoman = new JRadioButton("여자");
		rdWoman.setBounds(116, 76, 63, 23);
		frame.getContentPane().add(rdWoman);
		
		chkReading = new JCheckBox("독서");
		chkReading.setBounds(49, 122, 57, 23);
		frame.getContentPane().add(chkReading);
		
		chkFishing = new JCheckBox("낚시");
		chkFishing.setBounds(110, 122, 57, 23);
		frame.getContentPane().add(chkFishing);
		
		chkTracking = new JCheckBox("등산");
		chkTracking.setBounds(177, 122, 57, 23);
		frame.getContentPane().add(chkTracking);
		
		btnInsert = new JButton("입력");
		btnInsert.setBounds(49, 229, 97, 23);
		frame.getContentPane().add(btnInsert);
		
		btnCancel = new JButton("취소");
		btnCancel.setBounds(282, 229, 97, 23);
		frame.getContentPane().add(btnCancel);
		
		lbMSG = new JLabel((String) null);
		lbMSG.setBounds(269, 38, 80, 15);
		frame.getContentPane().add(lbMSG);
	}
}
