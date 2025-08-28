#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

class SumApp : public QWidget {
    Q_OBJECT

public:
    SumApp(QWidget *parent = nullptr) : QWidget(parent) {
        auto *layout = new QVBoxLayout(this);

        input1 = new QLineEdit(this);
        input2 = new QLineEdit(this);
        auto *button = new QPushButton("Calculate Sum", this);
        resultLabel = new QLabel("Sum: ", this);

        input1->setPlaceholderText("Enter first input");
        input2->setPlaceholderText("Enter second input");

        layout->addWidget(input1);
        layout->addWidget(input2);
        layout->addWidget(button);
        layout->addWidget(resultLabel);

        connect(button, &QPushButton::clicked, this, &SumApp::calculateSum);
    }

private slots:
    void calculateSum() {
        float val1 = input1->text().toFloat();
        float val2 = input2->text().toFloat();
        float sum = val1 + val2;
        resultLabel->setText("Sum: " + QString::number(sum));
    }

private:
    QLineEdit *input1;
    QLineEdit *input2;
    QLabel *resultLabel;
};

#include "main.moc"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SumApp window;
    window.setWindowTitle("Simple Qt Sum Calculator");
    window.resize(300, 150);
    window.show();
    return app.exec();
}
