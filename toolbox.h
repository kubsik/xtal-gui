#ifndef TOOLBOX_H
#define TOOLBOX_H

#include "configurationdialog.h"
#include <QFrame>
#include <QProcess>
#include <QToolBox>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QProgressBar>
#include <QFileDialog>
#include <QSlider>

class ToolBox : public QFrame
{
    Q_OBJECT

public:
    explicit ToolBox(QWidget *parent = 0);
    ~ToolBox();

public slots:
    void setPathToConfiguration(QString pathToConfiguration);
    void loadConfigFromFile();
    void createConfigFile();
    void runXTALS();

private:
    QToolBox *toolBox;
    QProcess *XTALS;
    QString *pathToXTAL;
    QStringList *argToRunXTAL;
    QStringList *newArgToRunXTAL;
    QWidget *configurationWidget;
    QWidget *optionsWidget;
    QWidget *processWidget;
    QVBoxLayout *configurationLayout;
    QVBoxLayout *processLayout;
    QVBoxLayout *optionsLayout;
    QFrame *optionsFrame;
    QPushButton *createConfig;
    QPushButton *loadConfig;
    QLineEdit *configPathLine;
    QPushButton *runProcessing;
    QPushButton *stopProcessing;
    QCheckBox *exportChBox;
    QCheckBox *signalChBox;
    QCheckBox *integrateChBox;
    QCheckBox *geometryChBox;
    QCheckBox *dumpChBox;
    QProgressBar *progressBar;
    QSlider *slider;
    ConfigurationDialog *confDialog;
    QString pathToConfiguration = "";
};
#endif // TOOLBOX_H