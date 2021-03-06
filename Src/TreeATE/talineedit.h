///
/// @brief         auto focus LineEdit
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///
#ifndef TALINEEDIT_H
#define TALINEEDIT_H

#include <QLineEdit>

class TALineEdit : public QLineEdit
{
public:
    explicit TALineEdit(QWidget *parent = 0);
    virtual void focusInEvent(QFocusEvent *e);
};

#endif // TALINEEDIT_H
