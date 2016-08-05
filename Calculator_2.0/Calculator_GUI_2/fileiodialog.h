#ifndef FILEIODIALOG_H
#define FILEIODIALOG_H

#include <QDialog>

namespace Ui {
class fileIoDialog;
}

class fileIoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit fileIoDialog(QWidget *parent = 0);
    ~fileIoDialog();

private slots:
    void on_pushButton_input_clicked();

    void on_pushButton_output_clicked();

    void on_pushButton_configure_clicked();

    void on_pushButton_cancle_clicked();

private:
    Ui::fileIoDialog *ui;
};

#endif // FILEIODIALOG_H
