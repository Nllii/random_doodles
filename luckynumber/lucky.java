import javax.swing.*;
import java.awt.event.*;
import java.awt.*;


public class lucky extends JFrame {
    public lucky() {
        // draw the window which generates the random number
        setTitle("Lucky Number");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new FlowLayout());
        setVisible(true);
        JButton button = new JButton("Click to get a lucky number");
        add(button);
        JLabel label = new JLabel("Your lucky number is: ");
        add(label);
        JTextField text = new JTextField(10);
        add(text);
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
