package ch10; //초기화 처리 : 버튼, 테이블, 필드

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.math.BigDecimal;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableColumn;

public class Ch1002_GUI_Final implements ActionListener, MouseListener {

	private JFrame frame;
	private JTextField tfScondition;
	private JLabel lbScondition;
	private JButton btnSearch;
	private JButton btnClear;
	private JTextField tfCode;
	private JLabel lbCode;
	private JLabel lbName;
	private JTextField tfName;
	private JTextField tfEmail;
	private JLabel lbEmail;
	private JTextField tfTel;
	private JLabel lbTel;
	private JLabel lbAsset;
	private JTextField tfAsset;
	private JLabel lbMSG;
	private JButton btnUpdate;
	private JButton btnInsert;
	private JButton btnDelete;
	private JScrollPane scrollPane;
	private JTable table;
	
	private String[] saTit 		= new String[] 	{"코드", "성명", "이메일", "전화번호", "자산"}; //타이틀
	private int[] 	 iaCwdith 	= new int[] 	{   10 ,    20 ,      80,         60,        100};	//폭
	private int[]	 iaAlm 		= new int[] 	{JLabel.RIGHT, JLabel.LEFT, JLabel.LEFT, JLabel.CENTER, JLabel.RIGHT}; //테이블내 정렬방법
	
	private DefaultTableModel dtModel; 	// AbstractTableModel을 상속받아 사용하는것 보다 효율적임

	String driver   = "oracle.jdbc.driver.OracleDriver";
	String url 	    = "jdbc:oracle:thin:@localhost:1521:XE"; // localhost:port/db명
	String user     = "dev";
	String password = "123456";
	Connection con  = null;
	
	PreparedStatement 	pstmt  = null; //동적용 SQL
	PreparedStatement 	pstmt2 = null; //동적용 SQL
	ResultSet 				rs = null; //다건조회된 결과 Set
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Ch1002_GUI_Final window = new Ch1002_GUI_Final();
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
	public Ch1002_GUI_Final() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setTitle("고객관리");
		frame.setBounds(100, 100, 750, 330);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		tfScondition = new JTextField();
		tfScondition.setBounds(60, 23, 60, 21);
		frame.getContentPane().add(tfScondition);
		tfScondition.setColumns(10);
		
		lbScondition = new JLabel("*코드");
		lbScondition.setBounds(12, 26, 46, 15);
		frame.getContentPane().add(lbScondition);
		
		btnSearch = new JButton("조회");
		btnSearch.setBounds(516, 22, 97, 23);
		frame.getContentPane().add(btnSearch);
		btnSearch.addActionListener(this);
		
		btnClear = new JButton("초기화");
		btnClear.setBounds(625, 22, 97, 23);
		frame.getContentPane().add(btnClear);
		btnClear.addActionListener(this);
		
		tfCode = new JTextField();
		tfCode.setBounds(60, 200, 60, 21);
		frame.getContentPane().add(tfCode);
		tfCode.setColumns(10);
		
		lbCode = new JLabel("*코드");
		lbCode.setBounds(12, 203, 46, 15);
		frame.getContentPane().add(lbCode);
		
		lbName = new JLabel("*성명");
		lbName.setBounds(132, 203, 46, 15);
		frame.getContentPane().add(lbName);
		
		tfName = new JTextField();
		tfName.setBounds(181, 200, 60, 21);
		frame.getContentPane().add(tfName);
		tfName.setColumns(10);
		
		tfEmail = new JTextField();
		tfEmail.setBounds(297, 200, 110, 21);
		frame.getContentPane().add(tfEmail);
		tfEmail.setColumns(10);
		
		lbEmail = new JLabel("이메일");
		lbEmail.setBounds(253, 203, 57, 15);
		frame.getContentPane().add(lbEmail);
		
		tfTel = new JTextField();
		tfTel.setBounds(474, 200, 97, 21);
		frame.getContentPane().add(tfTel);
		tfTel.setColumns(10);
		
		lbTel = new JLabel("전화번호");
		lbTel.setBounds(419, 203, 57, 15);
		frame.getContentPane().add(lbTel);
		
		lbAsset = new JLabel("자산");
		lbAsset.setBounds(583, 203, 39, 15);
		frame.getContentPane().add(lbAsset);
		
		tfAsset = new JTextField();
		tfAsset.setBounds(625, 200, 97, 21);
		frame.getContentPane().add(tfAsset);
		tfAsset.setColumns(10);
		
		lbMSG = new JLabel("");
		lbMSG.setBounds(42, 255, 165, 15);
		frame.getContentPane().add(lbMSG);
		
		btnUpdate = new JButton("수정");
		btnUpdate.setEnabled(false);
		btnUpdate.setBounds(625, 247, 97, 23);
		frame.getContentPane().add(btnUpdate);
		btnUpdate.addActionListener(this);
		
		btnInsert = new JButton("등록");
		btnInsert.setBounds(516, 247, 97, 23);
		frame.getContentPane().add(btnInsert);
		btnInsert.addActionListener(this);
		
		btnDelete = new JButton("삭제");
		btnDelete.setEnabled(false);
		btnDelete.setBounds(407, 247, 97, 23);
		frame.getContentPane().add(btnDelete);
		btnDelete.addActionListener(this);
		
		scrollPane = new JScrollPane();
		scrollPane.setBounds(22, 51, 700, 136);
		frame.getContentPane().add(scrollPane);
		
//		table = new JTable();
		
		// 테이블의 속성을 지정하여 테이블을 생성한다.
		
		// STEP 1. 테이블 모델을 생성한다.
		dtModel = new DefaultTableModel(saTit, 0);
		table = new JTable();
		// STEP 2. 테이블의 컬럼 출력형식을 새롭게 지정한다.
		// STEP 2-1. 테이블 컬럼을 생성하지 않게 한다.
		table.setAutoCreateColumnsFromModel(false);
		table.setModel(dtModel);
		
		for( int i = 0; i < iaAlm.length; i++)
		{
			// STEP 2-2. CELL 렌더러를 만들고, 각각의 셀에 정렬 방식을 지정한다.
			DefaultTableCellRenderer renderer = new DefaultTableCellRenderer();
			renderer.setHorizontalAlignment(iaAlm[i]);
			// STEP 2-3. 각각의 컬럼에 정렬 방식이 지정된 CELL 렌더러를 지정하고, 각 셀의 Width를 지정한다.
			TableColumn column = new TableColumn(i, iaCwdith[i], renderer, null);
			// STEP 2-4. 생성된 컬럼을 테이블에 추가한다.
			table.addColumn(column);
		}
		
		table.setFocusable(false); 			// 테이블 내에서 입력금지용
		scrollPane.setViewportView(table);
		table.addMouseListener(this);		// 마우스 리스너 장착
		
		
	}
	
	@Override
	public void actionPerformed(ActionEvent e) { 
		
		enableInit();
		
		if	   ( e.getSource() == btnInsert )
		{
//			lbMSG.setText("등록버튼 클릭");
			insert(); //DB insert
		}
		
		else if( e.getSource() == btnUpdate )
		{
//			lbMSG.setText("수정버튼 클릭");
			update();
		}
		
		else if( e.getSource() == btnDelete )
		{
//			lbMSG.setText("삭제버튼 클릭");
			delete();
		}
		
		else if( e.getSource() == btnSearch )
		{
//			lbMSG.setText("조회버튼 클릭");
			if( tfScondition.getText().isEmpty() ) // 빈칸 확인 코드
			{
				JOptionPane.showMessageDialog(frame, "조회조건을 입력하세요."); //라이브러리로 제공되기에 객체생성없이 쓸수있음 (static method)
				return;
			}
//			codes(); //호출
			search();
		}
		else if( e.getSource() == btnClear )
		{
			lbMSG.setText("초기화버튼 클릭");
			clear();
		}
		
	}
	
//	public void codes(){
//		String[] saData = new String[5];
//		saData[0] = "1";
//		saData[1] = "홍길동 1";
//		saData[2] = "hong@gmail.com";
//		saData[3] = "053-123-1234";
//		saData[4] = "12345.123";
//		dtModel.addRow(saData);
//		saData[0] = "2";
//		saData[1] = "홍길동 2";
//		saData[2] = "hong@gmail.com";
//		saData[3] = "053-123-1234";
//		saData[4] = "12345.123";
//		dtModel.addRow(saData);
//		saData[0] = "3";
//		saData[1] = "홍길동 3";
//		saData[2] = "hong@gmail.com";
//		saData[3] = "053-123-1234";
//		saData[4] = "12345.123";
//		dtModel.addRow(saData);
//		saData[0] = "4";
//		saData[1] = "홍길동 4";
//		saData[2] = "hong@gmail.com";
//		saData[3] = "053-123-1234";
//		saData[4] = "12345.123";
//		dtModel.addRow(saData);
//		saData[0] = "5";
//		saData[1] = "홍길동 5";
//		saData[2] = "hong@gmail.com";
//		saData[3] = "053-123-1234";
//		saData[4] = "12345.123";
//		dtModel.addRow(saData);
//		
//		lbMSG.setText("정상조회 되었습니다.");
//	}
	
	@Override
	public void mouseClicked(MouseEvent e){
		int row; 									//선택된 테이블의 행값
//		int col;									//선택된 테이블의 열값
		
		if(e.getSource() == table)
		{
			JTable jtable = (JTable)e.getSource();  //꼭 필요하진 않지만 소스간략화를 위해 씀
//			row = (JTable)e.getSource().getSelectedRow();
			row = jtable.getSelectedRow();
//			col = jtable.getSelectedColumn();
//			System.out.println(row + "," + col);
			
			lbMSG.setText("");						//메세지 초기화
			
			if( row > -1)							// table에서 특정 행을 클릭한 경우
			{
				tfCode.setText(  (String)table.getValueAt(row, 0) );
				tfCode.setEnabled(false); 			//코드 항목은 수정대상이 아니므로 disable
				tfName.setText(  (String)table.getValueAt(row, 1) );
				tfEmail.setText( (String)table.getValueAt(row, 2) );
				tfTel.setText(   (String)table.getValueAt(row, 3) );
				tfAsset.setText( (String)table.getValueAt(row, 4) );
				
				btnInsert.setEnabled(false);		 //등록버튼 disable
				btnUpdate.setEnabled(true);
				btnDelete.setEnabled(true);
			}
		}
	}
		@Override
		public void mouseEntered(MouseEvent arg0){
		}
		@Override
		public void mouseExited(MouseEvent arg0){
		}
		@Override
		public void mousePressed(MouseEvent arg0){
		}
		@Override
		public void mouseReleased(MouseEvent arg0){
		}
		
		public void enableInit()
		{
			tfCode.setEnabled(true);
			btnInsert.setEnabled(true);
			btnUpdate.setEnabled(false);
			btnDelete.setEnabled(false);
		}
		
		public void clear()
		{
			
			tfScondition.setText("");
			
			lbMSG.setText("");
			
			dtModel.setRowCount(0);
			
			tfCode.setText("");
			tfName.setText("");
			tfEmail.setText("");
			tfTel.setText("");
			tfAsset.setText("");
		}
		
		public void dbconnect()
		{
			try{
				Class.forName(driver);
				con = DriverManager.getConnection(url, user, password);
			}catch (Exception e){
				e.printStackTrace();
			}
		}
		
		public void insert()
		{
			String sSelectSingle = "SELECT * FROM CUSTOMER WHERE CODE =?";
			
			String sInsert = "INSERT INTO CUSTOMER VALUES(?,?,?,?,?)";
			
			int ret;
			
			String strCode  = tfCode.getText();
			String strName  = tfName.getText();
			String strEmail = tfEmail.getText();
			String strTel   = tfTel.getText();
			String strAsset = tfAsset.getText();
			strAsset= ( strAsset.isEmpty() ) ? "0" : strAsset; //입력안했을때는 null이 되기때문에 0으로 대신 넣어줌(wrapper클래스로 변환했을때 nullPointerExcepion방지
			
			if ( strCode.isEmpty() )
			{
				JOptionPane.showMessageDialog(frame, "코드를 입력하세요");
				lbMSG.setText("");
				return;
			}
			if ( strName.isEmpty() )
			{
				JOptionPane.showMessageDialog(frame, "성명을 입력하세요");
				lbMSG.setText("");
				return; // DB 자원을 안썼음 
			}
			
			try{
				dbconnect();
				pstmt = con.prepareStatement(sSelectSingle);
				pstmt.setInt(1, Integer.parseInt(strCode));
				
				rs = pstmt.executeQuery();
				
				if( rs.next() ) //코드가 이미 존재하는경우
				{
					lbMSG.setForeground(Color.RED);
					lbMSG.setText("이미 존재하는 코드입니다.");
//					return; // DB자원을 사용했기에 자원 반납이 안됨. 쓸려면 전부 close시켜야됨 
					throw new BizException(); //finally로 가서 close로 리소스 반납
				}
				
				pstmt2 = con.prepareStatement(sInsert);
				pstmt2.setInt(1, Integer.parseInt(strCode));
				pstmt2.setString(2, strName);
				pstmt2.setString(3, strEmail);
				pstmt2.setString(4, strTel);
				pstmt2.setBigDecimal(5, new BigDecimal(strAsset));
				
				ret = pstmt2.executeUpdate();
				
				//메세지 출력
				if( ret > 0)
				{
					lbMSG.setForeground(Color.BLACK);
					lbMSG.setText("정상등록 되었습니다.");
				}
				else
				{
					lbMSG.setForeground(Color.RED);
					lbMSG.setText("비정상처리 되었습니다.");
				}
			} catch(BizException e){
			} catch(Exception e){ e.printStackTrace();
			} finally{
				try{ if( rs != null ) rs.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt != null ) pstmt.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt2 != null ) pstmt2.close();
				} catch(SQLException e1){}
				
				try{ if( con != null ) con.close();
				} catch(SQLException e1){}
			}
		}
		
		public void delete()
		{
			String sSelectSingle = "SELECT * FROM CUSTOMER WHERE CODE =?";
			String sDelete = "DELETE FROM CUSTOMER WHERE CODE = ?";
			String strCode  = tfCode.getText();
			int ret;
			
			if ( strCode.isEmpty() )
			{
				JOptionPane.showMessageDialog(frame, "코드를 입력하세요");
				lbMSG.setText("");
				return;
			}
			
			try{
				dbconnect();
				pstmt = con.prepareStatement(sSelectSingle);
				pstmt.setInt(1, Integer.parseInt(strCode));
				
				rs = pstmt.executeQuery();
				if( !rs.next() ) //코드가 이미 존재하는경우
				{
					lbMSG.setForeground(Color.RED);
					lbMSG.setText("이미 삭제된 코드입니다.");
//					return; // DB자원을 사용했기에 자원 반납이 안됨. 쓸려면 전부 close시켜야됨 
					throw new BizException(); //finally로 가서 close로 리소스 반납
				}
				
				pstmt2 = con.prepareStatement(sDelete);
				pstmt2.setInt(1, Integer.parseInt(strCode));

				ret = pstmt2.executeUpdate();
				
				//메세지 출력
				if( ret > 0)
				{
					lbMSG.setForeground(Color.BLACK);
					lbMSG.setText("정상 삭제 되었습니다.");
				}
				else
				{
					lbMSG.setForeground(Color.RED);
					lbMSG.setText("비정상처리 되었습니다.");
				}
				
			} catch(Exception e){ e.printStackTrace();
			} finally{
				try{ if( rs != null ) rs.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt != null ) pstmt.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt2 != null ) pstmt2.close();
				} catch(SQLException e1){}
				
				try{ if( con != null ) con.close();
				} catch(SQLException e1){}
			}
		}
		
		public void update()
		{
			
		}
		
		public void search() {
			String sSltOrdCode = "SELECT * FROM CUSTOMER WHERE CODE >= ? ORDER BY CODE";
			String[] sData = new String[5];
			
			int i = 0;
			
			
			try{
				dbconnect();
				pstmt = con.prepareStatement(sSltOrdCode);
				pstmt.setInt(1, Integer.parseInt(tfScondition.getText()));
				rs = pstmt.executeQuery();
				
				while( rs.next())
				{
					i++;
				
					sData[0] = String.valueOf(rs.getInt(1)); //번호자리에 column 이름 넣어도됨 
					sData[1] = rs.getString(2);
					sData[2] = rs.getString(3);
					sData[3] = rs.getString(4);
					sData[4] = String.valueOf(rs.getBigDecimal(5));
					dtModel.addRow(sData);
				}
			
				
				//메세지 출력
				if( i == 0)
				{
					lbMSG.setForeground(Color.RED);
					lbMSG.setText("해당 자료가 없습니다.");
				}
				else
				{
					lbMSG.setForeground(Color.BLACK);
					lbMSG.setText("정상 조회 되었습니다.");
				}
				
			} catch(Exception e){ e.printStackTrace();
			} finally{
				try{ if( rs != null ) rs.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt != null ) pstmt.close();
				} catch(SQLException e1){}
				
				try{ if( pstmt2 != null ) pstmt2.close();
				} catch(SQLException e1){}
				
				try{ if( con != null ) con.close();
				} catch(SQLException e1){}
			}
			
		}
		
			
			
		
	}
		

	

