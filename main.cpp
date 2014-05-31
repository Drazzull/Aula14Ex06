/*
 * Gráfico
 * 1º - Desenhar Exterior do grid
 * 2º - Desenhar valores dos eixos
 * 3º - Desenhar Labels e títulos
 * 4º - Desenhar pontos X e Y
 * 5º - Desenhar segmento da linha
 */

#include "Grafico.h"
#include <QApplication>
#include <QWidget>
void adicionarVetores(Grafico* grafico)
{

    QVector<QPoint> points;
    points.push_back(QPoint(1, 10));
    points.push_back(QPoint(2, 39));
    points.push_back(QPoint(3, 23));
    points.push_back(QPoint(4, 31));
    points.push_back(QPoint(5, 46));
    points.push_back(QPoint(6, 29));
    points.push_back(QPoint(7, 28));
    points.push_back(QPoint(8, 31));
    points.push_back(QPoint(9, 28));
    points.push_back(QPoint(10, 71));
    points.push_back(QPoint(11, 9));
    points.push_back(QPoint(12, 17));

    QVector<QPoint> points2;
    points2.push_back(QPoint(1, 13));
    points2.push_back(QPoint(2, 11));
    points2.push_back(QPoint(3, 47));
    points2.push_back(QPoint(4, 7));
    points2.push_back(QPoint(5, 20));
    points2.push_back(QPoint(6, 11));
    points2.push_back(QPoint(7, 10));
    points2.push_back(QPoint(8, 12));
    points2.push_back(QPoint(9, 19));
    points2.push_back(QPoint(10, 44));
    points2.push_back(QPoint(11, 25));
    points2.push_back(QPoint(12, 46));

    QVector<QString> x_values;
    x_values.push_back("1");
    x_values.push_back("2");
    x_values.push_back("3");
    x_values.push_back("4");
    x_values.push_back("5");
    x_values.push_back("6");
    x_values.push_back("7");
    x_values.push_back("8");
    x_values.push_back("9");
    x_values.push_back("10");
    x_values.push_back("11");
    x_values.push_back("12");

    QVector<QString> y_values;
    y_values.push_back("0");
    y_values.push_back("10");
    y_values.push_back("20");
    y_values.push_back("30");
    y_values.push_back("40");
    y_values.push_back("50");
    y_values.push_back("60");
    y_values.push_back("70");
    y_values.push_back("80");

    grafico->addSeries(points, QColor(0x3366CC));
    grafico->addSeries(points2, QColor(0xCC6633));
    grafico->setAxisX(x_values);
    grafico->setAxisY(y_values);
    grafico->setLabelX("Meses do Ano");
    grafico->setLabelY("Chuva (mm)");
    grafico->setTitle("Histórico do Clima: Joaçaba vs Floripa");
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    Grafico* grafico = new Grafico();

    adicionarVetores(grafico);

    // Propriedades do form
    QMainWindow window;
    window.setWindowTitle("Line Chart");
    window.setCentralWidget(grafico);
    window.resize(600, 400);

    window.show();

    return app.exec();
}
