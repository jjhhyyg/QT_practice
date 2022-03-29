#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QFontComboBox>
#include <QSpinBox>
#include <QTextCharFormat>
#include <iostream>
#include <string>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);
    void on_actFontItalic_triggered(bool checked);
    void on_actFontunder_triggered(bool checked);
    // 自定义槽函数
    void on_spinBoxFontSize_valueChanged(int aFontSize);
    void on_comboFont_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    void iniUI(); //代码实现的UI初始化
    void iniSignalSlots(); //关联信号和槽

    QLabel *fLabCurFile; //状态栏里显示当前文件的label
    QProgressBar *progressBar1; //状态栏上的进度条
    QSpinBox *spinFontSize; //字体大小spinBox
    QFontComboBox *comboFont; //字体名称comboBox


};
#endif // MAINWINDOW_H
