import javax.swing.*;
import java.awt.event.*;
import java.awt.*;


public class lucky extends JFrame {
    public lucky() {
        // draw the window which generates the random number
        setTitle("Lucky Number");
        setSize(500, 200);
        // center the window
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());
        setVisible(true);
        JButton button = new JButton("Click to get a lucky number");
        add(button);
        JTextField text = new JTextField(15);
        add(text);
        // center the button
        // button.setHorizontalAlignment(JButton.CENTER);
        button.setVerticalAlignment(JButton.CENTER);
        button.setFont(new Font("Arial", Font.BOLD, 20));
        button.setBackground(Color.BLUE);
        button.setForeground(Color.WHITE);
        button.setOpaque(true);
        button.setBorderPainted(false);

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // generate the random number
                int number = (int) (Math.random() * 100);
                // display the random number
                text.setText(String.valueOf(number));
            }
        });

    }

    public static void main(String[] args) {
        new lucky();
    }
}
